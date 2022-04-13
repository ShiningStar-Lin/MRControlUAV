
using System;

public class DataCodec
{
    /// <summary>
    /// 消息模型的序列化(数据前面加上数据的总长度）
    /// </summary>
    /// <param name="model"></param>
    /// <returns></returns>
    public static byte[] Encode(DataModel model)
    {
        int messageLength = model.Message == null ? 0 : model.Message.Length;

        //获取DataModel的长度
        byte[] lengthBytes = BitConverter.GetBytes(2 + messageLength);

        //消息 = 4字节长度(存贮DataModel的长度) + TYEP + REQUEST + MESSAGE
        byte[] newData = new byte[4 + 2 + messageLength];
        byte[] tryData = new byte[] { model.Type, model.Request };

        //数据长度
        Array.Copy(lengthBytes, 0, newData, 0, lengthBytes.Length);
        //消息类型+请求类型
        Array.Copy(tryData, 0, newData, 4, tryData.Length);

        //消息数据
        if(model.Message != null)
        {
            Array.Copy(model.Message, 0, newData, 6, model.Message.Length);
        }

        return newData;
    }

    /// <summary>
    /// 消息模型的反序列化
    /// </summary>
    /// <param name="data"></param>
    /// <returns></returns>
    public static DataModel Decode(byte[] data)
    {
        DataModel model = new DataModel();
        //消息类型,UserToken里面接收消息时已经做处理，去除掉4个字节的长度
        model.Type = data[0];
        model.Request = data[1];

        if(data.Length > 2)
        {
            byte[] message = new byte[data.Length - 2];
            Array.Copy(data, 2, message, 0, data.Length - 2);
            model.Message = message;
        }
        return model;
    }
}
