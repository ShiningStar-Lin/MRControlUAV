/* LCM type definition class file
 * This file was automatically generated by lcm-gen
 * DO NOT MODIFY BY HAND!!!!
 */

using System;
using System.Collections.Generic;
using System.IO;
using LCM.LCM;
 
namespace geometry_msgs
{
    public sealed class Point32 : LCM.LCM.LCMEncodable
    {
        public float x;
        public float y;
        public float z;
 
        public Point32()
        {
        }
 
        public static readonly ulong LCM_FINGERPRINT;
        public static readonly ulong LCM_FINGERPRINT_BASE = 0x2a14f112c253ac0cL;
 
        static Point32()
        {
            LCM_FINGERPRINT = _hashRecursive(new List<String>());
        }
 
        public static ulong _hashRecursive(List<String> classes)
        {
            if (classes.Contains("geometry_msgs.Point32"))
                return 0L;
 
            classes.Add("geometry_msgs.Point32");
            ulong hash = LCM_FINGERPRINT_BASE
                ;
            classes.RemoveAt(classes.Count - 1);
            return (hash<<1) + ((hash>>63)&1);
        }
 
        public void Encode(LCMDataOutputStream outs)
        {
            outs.Write((long) LCM_FINGERPRINT);
            _encodeRecursive(outs);
        }
 
        public void _encodeRecursive(LCMDataOutputStream outs)
        {
            outs.Write(this.x); 
 
            outs.Write(this.y); 
 
            outs.Write(this.z); 
 
        }
 
        public Point32(byte[] data) : this(new LCMDataInputStream(data))
        {
        }
 
        public Point32(LCMDataInputStream ins)
        {
            if ((ulong) ins.ReadInt64() != LCM_FINGERPRINT)
                throw new System.IO.IOException("LCM Decode error: bad fingerprint");
 
            _decodeRecursive(ins);
        }
 
        public static geometry_msgs.Point32 _decodeRecursiveFactory(LCMDataInputStream ins)
        {
            geometry_msgs.Point32 o = new geometry_msgs.Point32();
            o._decodeRecursive(ins);
            return o;
        }
 
        public void _decodeRecursive(LCMDataInputStream ins)
        {
            this.x = ins.ReadSingle();
 
            this.y = ins.ReadSingle();
 
            this.z = ins.ReadSingle();
 
        }
 
        public geometry_msgs.Point32 Copy()
        {
            geometry_msgs.Point32 outobj = new geometry_msgs.Point32();
            outobj.x = this.x;
 
            outobj.y = this.y;
 
            outobj.z = this.z;
 
            return outobj;
        }
    }
}

