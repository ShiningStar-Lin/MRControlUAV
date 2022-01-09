#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<Microsoft.Geospatial.TileId,=aD=>
struct Dictionary_2_t9F50D6C4439A146E288F7929B47D3BE1E2A11A0A;
// System.Collections.Generic.Dictionary`2<Microsoft.Geospatial.TileId,=aaF=>
struct Dictionary_2_tDF8CE5B085640093327FBEAAF2280DB01FB44C70;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t0C35F0DCE6015E0E091D5C9AFCF75A946C5A4E88;
// System.EventHandler`1<Microsoft.Maps.Unity.MapSession>
struct EventHandler_1_t80F99D0708F949013178DAAB697A8ADDD7E26CEF;
// System.Collections.Generic.HashSet`1<Microsoft.Maps.Unity.MapPin>
struct HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_t529C10528E8778EC56BA0DF91EE52405B7929BA6;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_t4DBF843B9E1A6950FB010155F4EFB24B47A6ACBE;
// System.Collections.Generic.List`1<=aBd=>
struct List_1_tB2E189377B78B6FCD234B39359957F63B0B298E7;
// System.Collections.Generic.List`1<=aaC=>
struct List_1_tA3331EB76E62250A803EA681CDF11700E1953463;
// System.Collections.Generic.List`1<=aaD=>
struct List_1_t98DB3208E8CB7E31A3B4A501EEFE344958781A96;
// System.Collections.Generic.List`1<=aab=>
struct List_1_t65A305F3F31F6FA01BE300EA528D7C8A5DA041EA;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<Microsoft.Maps.Unity.MapPin>
struct List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115;
// System.Collections.Generic.List`1<Microsoft.Maps.Unity.MapRenderer>
struct List_1_tB730799AB9076F9B3BBB2088B97BB4241771F8D0;
// System.Collections.Generic.List`1<UnityEngine.Mesh>
struct List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<Microsoft.Geospatial.TileId>
struct List_1_t574B55493CD44B678FE0A8C2ED49A502CBF73DFD;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocketReceiveResult>
struct Task_1_t79E764D87096B674F330B1306805A0FF72B2E83E;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Photon.Realtime.ILobbyCallbacks[]
struct ILobbyCallbacksU5BU5D_t92A1F19E657F29CC3E8D1777A31B1B606A1DD08C;
// Photon.Realtime.IMatchmakingCallbacks[]
struct IMatchmakingCallbacksU5BU5D_tA36C2F471B13DCC3E6C96FC798C697BCA35CE868;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Microsoft.Geospatial.TileId[]
struct TileIdU5BU5D_tE329647BFAD80DC51B9CBF9693B1BA05A742A13D;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
// System.Net.WebSockets.WebSocketState[]
struct WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4;
// =a6=
struct U3Da6U3D_tE932E50BCEBD1F457996E4132D2298E13C361944;
// =a8=
struct U3Da8U3D_tF0DD36AB9297E82E05661CBABB123D1C496EFE84;
// =aBf=
struct U3DaBfU3D_t8AF97094D7FF908E5FEE3E770A7106B8F3157A41;
// =aF=
struct U3DaFU3D_t5939A8DFBCA13E3C0A2C9909883621E99494F95B;
// =aa9=
struct U3Daa9U3D_tA2FDF26F19D128EC610D68E365E8CC4F511B0023;
// =aaF=
struct U3DaaFU3D_t6A4C39BFEC1A0FB367F57D8E11C4429204018D32;
// =abC=
struct U3DabCU3D_t61789023ABF460958B83F16E10457546C34B7128;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D;
// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// System.Security.Cryptography.CryptoStream
struct CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66;
// Microsoft.Maps.Unity.ElevationTileLayerList
struct ElevationTileLayerList_t0B1B55454B735FE797DEDC3914D433619EF64596;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t001D97000AA0178942D19FC52942472140472E5E;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Collections.IList
struct IList_tB15A9D6625D09661D6E47976BB626C703EC81910;
// Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual
struct ILostTrackingVisual_tF2454A398CC66BF968E6CFDA1079540F168C5DBB;
// Microsoft.Maps.Unity.IMapSceneAnimationController
struct IMapSceneAnimationController_t7AC166DE2CEE7970CFEAB67CFB1F81946ADD3148;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_tF1E8AAA822A4BC884BC20CAB4B84F5826BBE282C;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t063D0EA483485B6D709977E7F4462E3731048173;
// System.Linq.Expressions.IParameterProvider
struct IParameterProvider_t90AB4ED681A8EC001AF08745D016CCAB970E3AA5;
// System.ComponentModel.ISite
struct ISite_tC1E55EC6FA743BE8C9D79C838308E788B90C8790;
// System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter
struct ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899;
// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A;
// Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile
struct LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// Microsoft.Maps.Unity.MapLabelLayer
struct MapLabelLayer_t9D22FED9F94903011A544C2BE774E1451CB6458C;
// Microsoft.Maps.Unity.MapSession
struct MapSession_t5FA57D2A6DD2D6FEFA0D74AAC5457E9B7283FB7B;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Security.Cryptography.TailStream
struct TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Microsoft.Maps.Unity.TextureTileLayerList
struct TextureTileLayerList_tF1EE1A40F4F4867E65AA4F4604055E5A9EDC4789;
// System.Threading.Timer
struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB;
// System.Security.Cryptography.TripleDES
struct TripleDES_t41D78B2309C83223C73DFC80B18216BA8917B136;
// System.Type
struct Type_t;
// System.Text.UTF8Encoding
struct UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD;
// System.Net.WebSockets.ManagedWebSocket/Utf8MessageState
struct Utf8MessageState_tE921FCD77394CBA2FFCAB969044B8068951955D3;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Guid_t ;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ;
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 ;
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ;
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableVector
struct NOVTABLE IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() = 0;
};
// Windows.UI.Xaml.Interop.IBindableVectorView
struct NOVTABLE IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVectorView_GetAt_mB119DB25AF57A337D2C7112063778434CE0F5CF5(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVectorView_get_Size_m4F48139B27CB215D7E728F77E748FA6573F7DA09(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVectorView_IndexOf_mD85EC41D34BC2E450FA0133CC802906157D765F2(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() = 0;
};

// System.Object


// System.Dynamic.Utils.ListProvider`1<System.Linq.Expressions.ParameterExpression>
struct ListProvider_1_t73D0C3FDF8DCB078B4F9DF9526BF54F6345F9526  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.List`1<Photon.Realtime.ILobbyCallbacks>
struct List_1_t0DFA793DEB3FB7DCF1640813FC01281C229D4B8E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ILobbyCallbacksU5BU5D_t92A1F19E657F29CC3E8D1777A31B1B606A1DD08C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0DFA793DEB3FB7DCF1640813FC01281C229D4B8E, ____items_1)); }
	inline ILobbyCallbacksU5BU5D_t92A1F19E657F29CC3E8D1777A31B1B606A1DD08C* get__items_1() const { return ____items_1; }
	inline ILobbyCallbacksU5BU5D_t92A1F19E657F29CC3E8D1777A31B1B606A1DD08C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ILobbyCallbacksU5BU5D_t92A1F19E657F29CC3E8D1777A31B1B606A1DD08C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0DFA793DEB3FB7DCF1640813FC01281C229D4B8E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0DFA793DEB3FB7DCF1640813FC01281C229D4B8E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0DFA793DEB3FB7DCF1640813FC01281C229D4B8E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0DFA793DEB3FB7DCF1640813FC01281C229D4B8E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ILobbyCallbacksU5BU5D_t92A1F19E657F29CC3E8D1777A31B1B606A1DD08C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0DFA793DEB3FB7DCF1640813FC01281C229D4B8E_StaticFields, ____emptyArray_5)); }
	inline ILobbyCallbacksU5BU5D_t92A1F19E657F29CC3E8D1777A31B1B606A1DD08C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ILobbyCallbacksU5BU5D_t92A1F19E657F29CC3E8D1777A31B1B606A1DD08C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ILobbyCallbacksU5BU5D_t92A1F19E657F29CC3E8D1777A31B1B606A1DD08C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Realtime.IMatchmakingCallbacks>
struct List_1_t3541A2225D785EFFDC52FF0462284B3290B628FD  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IMatchmakingCallbacksU5BU5D_tA36C2F471B13DCC3E6C96FC798C697BCA35CE868* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3541A2225D785EFFDC52FF0462284B3290B628FD, ____items_1)); }
	inline IMatchmakingCallbacksU5BU5D_tA36C2F471B13DCC3E6C96FC798C697BCA35CE868* get__items_1() const { return ____items_1; }
	inline IMatchmakingCallbacksU5BU5D_tA36C2F471B13DCC3E6C96FC798C697BCA35CE868** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IMatchmakingCallbacksU5BU5D_tA36C2F471B13DCC3E6C96FC798C697BCA35CE868* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3541A2225D785EFFDC52FF0462284B3290B628FD, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3541A2225D785EFFDC52FF0462284B3290B628FD, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3541A2225D785EFFDC52FF0462284B3290B628FD, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3541A2225D785EFFDC52FF0462284B3290B628FD_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IMatchmakingCallbacksU5BU5D_tA36C2F471B13DCC3E6C96FC798C697BCA35CE868* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3541A2225D785EFFDC52FF0462284B3290B628FD_StaticFields, ____emptyArray_5)); }
	inline IMatchmakingCallbacksU5BU5D_tA36C2F471B13DCC3E6C96FC798C697BCA35CE868* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IMatchmakingCallbacksU5BU5D_tA36C2F471B13DCC3E6C96FC798C697BCA35CE868** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IMatchmakingCallbacksU5BU5D_tA36C2F471B13DCC3E6C96FC798C697BCA35CE868* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_0;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___HashValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::m_bDisposed
	bool ___m_bDisposed_3;

public:
	inline static int32_t get_offset_of_HashSizeValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___HashSizeValue_0)); }
	inline int32_t get_HashSizeValue_0() const { return ___HashSizeValue_0; }
	inline int32_t* get_address_of_HashSizeValue_0() { return &___HashSizeValue_0; }
	inline void set_HashSizeValue_0(int32_t value)
	{
		___HashSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_HashValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___HashValue_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_HashValue_1() const { return ___HashValue_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_HashValue_1() { return &___HashValue_1; }
	inline void set_HashValue_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___HashValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HashValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_m_bDisposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___m_bDisposed_3)); }
	inline bool get_m_bDisposed_3() const { return ___m_bDisposed_3; }
	inline bool* get_address_of_m_bDisposed_3() { return &___m_bDisposed_3; }
	inline void set_m_bDisposed_3(bool value)
	{
		___m_bDisposed_3 = value;
	}
};


// System.ComponentModel.ListSortDescriptionCollection
struct ListSortDescriptionCollection_tC9C0CEDAF9496F7A1A7E6F665189295CE400F60A  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.ListSortDescriptionCollection::sorts
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___sorts_0;

public:
	inline static int32_t get_offset_of_sorts_0() { return static_cast<int32_t>(offsetof(ListSortDescriptionCollection_tC9C0CEDAF9496F7A1A7E6F665189295CE400F60A, ___sorts_0)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_sorts_0() const { return ___sorts_0; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_sorts_0() { return &___sorts_0; }
	inline void set_sorts_0(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___sorts_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sorts_0), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter
struct ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899  : public RuntimeObject
{
public:
	// System.Collections.IList System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::_list
	RuntimeObject* ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899, ____list_0)); }
	inline RuntimeObject* get__list_0() const { return ____list_0; }
	inline RuntimeObject** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(RuntimeObject* value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____list_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.ComponentModel.MarshalByValueComponent
struct MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D  : public RuntimeObject
{
public:
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::site
	RuntimeObject* ___site_1;
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::events
	EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * ___events_2;

public:
	inline static int32_t get_offset_of_site_1() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D, ___site_1)); }
	inline RuntimeObject* get_site_1() const { return ___site_1; }
	inline RuntimeObject** get_address_of_site_1() { return &___site_1; }
	inline void set_site_1(RuntimeObject* value)
	{
		___site_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___site_1), (void*)value);
	}

	inline static int32_t get_offset_of_events_2() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D, ___events_2)); }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * get_events_2() const { return ___events_2; }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 ** get_address_of_events_2() { return &___events_2; }
	inline void set_events_2(EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * value)
	{
		___events_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_2), (void*)value);
	}
};

struct MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D_StaticFields
{
public:
	// System.Object System.ComponentModel.MarshalByValueComponent::EventDisposed
	RuntimeObject * ___EventDisposed_0;

public:
	inline static int32_t get_offset_of_EventDisposed_0() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D_StaticFields, ___EventDisposed_0)); }
	inline RuntimeObject * get_EventDisposed_0() const { return ___EventDisposed_0; }
	inline RuntimeObject ** get_address_of_EventDisposed_0() { return &___EventDisposed_0; }
	inline void set_EventDisposed_0(RuntimeObject * value)
	{
		___EventDisposed_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventDisposed_0), (void*)value);
	}
};


// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.MatchCollection::_regex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ____regex_0;
	// System.Collections.ArrayList System.Text.RegularExpressions.MatchCollection::_matches
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____matches_1;
	// System.Boolean System.Text.RegularExpressions.MatchCollection::_done
	bool ____done_2;
	// System.String System.Text.RegularExpressions.MatchCollection::_input
	String_t* ____input_3;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_beginning
	int32_t ____beginning_4;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_length
	int32_t ____length_5;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_startat
	int32_t ____startat_6;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_prevlen
	int32_t ____prevlen_7;

public:
	inline static int32_t get_offset_of__regex_0() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____regex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get__regex_0() const { return ____regex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of__regex_0() { return &____regex_0; }
	inline void set__regex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		____regex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____regex_0), (void*)value);
	}

	inline static int32_t get_offset_of__matches_1() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____matches_1)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__matches_1() const { return ____matches_1; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__matches_1() { return &____matches_1; }
	inline void set__matches_1(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____matches_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____matches_1), (void*)value);
	}

	inline static int32_t get_offset_of__done_2() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____done_2)); }
	inline bool get__done_2() const { return ____done_2; }
	inline bool* get_address_of__done_2() { return &____done_2; }
	inline void set__done_2(bool value)
	{
		____done_2 = value;
	}

	inline static int32_t get_offset_of__input_3() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____input_3)); }
	inline String_t* get__input_3() const { return ____input_3; }
	inline String_t** get_address_of__input_3() { return &____input_3; }
	inline void set__input_3(String_t* value)
	{
		____input_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____input_3), (void*)value);
	}

	inline static int32_t get_offset_of__beginning_4() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____beginning_4)); }
	inline int32_t get__beginning_4() const { return ____beginning_4; }
	inline int32_t* get_address_of__beginning_4() { return &____beginning_4; }
	inline void set__beginning_4(int32_t value)
	{
		____beginning_4 = value;
	}

	inline static int32_t get_offset_of__length_5() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____length_5)); }
	inline int32_t get__length_5() const { return ____length_5; }
	inline int32_t* get_address_of__length_5() { return &____length_5; }
	inline void set__length_5(int32_t value)
	{
		____length_5 = value;
	}

	inline static int32_t get_offset_of__startat_6() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____startat_6)); }
	inline int32_t get__startat_6() const { return ____startat_6; }
	inline int32_t* get_address_of__startat_6() { return &____startat_6; }
	inline void set__startat_6(int32_t value)
	{
		____startat_6 = value;
	}

	inline static int32_t get_offset_of__prevlen_7() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____prevlen_7)); }
	inline int32_t get__prevlen_7() const { return ____prevlen_7; }
	inline int32_t* get_address_of__prevlen_7() { return &____prevlen_7; }
	inline void set__prevlen_7(int32_t value)
	{
		____prevlen_7 = value;
	}
};

struct MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_StaticFields
{
public:
	// System.Int32 System.Text.RegularExpressions.MatchCollection::infinite
	int32_t ___infinite_8;

public:
	inline static int32_t get_offset_of_infinite_8() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_StaticFields, ___infinite_8)); }
	inline int32_t get_infinite_8() const { return ___infinite_8; }
	inline int32_t* get_address_of_infinite_8() { return &___infinite_8; }
	inline void set_infinite_8(int32_t value)
	{
		___infinite_8 = value;
	}
};


// System.Runtime.Remoting.Messaging.MessageDictionary
struct MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MessageDictionary::_internalProperties
	RuntimeObject* ____internalProperties_0;
	// System.Runtime.Remoting.Messaging.IMethodMessage System.Runtime.Remoting.Messaging.MessageDictionary::_message
	RuntimeObject* ____message_1;
	// System.String[] System.Runtime.Remoting.Messaging.MessageDictionary::_methodKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____methodKeys_2;
	// System.Boolean System.Runtime.Remoting.Messaging.MessageDictionary::_ownProperties
	bool ____ownProperties_3;

public:
	inline static int32_t get_offset_of__internalProperties_0() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____internalProperties_0)); }
	inline RuntimeObject* get__internalProperties_0() const { return ____internalProperties_0; }
	inline RuntimeObject** get_address_of__internalProperties_0() { return &____internalProperties_0; }
	inline void set__internalProperties_0(RuntimeObject* value)
	{
		____internalProperties_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____internalProperties_0), (void*)value);
	}

	inline static int32_t get_offset_of__message_1() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____message_1)); }
	inline RuntimeObject* get__message_1() const { return ____message_1; }
	inline RuntimeObject** get_address_of__message_1() { return &____message_1; }
	inline void set__message_1(RuntimeObject* value)
	{
		____message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_1), (void*)value);
	}

	inline static int32_t get_offset_of__methodKeys_2() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____methodKeys_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__methodKeys_2() const { return ____methodKeys_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__methodKeys_2() { return &____methodKeys_2; }
	inline void set__methodKeys_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____methodKeys_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____methodKeys_2), (void*)value);
	}

	inline static int32_t get_offset_of__ownProperties_3() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____ownProperties_3)); }
	inline bool get__ownProperties_3() const { return ____ownProperties_3; }
	inline bool* get_address_of__ownProperties_3() { return &____ownProperties_3; }
	inline void set__ownProperties_3(bool value)
	{
		____ownProperties_3 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Net.WebSockets.WebSocket
struct WebSocket_t163494E6D52FFC7BACDCD1488EB1B61B392C298D  : public RuntimeObject
{
public:

public:
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// Windows.Foundation.DateTime
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Security.Cryptography.KeyedHashAlgorithm
struct KeyedHashAlgorithm_t681B59FF58ABCA45D1694A36390AF83AAE2F7F08  : public HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31
{
public:
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___KeyValue_4;

public:
	inline static int32_t get_offset_of_KeyValue_4() { return static_cast<int32_t>(offsetof(KeyedHashAlgorithm_t681B59FF58ABCA45D1694A36390AF83AAE2F7F08, ___KeyValue_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_KeyValue_4() const { return ___KeyValue_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_KeyValue_4() { return &___KeyValue_4; }
	inline void set_KeyValue_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___KeyValue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeyValue_4), (void*)value);
	}
};


// Microsoft.Geospatial.LatLon
struct LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7 
{
public:
	// System.Double Microsoft.Geospatial.LatLon::<LongitudeInDegrees>k__BackingField
	double ___U3CLongitudeInDegreesU3Ek__BackingField_8;
	// System.Double Microsoft.Geospatial.LatLon::<LatitudeInDegrees>k__BackingField
	double ___U3CLatitudeInDegreesU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CLongitudeInDegreesU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7, ___U3CLongitudeInDegreesU3Ek__BackingField_8)); }
	inline double get_U3CLongitudeInDegreesU3Ek__BackingField_8() const { return ___U3CLongitudeInDegreesU3Ek__BackingField_8; }
	inline double* get_address_of_U3CLongitudeInDegreesU3Ek__BackingField_8() { return &___U3CLongitudeInDegreesU3Ek__BackingField_8; }
	inline void set_U3CLongitudeInDegreesU3Ek__BackingField_8(double value)
	{
		___U3CLongitudeInDegreesU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CLatitudeInDegreesU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7, ___U3CLatitudeInDegreesU3Ek__BackingField_9)); }
	inline double get_U3CLatitudeInDegreesU3Ek__BackingField_9() const { return ___U3CLatitudeInDegreesU3Ek__BackingField_9; }
	inline double* get_address_of_U3CLatitudeInDegreesU3Ek__BackingField_9() { return &___U3CLatitudeInDegreesU3Ek__BackingField_9; }
	inline void set_U3CLatitudeInDegreesU3Ek__BackingField_9(double value)
	{
		___U3CLatitudeInDegreesU3Ek__BackingField_9 = value;
	}
};

struct LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7_StaticFields
{
public:
	// Microsoft.Geospatial.LatLon Microsoft.Geospatial.LatLon::MinValue
	LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7  ___MinValue_4;
	// Microsoft.Geospatial.LatLon Microsoft.Geospatial.LatLon::MaxValue
	LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7  ___MaxValue_5;
	// Microsoft.Geospatial.LatLon Microsoft.Geospatial.LatLon::Origin
	LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7  ___Origin_7;

public:
	inline static int32_t get_offset_of_MinValue_4() { return static_cast<int32_t>(offsetof(LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7_StaticFields, ___MinValue_4)); }
	inline LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7  get_MinValue_4() const { return ___MinValue_4; }
	inline LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7 * get_address_of_MinValue_4() { return &___MinValue_4; }
	inline void set_MinValue_4(LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7  value)
	{
		___MinValue_4 = value;
	}

	inline static int32_t get_offset_of_MaxValue_5() { return static_cast<int32_t>(offsetof(LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7_StaticFields, ___MaxValue_5)); }
	inline LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7  get_MaxValue_5() const { return ___MaxValue_5; }
	inline LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7 * get_address_of_MaxValue_5() { return &___MaxValue_5; }
	inline void set_MaxValue_5(LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7  value)
	{
		___MaxValue_5 = value;
	}

	inline static int32_t get_offset_of_Origin_7() { return static_cast<int32_t>(offsetof(LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7_StaticFields, ___Origin_7)); }
	inline LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7  get_Origin_7() const { return ___Origin_7; }
	inline LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7 * get_address_of_Origin_7() { return &___Origin_7; }
	inline void set_Origin_7(LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7  value)
	{
		___Origin_7 = value;
	}
};


// Microsoft.Maps.Unity.LatLonWrapper
struct LatLonWrapper_tBA271F15F917AD3DA4CE46D59C170E29A20CE620 
{
public:
	// System.Double Microsoft.Maps.Unity.LatLonWrapper::_latitude
	double ____latitude_0;
	// System.Double Microsoft.Maps.Unity.LatLonWrapper::_longitude
	double ____longitude_1;

public:
	inline static int32_t get_offset_of__latitude_0() { return static_cast<int32_t>(offsetof(LatLonWrapper_tBA271F15F917AD3DA4CE46D59C170E29A20CE620, ____latitude_0)); }
	inline double get__latitude_0() const { return ____latitude_0; }
	inline double* get_address_of__latitude_0() { return &____latitude_0; }
	inline void set__latitude_0(double value)
	{
		____latitude_0 = value;
	}

	inline static int32_t get_offset_of__longitude_1() { return static_cast<int32_t>(offsetof(LatLonWrapper_tBA271F15F917AD3DA4CE46D59C170E29A20CE620, ____longitude_1)); }
	inline double get__longitude_1() const { return ____longitude_1; }
	inline double* get_address_of__longitude_1() { return &____longitude_1; }
	inline void set__longitude_1(double value)
	{
		____longitude_1 = value;
	}
};


// System.Dynamic.Utils.ListParameterProvider
struct ListParameterProvider_tD1DE24A9B96B6CFC88A74F00D9556CE873940D0F  : public ListProvider_1_t73D0C3FDF8DCB078B4F9DF9526BF54F6345F9526
{
public:
	// System.Linq.Expressions.IParameterProvider System.Dynamic.Utils.ListParameterProvider::_provider
	RuntimeObject* ____provider_0;
	// System.Linq.Expressions.ParameterExpression System.Dynamic.Utils.ListParameterProvider::_arg0
	ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ____arg0_1;

public:
	inline static int32_t get_offset_of__provider_0() { return static_cast<int32_t>(offsetof(ListParameterProvider_tD1DE24A9B96B6CFC88A74F00D9556CE873940D0F, ____provider_0)); }
	inline RuntimeObject* get__provider_0() const { return ____provider_0; }
	inline RuntimeObject** get_address_of__provider_0() { return &____provider_0; }
	inline void set__provider_0(RuntimeObject* value)
	{
		____provider_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____provider_0), (void*)value);
	}

	inline static int32_t get_offset_of__arg0_1() { return static_cast<int32_t>(offsetof(ListParameterProvider_tD1DE24A9B96B6CFC88A74F00D9556CE873940D0F, ____arg0_1)); }
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * get__arg0_1() const { return ____arg0_1; }
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE ** get_address_of__arg0_1() { return &____arg0_1; }
	inline void set__arg0_1(ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * value)
	{
		____arg0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____arg0_1), (void*)value);
	}
};


// Photon.Realtime.LobbyCallbacksContainer
struct LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788  : public List_1_t0DFA793DEB3FB7DCF1640813FC01281C229D4B8E
{
public:
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.LobbyCallbacksContainer::client
	LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * ___client_6;

public:
	inline static int32_t get_offset_of_client_6() { return static_cast<int32_t>(offsetof(LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788, ___client_6)); }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * get_client_6() const { return ___client_6; }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A ** get_address_of_client_6() { return &___client_6; }
	inline void set_client_6(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * value)
	{
		___client_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_6), (void*)value);
	}
};


// System.Runtime.Remoting.Messaging.MCMDictionary
struct MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF  : public MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE
{
public:

public:
};

struct MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.MCMDictionary::InternalKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___InternalKeys_4;

public:
	inline static int32_t get_offset_of_InternalKeys_4() { return static_cast<int32_t>(offsetof(MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_StaticFields, ___InternalKeys_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_InternalKeys_4() const { return ___InternalKeys_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_InternalKeys_4() { return &___InternalKeys_4; }
	inline void set_InternalKeys_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___InternalKeys_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalKeys_4), (void*)value);
	}
};


// Mono.Security.Cryptography.MD2
struct MD2_t9D20CEB2C863922737CE4F279D80B0D4E7AEEB50  : public HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31
{
public:

public:
};


// Mono.Security.Cryptography.MD2
struct MD2_tD2ECFF2E7CD137AF136BC822DA2A7ECEAF3B0E7B  : public HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31
{
public:

public:
};


// Mono.Security.Cryptography.MD4
struct MD4_t80647CC3422D7B2C41A8EE3E8772B523AEE3B478  : public HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31
{
public:

public:
};


// Mono.Security.Cryptography.MD4
struct MD4_tFCEEF148AD7E7BAF7744F6FFEE57A9B95F4EE0FD  : public HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31
{
public:

public:
};


// System.Security.Cryptography.MD5
struct MD5_t6B7B1C4D40C383D0AD84BB8DDE4DE4B29BA627FB  : public HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31
{
public:

public:
};


// Photon.Realtime.MatchMakingCallbacksContainer
struct MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09  : public List_1_t3541A2225D785EFFDC52FF0462284B3290B628FD
{
public:
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.MatchMakingCallbacksContainer::client
	LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * ___client_6;

public:
	inline static int32_t get_offset_of_client_6() { return static_cast<int32_t>(offsetof(MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09, ___client_6)); }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * get_client_6() const { return ___client_6; }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A ** get_address_of_client_6() { return &___client_6; }
	inline void set_client_6(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * value)
	{
		___client_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_6), (void*)value);
	}
};


// System.Numerics.Matrix4x4
struct Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 
{
public:
	// System.Single System.Numerics.Matrix4x4::M11
	float ___M11_0;
	// System.Single System.Numerics.Matrix4x4::M12
	float ___M12_1;
	// System.Single System.Numerics.Matrix4x4::M13
	float ___M13_2;
	// System.Single System.Numerics.Matrix4x4::M14
	float ___M14_3;
	// System.Single System.Numerics.Matrix4x4::M21
	float ___M21_4;
	// System.Single System.Numerics.Matrix4x4::M22
	float ___M22_5;
	// System.Single System.Numerics.Matrix4x4::M23
	float ___M23_6;
	// System.Single System.Numerics.Matrix4x4::M24
	float ___M24_7;
	// System.Single System.Numerics.Matrix4x4::M31
	float ___M31_8;
	// System.Single System.Numerics.Matrix4x4::M32
	float ___M32_9;
	// System.Single System.Numerics.Matrix4x4::M33
	float ___M33_10;
	// System.Single System.Numerics.Matrix4x4::M34
	float ___M34_11;
	// System.Single System.Numerics.Matrix4x4::M41
	float ___M41_12;
	// System.Single System.Numerics.Matrix4x4::M42
	float ___M42_13;
	// System.Single System.Numerics.Matrix4x4::M43
	float ___M43_14;
	// System.Single System.Numerics.Matrix4x4::M44
	float ___M44_15;

public:
	inline static int32_t get_offset_of_M11_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M11_0)); }
	inline float get_M11_0() const { return ___M11_0; }
	inline float* get_address_of_M11_0() { return &___M11_0; }
	inline void set_M11_0(float value)
	{
		___M11_0 = value;
	}

	inline static int32_t get_offset_of_M12_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M12_1)); }
	inline float get_M12_1() const { return ___M12_1; }
	inline float* get_address_of_M12_1() { return &___M12_1; }
	inline void set_M12_1(float value)
	{
		___M12_1 = value;
	}

	inline static int32_t get_offset_of_M13_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M13_2)); }
	inline float get_M13_2() const { return ___M13_2; }
	inline float* get_address_of_M13_2() { return &___M13_2; }
	inline void set_M13_2(float value)
	{
		___M13_2 = value;
	}

	inline static int32_t get_offset_of_M14_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M14_3)); }
	inline float get_M14_3() const { return ___M14_3; }
	inline float* get_address_of_M14_3() { return &___M14_3; }
	inline void set_M14_3(float value)
	{
		___M14_3 = value;
	}

	inline static int32_t get_offset_of_M21_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M21_4)); }
	inline float get_M21_4() const { return ___M21_4; }
	inline float* get_address_of_M21_4() { return &___M21_4; }
	inline void set_M21_4(float value)
	{
		___M21_4 = value;
	}

	inline static int32_t get_offset_of_M22_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M22_5)); }
	inline float get_M22_5() const { return ___M22_5; }
	inline float* get_address_of_M22_5() { return &___M22_5; }
	inline void set_M22_5(float value)
	{
		___M22_5 = value;
	}

	inline static int32_t get_offset_of_M23_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M23_6)); }
	inline float get_M23_6() const { return ___M23_6; }
	inline float* get_address_of_M23_6() { return &___M23_6; }
	inline void set_M23_6(float value)
	{
		___M23_6 = value;
	}

	inline static int32_t get_offset_of_M24_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M24_7)); }
	inline float get_M24_7() const { return ___M24_7; }
	inline float* get_address_of_M24_7() { return &___M24_7; }
	inline void set_M24_7(float value)
	{
		___M24_7 = value;
	}

	inline static int32_t get_offset_of_M31_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M31_8)); }
	inline float get_M31_8() const { return ___M31_8; }
	inline float* get_address_of_M31_8() { return &___M31_8; }
	inline void set_M31_8(float value)
	{
		___M31_8 = value;
	}

	inline static int32_t get_offset_of_M32_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M32_9)); }
	inline float get_M32_9() const { return ___M32_9; }
	inline float* get_address_of_M32_9() { return &___M32_9; }
	inline void set_M32_9(float value)
	{
		___M32_9 = value;
	}

	inline static int32_t get_offset_of_M33_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M33_10)); }
	inline float get_M33_10() const { return ___M33_10; }
	inline float* get_address_of_M33_10() { return &___M33_10; }
	inline void set_M33_10(float value)
	{
		___M33_10 = value;
	}

	inline static int32_t get_offset_of_M34_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M34_11)); }
	inline float get_M34_11() const { return ___M34_11; }
	inline float* get_address_of_M34_11() { return &___M34_11; }
	inline void set_M34_11(float value)
	{
		___M34_11 = value;
	}

	inline static int32_t get_offset_of_M41_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M41_12)); }
	inline float get_M41_12() const { return ___M41_12; }
	inline float* get_address_of_M41_12() { return &___M41_12; }
	inline void set_M41_12(float value)
	{
		___M41_12 = value;
	}

	inline static int32_t get_offset_of_M42_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M42_13)); }
	inline float get_M42_13() const { return ___M42_13; }
	inline float* get_address_of_M42_13() { return &___M42_13; }
	inline void set_M42_13(float value)
	{
		___M42_13 = value;
	}

	inline static int32_t get_offset_of_M43_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M43_14)); }
	inline float get_M43_14() const { return ___M43_14; }
	inline float* get_address_of_M43_14() { return &___M43_14; }
	inline void set_M43_14(float value)
	{
		___M43_14 = value;
	}

	inline static int32_t get_offset_of_M44_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M44_15)); }
	inline float get_M44_15() const { return ___M44_15; }
	inline float* get_address_of_M44_15() { return &___M44_15; }
	inline void set_M44_15(float value)
	{
		___M44_15 = value;
	}
};

struct Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_StaticFields
{
public:
	// System.Numerics.Matrix4x4 System.Numerics.Matrix4x4::_identity
	Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  ____identity_16;

public:
	inline static int32_t get_offset_of__identity_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_StaticFields, ____identity_16)); }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  get__identity_16() const { return ____identity_16; }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * get_address_of__identity_16() { return &____identity_16; }
	inline void set__identity_16(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  value)
	{
		____identity_16 = value;
	}
};


// Windows.Foundation.Numerics.Matrix4x4
struct Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 
{
public:
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M11
	float ___M11_0;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M12
	float ___M12_1;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M13
	float ___M13_2;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M14
	float ___M14_3;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M21
	float ___M21_4;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M22
	float ___M22_5;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M23
	float ___M23_6;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M24
	float ___M24_7;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M31
	float ___M31_8;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M32
	float ___M32_9;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M33
	float ___M33_10;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M34
	float ___M34_11;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M41
	float ___M41_12;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M42
	float ___M42_13;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M43
	float ___M43_14;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M44
	float ___M44_15;

public:
	inline static int32_t get_offset_of_M11_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M11_0)); }
	inline float get_M11_0() const { return ___M11_0; }
	inline float* get_address_of_M11_0() { return &___M11_0; }
	inline void set_M11_0(float value)
	{
		___M11_0 = value;
	}

	inline static int32_t get_offset_of_M12_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M12_1)); }
	inline float get_M12_1() const { return ___M12_1; }
	inline float* get_address_of_M12_1() { return &___M12_1; }
	inline void set_M12_1(float value)
	{
		___M12_1 = value;
	}

	inline static int32_t get_offset_of_M13_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M13_2)); }
	inline float get_M13_2() const { return ___M13_2; }
	inline float* get_address_of_M13_2() { return &___M13_2; }
	inline void set_M13_2(float value)
	{
		___M13_2 = value;
	}

	inline static int32_t get_offset_of_M14_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M14_3)); }
	inline float get_M14_3() const { return ___M14_3; }
	inline float* get_address_of_M14_3() { return &___M14_3; }
	inline void set_M14_3(float value)
	{
		___M14_3 = value;
	}

	inline static int32_t get_offset_of_M21_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M21_4)); }
	inline float get_M21_4() const { return ___M21_4; }
	inline float* get_address_of_M21_4() { return &___M21_4; }
	inline void set_M21_4(float value)
	{
		___M21_4 = value;
	}

	inline static int32_t get_offset_of_M22_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M22_5)); }
	inline float get_M22_5() const { return ___M22_5; }
	inline float* get_address_of_M22_5() { return &___M22_5; }
	inline void set_M22_5(float value)
	{
		___M22_5 = value;
	}

	inline static int32_t get_offset_of_M23_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M23_6)); }
	inline float get_M23_6() const { return ___M23_6; }
	inline float* get_address_of_M23_6() { return &___M23_6; }
	inline void set_M23_6(float value)
	{
		___M23_6 = value;
	}

	inline static int32_t get_offset_of_M24_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M24_7)); }
	inline float get_M24_7() const { return ___M24_7; }
	inline float* get_address_of_M24_7() { return &___M24_7; }
	inline void set_M24_7(float value)
	{
		___M24_7 = value;
	}

	inline static int32_t get_offset_of_M31_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M31_8)); }
	inline float get_M31_8() const { return ___M31_8; }
	inline float* get_address_of_M31_8() { return &___M31_8; }
	inline void set_M31_8(float value)
	{
		___M31_8 = value;
	}

	inline static int32_t get_offset_of_M32_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M32_9)); }
	inline float get_M32_9() const { return ___M32_9; }
	inline float* get_address_of_M32_9() { return &___M32_9; }
	inline void set_M32_9(float value)
	{
		___M32_9 = value;
	}

	inline static int32_t get_offset_of_M33_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M33_10)); }
	inline float get_M33_10() const { return ___M33_10; }
	inline float* get_address_of_M33_10() { return &___M33_10; }
	inline void set_M33_10(float value)
	{
		___M33_10 = value;
	}

	inline static int32_t get_offset_of_M34_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M34_11)); }
	inline float get_M34_11() const { return ___M34_11; }
	inline float* get_address_of_M34_11() { return &___M34_11; }
	inline void set_M34_11(float value)
	{
		___M34_11 = value;
	}

	inline static int32_t get_offset_of_M41_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M41_12)); }
	inline float get_M41_12() const { return ___M41_12; }
	inline float* get_address_of_M41_12() { return &___M41_12; }
	inline void set_M41_12(float value)
	{
		___M41_12 = value;
	}

	inline static int32_t get_offset_of_M42_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M42_13)); }
	inline float get_M42_13() const { return ___M42_13; }
	inline float* get_address_of_M42_13() { return &___M42_13; }
	inline void set_M42_13(float value)
	{
		___M42_13 = value;
	}

	inline static int32_t get_offset_of_M43_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M43_14)); }
	inline float get_M43_14() const { return ___M43_14; }
	inline float* get_address_of_M43_14() { return &___M43_14; }
	inline void set_M43_14(float value)
	{
		___M43_14 = value;
	}

	inline static int32_t get_offset_of_M44_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M44_15)); }
	inline float get_M44_15() const { return ___M44_15; }
	inline float* get_address_of_M44_15() { return &___M44_15; }
	inline void set_M44_15(float value)
	{
		___M44_15 = value;
	}
};


// Microsoft.Geospatial.MercatorCoordinate
struct MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578 
{
public:
	// System.Double Microsoft.Geospatial.MercatorCoordinate::<X>k__BackingField
	double ___U3CXU3Ek__BackingField_5;
	// System.Double Microsoft.Geospatial.MercatorCoordinate::<Y>k__BackingField
	double ___U3CYU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CXU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578, ___U3CXU3Ek__BackingField_5)); }
	inline double get_U3CXU3Ek__BackingField_5() const { return ___U3CXU3Ek__BackingField_5; }
	inline double* get_address_of_U3CXU3Ek__BackingField_5() { return &___U3CXU3Ek__BackingField_5; }
	inline void set_U3CXU3Ek__BackingField_5(double value)
	{
		___U3CXU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CYU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578, ___U3CYU3Ek__BackingField_6)); }
	inline double get_U3CYU3Ek__BackingField_6() const { return ___U3CYU3Ek__BackingField_6; }
	inline double* get_address_of_U3CYU3Ek__BackingField_6() { return &___U3CYU3Ek__BackingField_6; }
	inline void set_U3CYU3Ek__BackingField_6(double value)
	{
		___U3CYU3Ek__BackingField_6 = value;
	}
};

struct MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578_StaticFields
{
public:
	// Microsoft.Geospatial.MercatorCoordinate Microsoft.Geospatial.MercatorCoordinate::Origin
	MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578  ___Origin_4;

public:
	inline static int32_t get_offset_of_Origin_4() { return static_cast<int32_t>(offsetof(MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578_StaticFields, ___Origin_4)); }
	inline MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578  get_Origin_4() const { return ___Origin_4; }
	inline MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578 * get_address_of_Origin_4() { return &___Origin_4; }
	inline void set_Origin_4(MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578  value)
	{
		___Origin_4 = value;
	}
};


// Windows.Foundation.Point
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};


// Windows.Foundation.Rect
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};


// Windows.Foundation.Size
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// Microsoft.Geospatial.TileLevelOfDetail
struct TileLevelOfDetail_t4420D910EBE3B7A748896E01B73FDBE004BEFA12 
{
public:
	// System.Int16 Microsoft.Geospatial.TileLevelOfDetail::=dbD1=
	int16_t ___U3DdbD1U3D_7;

public:
	inline static int32_t get_offset_of_U3DdbD1U3D_7() { return static_cast<int32_t>(offsetof(TileLevelOfDetail_t4420D910EBE3B7A748896E01B73FDBE004BEFA12, ___U3DdbD1U3D_7)); }
	inline int16_t get_U3DdbD1U3D_7() const { return ___U3DdbD1U3D_7; }
	inline int16_t* get_address_of_U3DdbD1U3D_7() { return &___U3DdbD1U3D_7; }
	inline void set_U3DdbD1U3D_7(int16_t value)
	{
		___U3DdbD1U3D_7 = value;
	}
};

struct TileLevelOfDetail_t4420D910EBE3B7A748896E01B73FDBE004BEFA12_StaticFields
{
public:
	// Microsoft.Geospatial.TileLevelOfDetail Microsoft.Geospatial.TileLevelOfDetail::Null
	TileLevelOfDetail_t4420D910EBE3B7A748896E01B73FDBE004BEFA12  ___Null_3;
	// Microsoft.Geospatial.TileLevelOfDetail Microsoft.Geospatial.TileLevelOfDetail::Max
	TileLevelOfDetail_t4420D910EBE3B7A748896E01B73FDBE004BEFA12  ___Max_4;
	// Microsoft.Geospatial.TileLevelOfDetail Microsoft.Geospatial.TileLevelOfDetail::Min
	TileLevelOfDetail_t4420D910EBE3B7A748896E01B73FDBE004BEFA12  ___Min_5;

public:
	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TileLevelOfDetail_t4420D910EBE3B7A748896E01B73FDBE004BEFA12_StaticFields, ___Null_3)); }
	inline TileLevelOfDetail_t4420D910EBE3B7A748896E01B73FDBE004BEFA12  get_Null_3() const { return ___Null_3; }
	inline TileLevelOfDetail_t4420D910EBE3B7A748896E01B73FDBE004BEFA12 * get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TileLevelOfDetail_t4420D910EBE3B7A748896E01B73FDBE004BEFA12  value)
	{
		___Null_3 = value;
	}

	inline static int32_t get_offset_of_Max_4() { return static_cast<int32_t>(offsetof(TileLevelOfDetail_t4420D910EBE3B7A748896E01B73FDBE004BEFA12_StaticFields, ___Max_4)); }
	inline TileLevelOfDetail_t4420D910EBE3B7A748896E01B73FDBE004BEFA12  get_Max_4() const { return ___Max_4; }
	inline TileLevelOfDetail_t4420D910EBE3B7A748896E01B73FDBE004BEFA12 * get_address_of_Max_4() { return &___Max_4; }
	inline void set_Max_4(TileLevelOfDetail_t4420D910EBE3B7A748896E01B73FDBE004BEFA12  value)
	{
		___Max_4 = value;
	}

	inline static int32_t get_offset_of_Min_5() { return static_cast<int32_t>(offsetof(TileLevelOfDetail_t4420D910EBE3B7A748896E01B73FDBE004BEFA12_StaticFields, ___Min_5)); }
	inline TileLevelOfDetail_t4420D910EBE3B7A748896E01B73FDBE004BEFA12  get_Min_5() const { return ___Min_5; }
	inline TileLevelOfDetail_t4420D910EBE3B7A748896E01B73FDBE004BEFA12 * get_address_of_Min_5() { return &___Min_5; }
	inline void set_Min_5(TileLevelOfDetail_t4420D910EBE3B7A748896E01B73FDBE004BEFA12  value)
	{
		___Min_5 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

// Windows.Foundation.IReference`1<System.Numerics.Matrix4x4>
struct NOVTABLE IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mA1E3E5D81B89D3EA702FD87A063F5C5CBDD3949B(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Matrix4x4>
struct NOVTABLE IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB1385E16B3DF2EBB57B6A2953C5ACFFB0F57E766(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 * comReturnValue) = 0;
};

// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t3710CF014246E4E8254BDC0393D786308B3D18CC  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isInitialized_4;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isEnabled_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isMarkedDestroyed_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t3710CF014246E4E8254BDC0393D786308B3D18CC, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t3710CF014246E4E8254BDC0393D786308B3D18CC, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t3710CF014246E4E8254BDC0393D786308B3D18CC, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(BaseService_t3710CF014246E4E8254BDC0393D786308B3D18CC, ___isInitialized_4)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isInitialized_4() const { return ___isInitialized_4; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isInitialized_4 = value;
	}

	inline static int32_t get_offset_of_isEnabled_5() { return static_cast<int32_t>(offsetof(BaseService_t3710CF014246E4E8254BDC0393D786308B3D18CC, ___isEnabled_5)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isEnabled_5() const { return ___isEnabled_5; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isEnabled_5() { return &___isEnabled_5; }
	inline void set_isEnabled_5(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isEnabled_5 = value;
	}

	inline static int32_t get_offset_of_isMarkedDestroyed_6() { return static_cast<int32_t>(offsetof(BaseService_t3710CF014246E4E8254BDC0393D786308B3D18CC, ___isMarkedDestroyed_6)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isMarkedDestroyed_6() const { return ___isMarkedDestroyed_6; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isMarkedDestroyed_6() { return &___isMarkedDestroyed_6; }
	inline void set_isMarkedDestroyed_6(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isMarkedDestroyed_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(BaseService_t3710CF014246E4E8254BDC0393D786308B3D18CC, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}
};


// Microsoft.Maps.Unity.ClippingVolumeDistanceTextureResolution
struct ClippingVolumeDistanceTextureResolution_t4328B45F85DFEC34163D957A2F82D26D4D5BC944 
{
public:
	// System.Int32 Microsoft.Maps.Unity.ClippingVolumeDistanceTextureResolution::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClippingVolumeDistanceTextureResolution_t4328B45F85DFEC34163D957A2F82D26D4D5BC944, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.Geospatial.GeoBoundingBox
struct GeoBoundingBox_t32C03D1EFA3A5806C5C73996150E0BED0E3D2AA9 
{
public:
	// Microsoft.Geospatial.LatLon Microsoft.Geospatial.GeoBoundingBox::<BottomLeft>k__BackingField
	LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7  ___U3CBottomLeftU3Ek__BackingField_1;
	// Microsoft.Geospatial.LatLon Microsoft.Geospatial.GeoBoundingBox::<TopRight>k__BackingField
	LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7  ___U3CTopRightU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CBottomLeftU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GeoBoundingBox_t32C03D1EFA3A5806C5C73996150E0BED0E3D2AA9, ___U3CBottomLeftU3Ek__BackingField_1)); }
	inline LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7  get_U3CBottomLeftU3Ek__BackingField_1() const { return ___U3CBottomLeftU3Ek__BackingField_1; }
	inline LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7 * get_address_of_U3CBottomLeftU3Ek__BackingField_1() { return &___U3CBottomLeftU3Ek__BackingField_1; }
	inline void set_U3CBottomLeftU3Ek__BackingField_1(LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7  value)
	{
		___U3CBottomLeftU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTopRightU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GeoBoundingBox_t32C03D1EFA3A5806C5C73996150E0BED0E3D2AA9, ___U3CTopRightU3Ek__BackingField_2)); }
	inline LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7  get_U3CTopRightU3Ek__BackingField_2() const { return ___U3CTopRightU3Ek__BackingField_2; }
	inline LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7 * get_address_of_U3CTopRightU3Ek__BackingField_2() { return &___U3CTopRightU3Ek__BackingField_2; }
	inline void set_U3CTopRightU3Ek__BackingField_2(LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7  value)
	{
		___U3CTopRightU3Ek__BackingField_2 = value;
	}
};


// System.Security.Cryptography.MACTripleDES
struct MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776  : public KeyedHashAlgorithm_t681B59FF58ABCA45D1694A36390AF83AAE2F7F08
{
public:
	// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.MACTripleDES::m_encryptor
	RuntimeObject* ___m_encryptor_5;
	// System.Security.Cryptography.CryptoStream System.Security.Cryptography.MACTripleDES::_cs
	CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66 * ____cs_6;
	// System.Security.Cryptography.TailStream System.Security.Cryptography.MACTripleDES::_ts
	TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C * ____ts_7;
	// System.Int32 System.Security.Cryptography.MACTripleDES::m_bytesPerBlock
	int32_t ___m_bytesPerBlock_9;
	// System.Security.Cryptography.TripleDES System.Security.Cryptography.MACTripleDES::des
	TripleDES_t41D78B2309C83223C73DFC80B18216BA8917B136 * ___des_10;

public:
	inline static int32_t get_offset_of_m_encryptor_5() { return static_cast<int32_t>(offsetof(MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776, ___m_encryptor_5)); }
	inline RuntimeObject* get_m_encryptor_5() const { return ___m_encryptor_5; }
	inline RuntimeObject** get_address_of_m_encryptor_5() { return &___m_encryptor_5; }
	inline void set_m_encryptor_5(RuntimeObject* value)
	{
		___m_encryptor_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_encryptor_5), (void*)value);
	}

	inline static int32_t get_offset_of__cs_6() { return static_cast<int32_t>(offsetof(MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776, ____cs_6)); }
	inline CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66 * get__cs_6() const { return ____cs_6; }
	inline CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66 ** get_address_of__cs_6() { return &____cs_6; }
	inline void set__cs_6(CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66 * value)
	{
		____cs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cs_6), (void*)value);
	}

	inline static int32_t get_offset_of__ts_7() { return static_cast<int32_t>(offsetof(MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776, ____ts_7)); }
	inline TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C * get__ts_7() const { return ____ts_7; }
	inline TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C ** get_address_of__ts_7() { return &____ts_7; }
	inline void set__ts_7(TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C * value)
	{
		____ts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_bytesPerBlock_9() { return static_cast<int32_t>(offsetof(MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776, ___m_bytesPerBlock_9)); }
	inline int32_t get_m_bytesPerBlock_9() const { return ___m_bytesPerBlock_9; }
	inline int32_t* get_address_of_m_bytesPerBlock_9() { return &___m_bytesPerBlock_9; }
	inline void set_m_bytesPerBlock_9(int32_t value)
	{
		___m_bytesPerBlock_9 = value;
	}

	inline static int32_t get_offset_of_des_10() { return static_cast<int32_t>(offsetof(MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776, ___des_10)); }
	inline TripleDES_t41D78B2309C83223C73DFC80B18216BA8917B136 * get_des_10() const { return ___des_10; }
	inline TripleDES_t41D78B2309C83223C73DFC80B18216BA8917B136 ** get_address_of_des_10() { return &___des_10; }
	inline void set_des_10(TripleDES_t41D78B2309C83223C73DFC80B18216BA8917B136 * value)
	{
		___des_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___des_10), (void*)value);
	}
};


// Mono.Security.Cryptography.MD2Managed
struct MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1  : public MD2_t9D20CEB2C863922737CE4F279D80B0D4E7AEEB50
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::state
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::checksum
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___checksum_5;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_6;
	// System.Int32 Mono.Security.Cryptography.MD2Managed::count
	int32_t ___count_7;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::x
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___x_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1, ___state_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_state_4() const { return ___state_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_4), (void*)value);
	}

	inline static int32_t get_offset_of_checksum_5() { return static_cast<int32_t>(offsetof(MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1, ___checksum_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_checksum_5() const { return ___checksum_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_checksum_5() { return &___checksum_5; }
	inline void set_checksum_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___checksum_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___checksum_5), (void*)value);
	}

	inline static int32_t get_offset_of_buffer_6() { return static_cast<int32_t>(offsetof(MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1, ___buffer_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_6() const { return ___buffer_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_6() { return &___buffer_6; }
	inline void set_buffer_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_6), (void*)value);
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1, ___count_7)); }
	inline int32_t get_count_7() const { return ___count_7; }
	inline int32_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(int32_t value)
	{
		___count_7 = value;
	}

	inline static int32_t get_offset_of_x_8() { return static_cast<int32_t>(offsetof(MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1, ___x_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_x_8() const { return ___x_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_x_8() { return &___x_8; }
	inline void set_x_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___x_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___x_8), (void*)value);
	}
};

struct MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::PI_SUBST
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___PI_SUBST_9;

public:
	inline static int32_t get_offset_of_PI_SUBST_9() { return static_cast<int32_t>(offsetof(MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1_StaticFields, ___PI_SUBST_9)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_PI_SUBST_9() const { return ___PI_SUBST_9; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_PI_SUBST_9() { return &___PI_SUBST_9; }
	inline void set_PI_SUBST_9(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___PI_SUBST_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PI_SUBST_9), (void*)value);
	}
};


// Mono.Security.Cryptography.MD2Managed
struct MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE  : public MD2_tD2ECFF2E7CD137AF136BC822DA2A7ECEAF3B0E7B
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::state
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::checksum
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___checksum_5;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_6;
	// System.Int32 Mono.Security.Cryptography.MD2Managed::count
	int32_t ___count_7;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::x
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___x_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE, ___state_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_state_4() const { return ___state_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_4), (void*)value);
	}

	inline static int32_t get_offset_of_checksum_5() { return static_cast<int32_t>(offsetof(MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE, ___checksum_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_checksum_5() const { return ___checksum_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_checksum_5() { return &___checksum_5; }
	inline void set_checksum_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___checksum_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___checksum_5), (void*)value);
	}

	inline static int32_t get_offset_of_buffer_6() { return static_cast<int32_t>(offsetof(MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE, ___buffer_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_6() const { return ___buffer_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_6() { return &___buffer_6; }
	inline void set_buffer_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_6), (void*)value);
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE, ___count_7)); }
	inline int32_t get_count_7() const { return ___count_7; }
	inline int32_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(int32_t value)
	{
		___count_7 = value;
	}

	inline static int32_t get_offset_of_x_8() { return static_cast<int32_t>(offsetof(MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE, ___x_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_x_8() const { return ___x_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_x_8() { return &___x_8; }
	inline void set_x_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___x_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___x_8), (void*)value);
	}
};

struct MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::PI_SUBST
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___PI_SUBST_9;

public:
	inline static int32_t get_offset_of_PI_SUBST_9() { return static_cast<int32_t>(offsetof(MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE_StaticFields, ___PI_SUBST_9)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_PI_SUBST_9() const { return ___PI_SUBST_9; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_PI_SUBST_9() { return &___PI_SUBST_9; }
	inline void set_PI_SUBST_9(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___PI_SUBST_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PI_SUBST_9), (void*)value);
	}
};


// Mono.Security.Cryptography.MD4Managed
struct MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8  : public MD4_t80647CC3422D7B2C41A8EE3E8772B523AEE3B478
{
public:
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::state
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_5;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::count
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___count_6;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::x
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___x_7;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::digest
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___digest_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8, ___state_4)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_state_4() const { return ___state_4; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_4), (void*)value);
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8, ___buffer_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_5() const { return ___buffer_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8, ___count_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_count_6() const { return ___count_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___count_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___count_6), (void*)value);
	}

	inline static int32_t get_offset_of_x_7() { return static_cast<int32_t>(offsetof(MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8, ___x_7)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_x_7() const { return ___x_7; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_x_7() { return &___x_7; }
	inline void set_x_7(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___x_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___x_7), (void*)value);
	}

	inline static int32_t get_offset_of_digest_8() { return static_cast<int32_t>(offsetof(MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8, ___digest_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_digest_8() const { return ___digest_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_digest_8() { return &___digest_8; }
	inline void set_digest_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___digest_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___digest_8), (void*)value);
	}
};


// Mono.Security.Cryptography.MD4Managed
struct MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9  : public MD4_tFCEEF148AD7E7BAF7744F6FFEE57A9B95F4EE0FD
{
public:
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::state
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_5;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::count
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___count_6;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::x
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___x_7;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::digest
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___digest_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9, ___state_4)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_state_4() const { return ___state_4; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_4), (void*)value);
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9, ___buffer_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_5() const { return ___buffer_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9, ___count_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_count_6() const { return ___count_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___count_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___count_6), (void*)value);
	}

	inline static int32_t get_offset_of_x_7() { return static_cast<int32_t>(offsetof(MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9, ___x_7)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_x_7() const { return ___x_7; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_x_7() { return &___x_7; }
	inline void set_x_7(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___x_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___x_7), (void*)value);
	}

	inline static int32_t get_offset_of_digest_8() { return static_cast<int32_t>(offsetof(MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9, ___digest_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_digest_8() const { return ___digest_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_digest_8() { return &___digest_8; }
	inline void set_digest_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___digest_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___digest_8), (void*)value);
	}
};


// System.Security.Cryptography.MD5CryptoServiceProvider
struct MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1  : public MD5_t6B7B1C4D40C383D0AD84BB8DDE4DE4B29BA627FB
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::_H
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____H_5;
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::buff
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___buff_6;
	// System.UInt64 System.Security.Cryptography.MD5CryptoServiceProvider::count
	uint64_t ___count_7;
	// System.Byte[] System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____ProcessingBuffer_8;
	// System.Int32 System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_9;

public:
	inline static int32_t get_offset_of__H_5() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1, ____H_5)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__H_5() const { return ____H_5; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__H_5() { return &____H_5; }
	inline void set__H_5(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____H_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____H_5), (void*)value);
	}

	inline static int32_t get_offset_of_buff_6() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1, ___buff_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_buff_6() const { return ___buff_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_buff_6() { return &___buff_6; }
	inline void set_buff_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___buff_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buff_6), (void*)value);
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1, ___count_7)); }
	inline uint64_t get_count_7() const { return ___count_7; }
	inline uint64_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(uint64_t value)
	{
		___count_7 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_8() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1, ____ProcessingBuffer_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__ProcessingBuffer_8() const { return ____ProcessingBuffer_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__ProcessingBuffer_8() { return &____ProcessingBuffer_8; }
	inline void set__ProcessingBuffer_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____ProcessingBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ProcessingBuffer_8), (void*)value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_9() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1, ____ProcessingBufferCount_9)); }
	inline int32_t get__ProcessingBufferCount_9() const { return ____ProcessingBufferCount_9; }
	inline int32_t* get_address_of__ProcessingBufferCount_9() { return &____ProcessingBufferCount_9; }
	inline void set__ProcessingBufferCount_9(int32_t value)
	{
		____ProcessingBufferCount_9 = value;
	}
};

struct MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::K
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___K_10;

public:
	inline static int32_t get_offset_of_K_10() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1_StaticFields, ___K_10)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_K_10() const { return ___K_10; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_K_10() { return &___K_10; }
	inline void set_K_10(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___K_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___K_10), (void*)value);
	}
};


// System.Threading.ManualResetEventSlim
struct ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E  : public RuntimeObject
{
public:
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ManualResetEventSlim::m_lock
	RuntimeObject * ___m_lock_2;
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ManualResetEventSlim::m_eventObj
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_eventObj_3;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ManualResetEventSlim::m_combinedState
	int32_t ___m_combinedState_4;

public:
	inline static int32_t get_offset_of_m_lock_2() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E, ___m_lock_2)); }
	inline RuntimeObject * get_m_lock_2() const { return ___m_lock_2; }
	inline RuntimeObject ** get_address_of_m_lock_2() { return &___m_lock_2; }
	inline void set_m_lock_2(RuntimeObject * value)
	{
		___m_lock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_lock_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_eventObj_3() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E, ___m_eventObj_3)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_m_eventObj_3() const { return ___m_eventObj_3; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_m_eventObj_3() { return &___m_eventObj_3; }
	inline void set_m_eventObj_3(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___m_eventObj_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eventObj_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_combinedState_4() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E, ___m_combinedState_4)); }
	inline int32_t get_m_combinedState_4() const { return ___m_combinedState_4; }
	inline int32_t* get_address_of_m_combinedState_4() { return &___m_combinedState_4; }
	inline void set_m_combinedState_4(int32_t value)
	{
		___m_combinedState_4 = value;
	}
};

struct ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.ManualResetEventSlim::s_cancellationTokenCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_cancellationTokenCallback_14;

public:
	inline static int32_t get_offset_of_s_cancellationTokenCallback_14() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_StaticFields, ___s_cancellationTokenCallback_14)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_cancellationTokenCallback_14() const { return ___s_cancellationTokenCallback_14; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_cancellationTokenCallback_14() { return &___s_cancellationTokenCallback_14; }
	inline void set_s_cancellationTokenCallback_14(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_cancellationTokenCallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cancellationTokenCallback_14), (void*)value);
	}
};


// Microsoft.Maps.Unity.MapColliderType
struct MapColliderType_t59372EF90E31B7E3AFB3DA00332FF1AC3366FE69 
{
public:
	// System.Int32 Microsoft.Maps.Unity.MapColliderType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MapColliderType_t59372EF90E31B7E3AFB3DA00332FF1AC3366FE69, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.Maps.Unity.MapShape
struct MapShape_tDDF2192765789438EF2192AFEF2389922FFFF3A4 
{
public:
	// System.Int32 Microsoft.Maps.Unity.MapShape::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MapShape_tDDF2192765789438EF2192AFEF2389922FFFF3A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.Maps.Unity.MapTerrainType
struct MapTerrainType_t006A6276B107C95D85E20558AE1FB8B3F475D0C3 
{
public:
	// System.Int32 Microsoft.Maps.Unity.MapTerrainType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MapTerrainType_t006A6276B107C95D85E20558AE1FB8B3F475D0C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Foundation.Metadata.MarshalingType
struct MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05 
{
public:
	// System.Int32 Windows.Foundation.Metadata.MarshalingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_14;

public:
	inline static int32_t get_offset_of__buffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_5() const { return ____buffer_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_5() { return &____buffer_5; }
	inline void set__buffer_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of__origin_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_6)); }
	inline int32_t get__origin_6() const { return ____origin_6; }
	inline int32_t* get_address_of__origin_6() { return &____origin_6; }
	inline void set__origin_6(int32_t value)
	{
		____origin_6 = value;
	}

	inline static int32_t get_offset_of__position_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_7)); }
	inline int32_t get__position_7() const { return ____position_7; }
	inline int32_t* get_address_of__position_7() { return &____position_7; }
	inline void set__position_7(int32_t value)
	{
		____position_7 = value;
	}

	inline static int32_t get_offset_of__length_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_8)); }
	inline int32_t get__length_8() const { return ____length_8; }
	inline int32_t* get_address_of__length_8() { return &____length_8; }
	inline void set__length_8(int32_t value)
	{
		____length_8 = value;
	}

	inline static int32_t get_offset_of__capacity_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_9)); }
	inline int32_t get__capacity_9() const { return ____capacity_9; }
	inline int32_t* get_address_of__capacity_9() { return &____capacity_9; }
	inline void set__capacity_9(int32_t value)
	{
		____capacity_9 = value;
	}

	inline static int32_t get_offset_of__expandable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_10)); }
	inline bool get__expandable_10() const { return ____expandable_10; }
	inline bool* get_address_of__expandable_10() { return &____expandable_10; }
	inline void set__expandable_10(bool value)
	{
		____expandable_10 = value;
	}

	inline static int32_t get_offset_of__writable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_11)); }
	inline bool get__writable_11() const { return ____writable_11; }
	inline bool* get_address_of__writable_11() { return &____writable_11; }
	inline void set__writable_11(bool value)
	{
		____writable_11 = value;
	}

	inline static int32_t get_offset_of__exposable_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_12)); }
	inline bool get__exposable_12() const { return ____exposable_12; }
	inline bool* get_address_of__exposable_12() { return &____exposable_12; }
	inline void set__exposable_12(bool value)
	{
		____exposable_12 = value;
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_14() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_14)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_14() const { return ____lastReadTask_14; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_14() { return &____lastReadTask_14; }
	inline void set__lastReadTask_14(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_14), (void*)value);
	}
};


// Microsoft.Geospatial.MercatorBoundingBox
struct MercatorBoundingBox_tF15A0BE4E0B8A348E711DD2E4ABC651FA2A6B457 
{
public:
	// Microsoft.Geospatial.MercatorCoordinate Microsoft.Geospatial.MercatorBoundingBox::<BottomLeft>k__BackingField
	MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578  ___U3CBottomLeftU3Ek__BackingField_0;
	// Microsoft.Geospatial.MercatorCoordinate Microsoft.Geospatial.MercatorBoundingBox::<TopRight>k__BackingField
	MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578  ___U3CTopRightU3Ek__BackingField_1;
	// System.Double Microsoft.Geospatial.MercatorBoundingBox::<Width>k__BackingField
	double ___U3CWidthU3Ek__BackingField_2;
	// System.Double Microsoft.Geospatial.MercatorBoundingBox::<Height>k__BackingField
	double ___U3CHeightU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CBottomLeftU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MercatorBoundingBox_tF15A0BE4E0B8A348E711DD2E4ABC651FA2A6B457, ___U3CBottomLeftU3Ek__BackingField_0)); }
	inline MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578  get_U3CBottomLeftU3Ek__BackingField_0() const { return ___U3CBottomLeftU3Ek__BackingField_0; }
	inline MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578 * get_address_of_U3CBottomLeftU3Ek__BackingField_0() { return &___U3CBottomLeftU3Ek__BackingField_0; }
	inline void set_U3CBottomLeftU3Ek__BackingField_0(MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578  value)
	{
		___U3CBottomLeftU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CTopRightU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MercatorBoundingBox_tF15A0BE4E0B8A348E711DD2E4ABC651FA2A6B457, ___U3CTopRightU3Ek__BackingField_1)); }
	inline MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578  get_U3CTopRightU3Ek__BackingField_1() const { return ___U3CTopRightU3Ek__BackingField_1; }
	inline MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578 * get_address_of_U3CTopRightU3Ek__BackingField_1() { return &___U3CTopRightU3Ek__BackingField_1; }
	inline void set_U3CTopRightU3Ek__BackingField_1(MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578  value)
	{
		___U3CTopRightU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CWidthU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MercatorBoundingBox_tF15A0BE4E0B8A348E711DD2E4ABC651FA2A6B457, ___U3CWidthU3Ek__BackingField_2)); }
	inline double get_U3CWidthU3Ek__BackingField_2() const { return ___U3CWidthU3Ek__BackingField_2; }
	inline double* get_address_of_U3CWidthU3Ek__BackingField_2() { return &___U3CWidthU3Ek__BackingField_2; }
	inline void set_U3CWidthU3Ek__BackingField_2(double value)
	{
		___U3CWidthU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CHeightU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MercatorBoundingBox_tF15A0BE4E0B8A348E711DD2E4ABC651FA2A6B457, ___U3CHeightU3Ek__BackingField_3)); }
	inline double get_U3CHeightU3Ek__BackingField_3() const { return ___U3CHeightU3Ek__BackingField_3; }
	inline double* get_address_of_U3CHeightU3Ek__BackingField_3() { return &___U3CHeightU3Ek__BackingField_3; }
	inline void set_U3CHeightU3Ek__BackingField_3(double value)
	{
		___U3CHeightU3Ek__BackingField_3 = value;
	}
};


// Microsoft.Geospatial.MercatorBoundingCircle
struct MercatorBoundingCircle_t30C2C78A027F176AC0C8833BB93DB971F88F1E17 
{
public:
	// Microsoft.Geospatial.MercatorCoordinate Microsoft.Geospatial.MercatorBoundingCircle::<Center>k__BackingField
	MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578  ___U3CCenterU3Ek__BackingField_0;
	// System.Double Microsoft.Geospatial.MercatorBoundingCircle::<Radius>k__BackingField
	double ___U3CRadiusU3Ek__BackingField_1;
	// System.Double Microsoft.Geospatial.MercatorBoundingCircle::=dacB=
	double ___U3DdacBU3D_2;
	// System.Boolean Microsoft.Geospatial.MercatorBoundingCircle::=dacb=
	bool ___U3DdacbU3D_3;
	// Microsoft.Geospatial.MercatorCoordinate Microsoft.Geospatial.MercatorBoundingCircle::=dacC=
	MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578  ___U3DdacCU3D_4;

public:
	inline static int32_t get_offset_of_U3CCenterU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MercatorBoundingCircle_t30C2C78A027F176AC0C8833BB93DB971F88F1E17, ___U3CCenterU3Ek__BackingField_0)); }
	inline MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578  get_U3CCenterU3Ek__BackingField_0() const { return ___U3CCenterU3Ek__BackingField_0; }
	inline MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578 * get_address_of_U3CCenterU3Ek__BackingField_0() { return &___U3CCenterU3Ek__BackingField_0; }
	inline void set_U3CCenterU3Ek__BackingField_0(MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578  value)
	{
		___U3CCenterU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CRadiusU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MercatorBoundingCircle_t30C2C78A027F176AC0C8833BB93DB971F88F1E17, ___U3CRadiusU3Ek__BackingField_1)); }
	inline double get_U3CRadiusU3Ek__BackingField_1() const { return ___U3CRadiusU3Ek__BackingField_1; }
	inline double* get_address_of_U3CRadiusU3Ek__BackingField_1() { return &___U3CRadiusU3Ek__BackingField_1; }
	inline void set_U3CRadiusU3Ek__BackingField_1(double value)
	{
		___U3CRadiusU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3DdacBU3D_2() { return static_cast<int32_t>(offsetof(MercatorBoundingCircle_t30C2C78A027F176AC0C8833BB93DB971F88F1E17, ___U3DdacBU3D_2)); }
	inline double get_U3DdacBU3D_2() const { return ___U3DdacBU3D_2; }
	inline double* get_address_of_U3DdacBU3D_2() { return &___U3DdacBU3D_2; }
	inline void set_U3DdacBU3D_2(double value)
	{
		___U3DdacBU3D_2 = value;
	}

	inline static int32_t get_offset_of_U3DdacbU3D_3() { return static_cast<int32_t>(offsetof(MercatorBoundingCircle_t30C2C78A027F176AC0C8833BB93DB971F88F1E17, ___U3DdacbU3D_3)); }
	inline bool get_U3DdacbU3D_3() const { return ___U3DdacbU3D_3; }
	inline bool* get_address_of_U3DdacbU3D_3() { return &___U3DdacbU3D_3; }
	inline void set_U3DdacbU3D_3(bool value)
	{
		___U3DdacbU3D_3 = value;
	}

	inline static int32_t get_offset_of_U3DdacCU3D_4() { return static_cast<int32_t>(offsetof(MercatorBoundingCircle_t30C2C78A027F176AC0C8833BB93DB971F88F1E17, ___U3DdacCU3D_4)); }
	inline MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578  get_U3DdacCU3D_4() const { return ___U3DdacCU3D_4; }
	inline MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578 * get_address_of_U3DdacCU3D_4() { return &___U3DdacCU3D_4; }
	inline void set_U3DdacCU3D_4(MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578  value)
	{
		___U3DdacCU3D_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Geospatial.MercatorBoundingCircle
struct MercatorBoundingCircle_t30C2C78A027F176AC0C8833BB93DB971F88F1E17_marshaled_pinvoke
{
	MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578  ___U3CCenterU3Ek__BackingField_0;
	double ___U3CRadiusU3Ek__BackingField_1;
	double ___U3DdacBU3D_2;
	int32_t ___U3DdacbU3D_3;
	MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578  ___U3DdacCU3D_4;
};
// Native definition for COM marshalling of Microsoft.Geospatial.MercatorBoundingCircle
struct MercatorBoundingCircle_t30C2C78A027F176AC0C8833BB93DB971F88F1E17_marshaled_com
{
	MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578  ___U3CCenterU3Ek__BackingField_0;
	double ___U3CRadiusU3Ek__BackingField_1;
	double ___U3DdacBU3D_2;
	int32_t ___U3DdacbU3D_3;
	MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578  ___U3DdacCU3D_4;
};

// UnityEngine.XR.ARSubsystems.NotTrackingReason
struct NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.NotTrackingReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Plane
struct Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;

public:
	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_Distance_2() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Distance_2)); }
	inline float get_m_Distance_2() const { return ___m_Distance_2; }
	inline float* get_address_of_m_Distance_2() { return &___m_Distance_2; }
	inline void set_m_Distance_2(float value)
	{
		___m_Distance_2 = value;
	}
};


// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Windows.Foundation.PropertyType
struct PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808 
{
public:
	// System.Int32 Windows.Foundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureFormat
struct RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.Net.WebSockets.WebSocketCloseStatus
struct WebSocketCloseStatus_t3F80BE84F62E6E4BF4A1BE486A6123B4C216EE71 
{
public:
	// System.Int32 System.Net.WebSockets.WebSocketCloseStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebSocketCloseStatus_t3F80BE84F62E6E4BF4A1BE486A6123B4C216EE71, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.WebSockets.WebSocketState
struct WebSocketState_t302343A2337712283EA85C8BCAD335D66FFC1E77 
{
public:
	// System.Int32 System.Net.WebSockets.WebSocketState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebSocketState_t302343A2337712283EA85C8BCAD335D66FFC1E77, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.WebSockets.ManagedWebSocket/MessageOpcode
struct MessageOpcode_t7060DEFDBD04D585D01A301A37DBE10C158EEDC1 
{
public:
	// System.Byte System.Net.WebSockets.ManagedWebSocket/MessageOpcode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MessageOpcode_t7060DEFDBD04D585D01A301A37DBE10C158EEDC1, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.MarshalingType>
struct NOVTABLE IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB021045389972057F5036B2BEAF48C63CC75C2E0(int32_t* comReturnValue) = 0;
};

// System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus>
struct Nullable_1_tEEF07CE805E86A33961C7C0AE095FA4A628605C6 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tEEF07CE805E86A33961C7C0AE095FA4A628605C6, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tEEF07CE805E86A33961C7C0AE095FA4A628605C6, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// =ae=
struct U3DaeU3D_tD2F8B0AD08FEE403A39C51C867CDFF36E76997CD 
{
public:
	// UnityEngine.Vector3 =ae=::=daa=
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3DdaaU3D_8;
	// System.Single =ae=::=daB=
	float ___U3DdaBU3D_9;
	// UnityEngine.Vector3 =ae=::=dab=
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3DdabU3D_10;
	// UnityEngine.Plane =ae=::=daC=
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___U3DdaCU3D_11;
	// UnityEngine.Plane =ae=::=dac=
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___U3DdacU3D_12;
	// UnityEngine.Vector2 =ae=::=ddBE=
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3DddBEU3D_13;
	// UnityEngine.Vector2 =ae=::=ddBe=
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3DddBeU3D_14;

public:
	inline static int32_t get_offset_of_U3DdaaU3D_8() { return static_cast<int32_t>(offsetof(U3DaeU3D_tD2F8B0AD08FEE403A39C51C867CDFF36E76997CD, ___U3DdaaU3D_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3DdaaU3D_8() const { return ___U3DdaaU3D_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3DdaaU3D_8() { return &___U3DdaaU3D_8; }
	inline void set_U3DdaaU3D_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3DdaaU3D_8 = value;
	}

	inline static int32_t get_offset_of_U3DdaBU3D_9() { return static_cast<int32_t>(offsetof(U3DaeU3D_tD2F8B0AD08FEE403A39C51C867CDFF36E76997CD, ___U3DdaBU3D_9)); }
	inline float get_U3DdaBU3D_9() const { return ___U3DdaBU3D_9; }
	inline float* get_address_of_U3DdaBU3D_9() { return &___U3DdaBU3D_9; }
	inline void set_U3DdaBU3D_9(float value)
	{
		___U3DdaBU3D_9 = value;
	}

	inline static int32_t get_offset_of_U3DdabU3D_10() { return static_cast<int32_t>(offsetof(U3DaeU3D_tD2F8B0AD08FEE403A39C51C867CDFF36E76997CD, ___U3DdabU3D_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3DdabU3D_10() const { return ___U3DdabU3D_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3DdabU3D_10() { return &___U3DdabU3D_10; }
	inline void set_U3DdabU3D_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3DdabU3D_10 = value;
	}

	inline static int32_t get_offset_of_U3DdaCU3D_11() { return static_cast<int32_t>(offsetof(U3DaeU3D_tD2F8B0AD08FEE403A39C51C867CDFF36E76997CD, ___U3DdaCU3D_11)); }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  get_U3DdaCU3D_11() const { return ___U3DdaCU3D_11; }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * get_address_of_U3DdaCU3D_11() { return &___U3DdaCU3D_11; }
	inline void set_U3DdaCU3D_11(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  value)
	{
		___U3DdaCU3D_11 = value;
	}

	inline static int32_t get_offset_of_U3DdacU3D_12() { return static_cast<int32_t>(offsetof(U3DaeU3D_tD2F8B0AD08FEE403A39C51C867CDFF36E76997CD, ___U3DdacU3D_12)); }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  get_U3DdacU3D_12() const { return ___U3DdacU3D_12; }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * get_address_of_U3DdacU3D_12() { return &___U3DdacU3D_12; }
	inline void set_U3DdacU3D_12(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  value)
	{
		___U3DdacU3D_12 = value;
	}

	inline static int32_t get_offset_of_U3DddBEU3D_13() { return static_cast<int32_t>(offsetof(U3DaeU3D_tD2F8B0AD08FEE403A39C51C867CDFF36E76997CD, ___U3DddBEU3D_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3DddBEU3D_13() const { return ___U3DddBEU3D_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3DddBEU3D_13() { return &___U3DddBEU3D_13; }
	inline void set_U3DddBEU3D_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3DddBEU3D_13 = value;
	}

	inline static int32_t get_offset_of_U3DddBeU3D_14() { return static_cast<int32_t>(offsetof(U3DaeU3D_tD2F8B0AD08FEE403A39C51C867CDFF36E76997CD, ___U3DddBeU3D_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3DddBeU3D_14() const { return ___U3DddBeU3D_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3DddBeU3D_14() { return &___U3DddBeU3D_14; }
	inline void set_U3DddBeU3D_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3DddBeU3D_14 = value;
	}
};

struct U3DaeU3D_tD2F8B0AD08FEE403A39C51C867CDFF36E76997CD_StaticFields
{
public:
	// System.Int32 =ae=::=d4=
	int32_t ___U3Dd4U3D_1;
	// System.Int32 =ae=::=d5=
	int32_t ___U3Dd5U3D_2;
	// System.Int32 =ae=::=d6=
	int32_t ___U3Dd6U3D_3;
	// System.Int32 =ae=::=d7=
	int32_t ___U3Dd7U3D_4;
	// System.Int32 =ae=::=d8=
	int32_t ___U3Dd8U3D_5;
	// System.Int32 =ae=::=d9=
	int32_t ___U3Dd9U3D_6;
	// UnityEngine.Vector4[] =ae=::=daA=
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___U3DdaAU3D_7;

public:
	inline static int32_t get_offset_of_U3Dd4U3D_1() { return static_cast<int32_t>(offsetof(U3DaeU3D_tD2F8B0AD08FEE403A39C51C867CDFF36E76997CD_StaticFields, ___U3Dd4U3D_1)); }
	inline int32_t get_U3Dd4U3D_1() const { return ___U3Dd4U3D_1; }
	inline int32_t* get_address_of_U3Dd4U3D_1() { return &___U3Dd4U3D_1; }
	inline void set_U3Dd4U3D_1(int32_t value)
	{
		___U3Dd4U3D_1 = value;
	}

	inline static int32_t get_offset_of_U3Dd5U3D_2() { return static_cast<int32_t>(offsetof(U3DaeU3D_tD2F8B0AD08FEE403A39C51C867CDFF36E76997CD_StaticFields, ___U3Dd5U3D_2)); }
	inline int32_t get_U3Dd5U3D_2() const { return ___U3Dd5U3D_2; }
	inline int32_t* get_address_of_U3Dd5U3D_2() { return &___U3Dd5U3D_2; }
	inline void set_U3Dd5U3D_2(int32_t value)
	{
		___U3Dd5U3D_2 = value;
	}

	inline static int32_t get_offset_of_U3Dd6U3D_3() { return static_cast<int32_t>(offsetof(U3DaeU3D_tD2F8B0AD08FEE403A39C51C867CDFF36E76997CD_StaticFields, ___U3Dd6U3D_3)); }
	inline int32_t get_U3Dd6U3D_3() const { return ___U3Dd6U3D_3; }
	inline int32_t* get_address_of_U3Dd6U3D_3() { return &___U3Dd6U3D_3; }
	inline void set_U3Dd6U3D_3(int32_t value)
	{
		___U3Dd6U3D_3 = value;
	}

	inline static int32_t get_offset_of_U3Dd7U3D_4() { return static_cast<int32_t>(offsetof(U3DaeU3D_tD2F8B0AD08FEE403A39C51C867CDFF36E76997CD_StaticFields, ___U3Dd7U3D_4)); }
	inline int32_t get_U3Dd7U3D_4() const { return ___U3Dd7U3D_4; }
	inline int32_t* get_address_of_U3Dd7U3D_4() { return &___U3Dd7U3D_4; }
	inline void set_U3Dd7U3D_4(int32_t value)
	{
		___U3Dd7U3D_4 = value;
	}

	inline static int32_t get_offset_of_U3Dd8U3D_5() { return static_cast<int32_t>(offsetof(U3DaeU3D_tD2F8B0AD08FEE403A39C51C867CDFF36E76997CD_StaticFields, ___U3Dd8U3D_5)); }
	inline int32_t get_U3Dd8U3D_5() const { return ___U3Dd8U3D_5; }
	inline int32_t* get_address_of_U3Dd8U3D_5() { return &___U3Dd8U3D_5; }
	inline void set_U3Dd8U3D_5(int32_t value)
	{
		___U3Dd8U3D_5 = value;
	}

	inline static int32_t get_offset_of_U3Dd9U3D_6() { return static_cast<int32_t>(offsetof(U3DaeU3D_tD2F8B0AD08FEE403A39C51C867CDFF36E76997CD_StaticFields, ___U3Dd9U3D_6)); }
	inline int32_t get_U3Dd9U3D_6() const { return ___U3Dd9U3D_6; }
	inline int32_t* get_address_of_U3Dd9U3D_6() { return &___U3Dd9U3D_6; }
	inline void set_U3Dd9U3D_6(int32_t value)
	{
		___U3Dd9U3D_6 = value;
	}

	inline static int32_t get_offset_of_U3DdaAU3D_7() { return static_cast<int32_t>(offsetof(U3DaeU3D_tD2F8B0AD08FEE403A39C51C867CDFF36E76997CD_StaticFields, ___U3DdaAU3D_7)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_U3DdaAU3D_7() const { return ___U3DdaAU3D_7; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_U3DdaAU3D_7() { return &___U3DdaAU3D_7; }
	inline void set_U3DdaAU3D_7(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___U3DdaAU3D_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdaAU3D_7), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_t4D6150178E1DD01DCB6B5B529FBF42B5FF215AA4  : public BaseService_t3710CF014246E4E8254BDC0393D786308B3D18CC
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_9;
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t * ___eventSystemHandlerType_10;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_t4DBF843B9E1A6950FB010155F4EFB24B47A6ACBE * ___postponedActions_11;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_t529C10528E8778EC56BA0DF91EE52405B7929BA6 * ___postponedObjectActions_12;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_t0C35F0DCE6015E0E091D5C9AFCF75A946C5A4E88 * ___U3CEventHandlersByTypeU3Ek__BackingField_13;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___U3CEventListenersU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_eventExecutionDepth_9() { return static_cast<int32_t>(offsetof(BaseEventSystem_t4D6150178E1DD01DCB6B5B529FBF42B5FF215AA4, ___eventExecutionDepth_9)); }
	inline int32_t get_eventExecutionDepth_9() const { return ___eventExecutionDepth_9; }
	inline int32_t* get_address_of_eventExecutionDepth_9() { return &___eventExecutionDepth_9; }
	inline void set_eventExecutionDepth_9(int32_t value)
	{
		___eventExecutionDepth_9 = value;
	}

	inline static int32_t get_offset_of_eventSystemHandlerType_10() { return static_cast<int32_t>(offsetof(BaseEventSystem_t4D6150178E1DD01DCB6B5B529FBF42B5FF215AA4, ___eventSystemHandlerType_10)); }
	inline Type_t * get_eventSystemHandlerType_10() const { return ___eventSystemHandlerType_10; }
	inline Type_t ** get_address_of_eventSystemHandlerType_10() { return &___eventSystemHandlerType_10; }
	inline void set_eventSystemHandlerType_10(Type_t * value)
	{
		___eventSystemHandlerType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemHandlerType_10), (void*)value);
	}

	inline static int32_t get_offset_of_postponedActions_11() { return static_cast<int32_t>(offsetof(BaseEventSystem_t4D6150178E1DD01DCB6B5B529FBF42B5FF215AA4, ___postponedActions_11)); }
	inline List_1_t4DBF843B9E1A6950FB010155F4EFB24B47A6ACBE * get_postponedActions_11() const { return ___postponedActions_11; }
	inline List_1_t4DBF843B9E1A6950FB010155F4EFB24B47A6ACBE ** get_address_of_postponedActions_11() { return &___postponedActions_11; }
	inline void set_postponedActions_11(List_1_t4DBF843B9E1A6950FB010155F4EFB24B47A6ACBE * value)
	{
		___postponedActions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedActions_11), (void*)value);
	}

	inline static int32_t get_offset_of_postponedObjectActions_12() { return static_cast<int32_t>(offsetof(BaseEventSystem_t4D6150178E1DD01DCB6B5B529FBF42B5FF215AA4, ___postponedObjectActions_12)); }
	inline List_1_t529C10528E8778EC56BA0DF91EE52405B7929BA6 * get_postponedObjectActions_12() const { return ___postponedObjectActions_12; }
	inline List_1_t529C10528E8778EC56BA0DF91EE52405B7929BA6 ** get_address_of_postponedObjectActions_12() { return &___postponedObjectActions_12; }
	inline void set_postponedObjectActions_12(List_1_t529C10528E8778EC56BA0DF91EE52405B7929BA6 * value)
	{
		___postponedObjectActions_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedObjectActions_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventHandlersByTypeU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseEventSystem_t4D6150178E1DD01DCB6B5B529FBF42B5FF215AA4, ___U3CEventHandlersByTypeU3Ek__BackingField_13)); }
	inline Dictionary_2_t0C35F0DCE6015E0E091D5C9AFCF75A946C5A4E88 * get_U3CEventHandlersByTypeU3Ek__BackingField_13() const { return ___U3CEventHandlersByTypeU3Ek__BackingField_13; }
	inline Dictionary_2_t0C35F0DCE6015E0E091D5C9AFCF75A946C5A4E88 ** get_address_of_U3CEventHandlersByTypeU3Ek__BackingField_13() { return &___U3CEventHandlersByTypeU3Ek__BackingField_13; }
	inline void set_U3CEventHandlersByTypeU3Ek__BackingField_13(Dictionary_2_t0C35F0DCE6015E0E091D5C9AFCF75A946C5A4E88 * value)
	{
		___U3CEventHandlersByTypeU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventHandlersByTypeU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseEventSystem_t4D6150178E1DD01DCB6B5B529FBF42B5FF215AA4, ___U3CEventListenersU3Ek__BackingField_14)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_U3CEventListenersU3Ek__BackingField_14() const { return ___U3CEventListenersU3Ek__BackingField_14; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_U3CEventListenersU3Ek__BackingField_14() { return &___U3CEventListenersU3Ek__BackingField_14; }
	inline void set_U3CEventListenersU3Ek__BackingField_14(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___U3CEventListenersU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventListenersU3Ek__BackingField_14), (void*)value);
	}
};

struct BaseEventSystem_t4D6150178E1DD01DCB6B5B529FBF42B5FF215AA4_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_8;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseEventSystem::TraverseEventSystemHandlerHierarchyPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TraverseEventSystemHandlerHierarchyPerfMarker_15;

public:
	inline static int32_t get_offset_of_enableDanglingHandlerDiagnostics_8() { return static_cast<int32_t>(offsetof(BaseEventSystem_t4D6150178E1DD01DCB6B5B529FBF42B5FF215AA4_StaticFields, ___enableDanglingHandlerDiagnostics_8)); }
	inline bool get_enableDanglingHandlerDiagnostics_8() const { return ___enableDanglingHandlerDiagnostics_8; }
	inline bool* get_address_of_enableDanglingHandlerDiagnostics_8() { return &___enableDanglingHandlerDiagnostics_8; }
	inline void set_enableDanglingHandlerDiagnostics_8(bool value)
	{
		___enableDanglingHandlerDiagnostics_8 = value;
	}

	inline static int32_t get_offset_of_TraverseEventSystemHandlerHierarchyPerfMarker_15() { return static_cast<int32_t>(offsetof(BaseEventSystem_t4D6150178E1DD01DCB6B5B529FBF42B5FF215AA4_StaticFields, ___TraverseEventSystemHandlerHierarchyPerfMarker_15)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TraverseEventSystemHandlerHierarchyPerfMarker_15() const { return ___TraverseEventSystemHandlerHierarchyPerfMarker_15; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TraverseEventSystemHandlerHierarchyPerfMarker_15() { return &___TraverseEventSystemHandlerHierarchyPerfMarker_15; }
	inline void set_TraverseEventSystemHandlerHierarchyPerfMarker_15(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TraverseEventSystemHandlerHierarchyPerfMarker_15 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseExtensionService
struct BaseExtensionService_t8C5EAFF8BEA1058FF0050DD7FD2916F7EDDB223A  : public BaseService_t3710CF014246E4E8254BDC0393D786308B3D18CC
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseExtensionService::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseExtensionService_t8C5EAFF8BEA1058FF0050DD7FD2916F7EDDB223A, ___U3CRegistrarU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_8() const { return ___U3CRegistrarU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_8() { return &___U3CRegistrarU3Ek__BackingField_8; }
	inline void set_U3CRegistrarU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_8), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};

// Windows.Foundation.IPropertyValue
struct NOVTABLE IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) = 0;
};

// System.Net.WebSockets.ManagedWebSocket/MessageHeader
struct MessageHeader_t76B0077FC24560BBDC9A4B6B543DBEDA00702634 
{
public:
	// System.Net.WebSockets.ManagedWebSocket/MessageOpcode System.Net.WebSockets.ManagedWebSocket/MessageHeader::Opcode
	uint8_t ___Opcode_0;
	// System.Boolean System.Net.WebSockets.ManagedWebSocket/MessageHeader::Fin
	bool ___Fin_1;
	// System.Int64 System.Net.WebSockets.ManagedWebSocket/MessageHeader::PayloadLength
	int64_t ___PayloadLength_2;
	// System.Int32 System.Net.WebSockets.ManagedWebSocket/MessageHeader::Mask
	int32_t ___Mask_3;

public:
	inline static int32_t get_offset_of_Opcode_0() { return static_cast<int32_t>(offsetof(MessageHeader_t76B0077FC24560BBDC9A4B6B543DBEDA00702634, ___Opcode_0)); }
	inline uint8_t get_Opcode_0() const { return ___Opcode_0; }
	inline uint8_t* get_address_of_Opcode_0() { return &___Opcode_0; }
	inline void set_Opcode_0(uint8_t value)
	{
		___Opcode_0 = value;
	}

	inline static int32_t get_offset_of_Fin_1() { return static_cast<int32_t>(offsetof(MessageHeader_t76B0077FC24560BBDC9A4B6B543DBEDA00702634, ___Fin_1)); }
	inline bool get_Fin_1() const { return ___Fin_1; }
	inline bool* get_address_of_Fin_1() { return &___Fin_1; }
	inline void set_Fin_1(bool value)
	{
		___Fin_1 = value;
	}

	inline static int32_t get_offset_of_PayloadLength_2() { return static_cast<int32_t>(offsetof(MessageHeader_t76B0077FC24560BBDC9A4B6B543DBEDA00702634, ___PayloadLength_2)); }
	inline int64_t get_PayloadLength_2() const { return ___PayloadLength_2; }
	inline int64_t* get_address_of_PayloadLength_2() { return &___PayloadLength_2; }
	inline void set_PayloadLength_2(int64_t value)
	{
		___PayloadLength_2 = value;
	}

	inline static int32_t get_offset_of_Mask_3() { return static_cast<int32_t>(offsetof(MessageHeader_t76B0077FC24560BBDC9A4B6B543DBEDA00702634, ___Mask_3)); }
	inline int32_t get_Mask_3() const { return ___Mask_3; }
	inline int32_t* get_address_of_Mask_3() { return &___Mask_3; }
	inline void set_Mask_3(int32_t value)
	{
		___Mask_3 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_tC426C126FBF9D59913CCD51BF9FE4E5A2EB9ED3C  : public BaseEventSystem_t4D6150178E1DD01DCB6B5B529FBF42B5FF215AA4
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(BaseCoreSystem_tC426C126FBF9D59913CCD51BF9FE4E5A2EB9ED3C, ___U3CRegistrarU3Ek__BackingField_16)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_16() const { return ___U3CRegistrarU3Ek__BackingField_16; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_16() { return &___U3CRegistrarU3Ek__BackingField_16; }
	inline void set_U3CRegistrarU3Ek__BackingField_16(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_16), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService
struct LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D  : public BaseExtensionService_t8C5EAFF8BEA1058FF0050DD7FD2916F7EDDB223A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::<TrackingLost>k__BackingField
	bool ___U3CTrackingLostU3Ek__BackingField_9;
	// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::<OnTrackingLost>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnTrackingLostU3Ek__BackingField_10;
	// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::<OnTrackingRestored>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnTrackingRestoredU3Ek__BackingField_11;
	// Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::profile
	LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * ___profile_12;
	// Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::visual
	RuntimeObject* ___visual_13;
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::cullingMaskOnTrackingLost
	int32_t ___cullingMaskOnTrackingLost_14;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::timeScaleOnTrackingLost
	float ___timeScaleOnTrackingLost_15;
	// UnityEngine.XR.ARSubsystems.TrackingState Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::lastTrackingState
	int32_t ___lastTrackingState_16;
	// UnityEngine.XR.ARSubsystems.NotTrackingReason Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::lastNotTrackingReason
	int32_t ___lastNotTrackingReason_17;

public:
	inline static int32_t get_offset_of_U3CTrackingLostU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D, ___U3CTrackingLostU3Ek__BackingField_9)); }
	inline bool get_U3CTrackingLostU3Ek__BackingField_9() const { return ___U3CTrackingLostU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CTrackingLostU3Ek__BackingField_9() { return &___U3CTrackingLostU3Ek__BackingField_9; }
	inline void set_U3CTrackingLostU3Ek__BackingField_9(bool value)
	{
		___U3CTrackingLostU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3COnTrackingLostU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D, ___U3COnTrackingLostU3Ek__BackingField_10)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnTrackingLostU3Ek__BackingField_10() const { return ___U3COnTrackingLostU3Ek__BackingField_10; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnTrackingLostU3Ek__BackingField_10() { return &___U3COnTrackingLostU3Ek__BackingField_10; }
	inline void set_U3COnTrackingLostU3Ek__BackingField_10(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnTrackingLostU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnTrackingLostU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnTrackingRestoredU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D, ___U3COnTrackingRestoredU3Ek__BackingField_11)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnTrackingRestoredU3Ek__BackingField_11() const { return ___U3COnTrackingRestoredU3Ek__BackingField_11; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnTrackingRestoredU3Ek__BackingField_11() { return &___U3COnTrackingRestoredU3Ek__BackingField_11; }
	inline void set_U3COnTrackingRestoredU3Ek__BackingField_11(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnTrackingRestoredU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnTrackingRestoredU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_profile_12() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D, ___profile_12)); }
	inline LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * get_profile_12() const { return ___profile_12; }
	inline LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE ** get_address_of_profile_12() { return &___profile_12; }
	inline void set_profile_12(LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * value)
	{
		___profile_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___profile_12), (void*)value);
	}

	inline static int32_t get_offset_of_visual_13() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D, ___visual_13)); }
	inline RuntimeObject* get_visual_13() const { return ___visual_13; }
	inline RuntimeObject** get_address_of_visual_13() { return &___visual_13; }
	inline void set_visual_13(RuntimeObject* value)
	{
		___visual_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visual_13), (void*)value);
	}

	inline static int32_t get_offset_of_cullingMaskOnTrackingLost_14() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D, ___cullingMaskOnTrackingLost_14)); }
	inline int32_t get_cullingMaskOnTrackingLost_14() const { return ___cullingMaskOnTrackingLost_14; }
	inline int32_t* get_address_of_cullingMaskOnTrackingLost_14() { return &___cullingMaskOnTrackingLost_14; }
	inline void set_cullingMaskOnTrackingLost_14(int32_t value)
	{
		___cullingMaskOnTrackingLost_14 = value;
	}

	inline static int32_t get_offset_of_timeScaleOnTrackingLost_15() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D, ___timeScaleOnTrackingLost_15)); }
	inline float get_timeScaleOnTrackingLost_15() const { return ___timeScaleOnTrackingLost_15; }
	inline float* get_address_of_timeScaleOnTrackingLost_15() { return &___timeScaleOnTrackingLost_15; }
	inline void set_timeScaleOnTrackingLost_15(float value)
	{
		___timeScaleOnTrackingLost_15 = value;
	}

	inline static int32_t get_offset_of_lastTrackingState_16() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D, ___lastTrackingState_16)); }
	inline int32_t get_lastTrackingState_16() const { return ___lastTrackingState_16; }
	inline int32_t* get_address_of_lastTrackingState_16() { return &___lastTrackingState_16; }
	inline void set_lastTrackingState_16(int32_t value)
	{
		___lastTrackingState_16 = value;
	}

	inline static int32_t get_offset_of_lastNotTrackingReason_17() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D, ___lastNotTrackingReason_17)); }
	inline int32_t get_lastNotTrackingReason_17() const { return ___lastNotTrackingReason_17; }
	inline int32_t* get_address_of_lastNotTrackingReason_17() { return &___lastNotTrackingReason_17; }
	inline void set_lastNotTrackingReason_17(int32_t value)
	{
		___lastNotTrackingReason_17 = value;
	}
};

struct LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::DisableTrackingLostVisualPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DisableTrackingLostVisualPerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::EnableTrackingLostVisualPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___EnableTrackingLostVisualPerfMarker_20;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::SetTrackingLostPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SetTrackingLostPerfMarker_21;
	// UnityEngine.XR.ARSubsystems.XRSessionSubsystem Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::sessionSubsystem
	XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * ___sessionSubsystem_22;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem> Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::XRSessionSubsystems
	List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * ___XRSessionSubsystems_23;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_18() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields, ___UpdatePerfMarker_18)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_18() const { return ___UpdatePerfMarker_18; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_18() { return &___UpdatePerfMarker_18; }
	inline void set_UpdatePerfMarker_18(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_DisableTrackingLostVisualPerfMarker_19() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields, ___DisableTrackingLostVisualPerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DisableTrackingLostVisualPerfMarker_19() const { return ___DisableTrackingLostVisualPerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DisableTrackingLostVisualPerfMarker_19() { return &___DisableTrackingLostVisualPerfMarker_19; }
	inline void set_DisableTrackingLostVisualPerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DisableTrackingLostVisualPerfMarker_19 = value;
	}

	inline static int32_t get_offset_of_EnableTrackingLostVisualPerfMarker_20() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields, ___EnableTrackingLostVisualPerfMarker_20)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_EnableTrackingLostVisualPerfMarker_20() const { return ___EnableTrackingLostVisualPerfMarker_20; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_EnableTrackingLostVisualPerfMarker_20() { return &___EnableTrackingLostVisualPerfMarker_20; }
	inline void set_EnableTrackingLostVisualPerfMarker_20(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___EnableTrackingLostVisualPerfMarker_20 = value;
	}

	inline static int32_t get_offset_of_SetTrackingLostPerfMarker_21() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields, ___SetTrackingLostPerfMarker_21)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SetTrackingLostPerfMarker_21() const { return ___SetTrackingLostPerfMarker_21; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SetTrackingLostPerfMarker_21() { return &___SetTrackingLostPerfMarker_21; }
	inline void set_SetTrackingLostPerfMarker_21(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SetTrackingLostPerfMarker_21 = value;
	}

	inline static int32_t get_offset_of_sessionSubsystem_22() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields, ___sessionSubsystem_22)); }
	inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * get_sessionSubsystem_22() const { return ___sessionSubsystem_22; }
	inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD ** get_address_of_sessionSubsystem_22() { return &___sessionSubsystem_22; }
	inline void set_sessionSubsystem_22(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * value)
	{
		___sessionSubsystem_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sessionSubsystem_22), (void*)value);
	}

	inline static int32_t get_offset_of_XRSessionSubsystems_23() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields, ___XRSessionSubsystems_23)); }
	inline List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * get_XRSessionSubsystems_23() const { return ___XRSessionSubsystems_23; }
	inline List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 ** get_address_of_XRSessionSubsystems_23() { return &___XRSessionSubsystems_23; }
	inline void set_XRSessionSubsystems_23(List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * value)
	{
		___XRSessionSubsystems_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XRSessionSubsystems_23), (void*)value);
	}
};


// System.Net.WebSockets.ManagedWebSocket
struct ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393  : public WebSocket_t163494E6D52FFC7BACDCD1488EB1B61B392C298D
{
public:
	// System.IO.Stream System.Net.WebSockets.ManagedWebSocket::_stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____stream_6;
	// System.Boolean System.Net.WebSockets.ManagedWebSocket::_isServer
	bool ____isServer_7;
	// System.String System.Net.WebSockets.ManagedWebSocket::_subprotocol
	String_t* ____subprotocol_8;
	// System.Threading.Timer System.Net.WebSockets.ManagedWebSocket::_keepAliveTimer
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ____keepAliveTimer_9;
	// System.Threading.CancellationTokenSource System.Net.WebSockets.ManagedWebSocket::_abortSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____abortSource_10;
	// System.Byte[] System.Net.WebSockets.ManagedWebSocket::_receiveBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____receiveBuffer_11;
	// System.Boolean System.Net.WebSockets.ManagedWebSocket::_receiveBufferFromPool
	bool ____receiveBufferFromPool_12;
	// System.Net.WebSockets.ManagedWebSocket/Utf8MessageState System.Net.WebSockets.ManagedWebSocket::_utf8TextState
	Utf8MessageState_tE921FCD77394CBA2FFCAB969044B8068951955D3 * ____utf8TextState_13;
	// System.Threading.SemaphoreSlim System.Net.WebSockets.ManagedWebSocket::_sendFrameAsyncLock
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____sendFrameAsyncLock_14;
	// System.Net.WebSockets.WebSocketState System.Net.WebSockets.ManagedWebSocket::_state
	int32_t ____state_15;
	// System.Boolean System.Net.WebSockets.ManagedWebSocket::_disposed
	bool ____disposed_16;
	// System.Boolean System.Net.WebSockets.ManagedWebSocket::_sentCloseFrame
	bool ____sentCloseFrame_17;
	// System.Boolean System.Net.WebSockets.ManagedWebSocket::_receivedCloseFrame
	bool ____receivedCloseFrame_18;
	// System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus> System.Net.WebSockets.ManagedWebSocket::_closeStatus
	Nullable_1_tEEF07CE805E86A33961C7C0AE095FA4A628605C6  ____closeStatus_19;
	// System.String System.Net.WebSockets.ManagedWebSocket::_closeStatusDescription
	String_t* ____closeStatusDescription_20;
	// System.Net.WebSockets.ManagedWebSocket/MessageHeader System.Net.WebSockets.ManagedWebSocket::_lastReceiveHeader
	MessageHeader_t76B0077FC24560BBDC9A4B6B543DBEDA00702634  ____lastReceiveHeader_21;
	// System.Int32 System.Net.WebSockets.ManagedWebSocket::_receiveBufferOffset
	int32_t ____receiveBufferOffset_22;
	// System.Int32 System.Net.WebSockets.ManagedWebSocket::_receiveBufferCount
	int32_t ____receiveBufferCount_23;
	// System.Int32 System.Net.WebSockets.ManagedWebSocket::_receivedMaskOffsetOffset
	int32_t ____receivedMaskOffsetOffset_24;
	// System.Byte[] System.Net.WebSockets.ManagedWebSocket::_sendBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____sendBuffer_25;
	// System.Boolean System.Net.WebSockets.ManagedWebSocket::_lastSendWasFragment
	bool ____lastSendWasFragment_26;
	// System.Threading.Tasks.Task System.Net.WebSockets.ManagedWebSocket::_lastSendAsync
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ____lastSendAsync_27;
	// System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocketReceiveResult> System.Net.WebSockets.ManagedWebSocket::_lastReceiveAsync
	Task_1_t79E764D87096B674F330B1306805A0FF72B2E83E * ____lastReceiveAsync_28;

public:
	inline static int32_t get_offset_of__stream_6() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____stream_6)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__stream_6() const { return ____stream_6; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__stream_6() { return &____stream_6; }
	inline void set__stream_6(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____stream_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_6), (void*)value);
	}

	inline static int32_t get_offset_of__isServer_7() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____isServer_7)); }
	inline bool get__isServer_7() const { return ____isServer_7; }
	inline bool* get_address_of__isServer_7() { return &____isServer_7; }
	inline void set__isServer_7(bool value)
	{
		____isServer_7 = value;
	}

	inline static int32_t get_offset_of__subprotocol_8() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____subprotocol_8)); }
	inline String_t* get__subprotocol_8() const { return ____subprotocol_8; }
	inline String_t** get_address_of__subprotocol_8() { return &____subprotocol_8; }
	inline void set__subprotocol_8(String_t* value)
	{
		____subprotocol_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____subprotocol_8), (void*)value);
	}

	inline static int32_t get_offset_of__keepAliveTimer_9() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____keepAliveTimer_9)); }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * get__keepAliveTimer_9() const { return ____keepAliveTimer_9; }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB ** get_address_of__keepAliveTimer_9() { return &____keepAliveTimer_9; }
	inline void set__keepAliveTimer_9(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * value)
	{
		____keepAliveTimer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keepAliveTimer_9), (void*)value);
	}

	inline static int32_t get_offset_of__abortSource_10() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____abortSource_10)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__abortSource_10() const { return ____abortSource_10; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__abortSource_10() { return &____abortSource_10; }
	inline void set__abortSource_10(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____abortSource_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____abortSource_10), (void*)value);
	}

	inline static int32_t get_offset_of__receiveBuffer_11() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____receiveBuffer_11)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__receiveBuffer_11() const { return ____receiveBuffer_11; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__receiveBuffer_11() { return &____receiveBuffer_11; }
	inline void set__receiveBuffer_11(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____receiveBuffer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____receiveBuffer_11), (void*)value);
	}

	inline static int32_t get_offset_of__receiveBufferFromPool_12() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____receiveBufferFromPool_12)); }
	inline bool get__receiveBufferFromPool_12() const { return ____receiveBufferFromPool_12; }
	inline bool* get_address_of__receiveBufferFromPool_12() { return &____receiveBufferFromPool_12; }
	inline void set__receiveBufferFromPool_12(bool value)
	{
		____receiveBufferFromPool_12 = value;
	}

	inline static int32_t get_offset_of__utf8TextState_13() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____utf8TextState_13)); }
	inline Utf8MessageState_tE921FCD77394CBA2FFCAB969044B8068951955D3 * get__utf8TextState_13() const { return ____utf8TextState_13; }
	inline Utf8MessageState_tE921FCD77394CBA2FFCAB969044B8068951955D3 ** get_address_of__utf8TextState_13() { return &____utf8TextState_13; }
	inline void set__utf8TextState_13(Utf8MessageState_tE921FCD77394CBA2FFCAB969044B8068951955D3 * value)
	{
		____utf8TextState_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____utf8TextState_13), (void*)value);
	}

	inline static int32_t get_offset_of__sendFrameAsyncLock_14() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____sendFrameAsyncLock_14)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__sendFrameAsyncLock_14() const { return ____sendFrameAsyncLock_14; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__sendFrameAsyncLock_14() { return &____sendFrameAsyncLock_14; }
	inline void set__sendFrameAsyncLock_14(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____sendFrameAsyncLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sendFrameAsyncLock_14), (void*)value);
	}

	inline static int32_t get_offset_of__state_15() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____state_15)); }
	inline int32_t get__state_15() const { return ____state_15; }
	inline int32_t* get_address_of__state_15() { return &____state_15; }
	inline void set__state_15(int32_t value)
	{
		____state_15 = value;
	}

	inline static int32_t get_offset_of__disposed_16() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____disposed_16)); }
	inline bool get__disposed_16() const { return ____disposed_16; }
	inline bool* get_address_of__disposed_16() { return &____disposed_16; }
	inline void set__disposed_16(bool value)
	{
		____disposed_16 = value;
	}

	inline static int32_t get_offset_of__sentCloseFrame_17() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____sentCloseFrame_17)); }
	inline bool get__sentCloseFrame_17() const { return ____sentCloseFrame_17; }
	inline bool* get_address_of__sentCloseFrame_17() { return &____sentCloseFrame_17; }
	inline void set__sentCloseFrame_17(bool value)
	{
		____sentCloseFrame_17 = value;
	}

	inline static int32_t get_offset_of__receivedCloseFrame_18() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____receivedCloseFrame_18)); }
	inline bool get__receivedCloseFrame_18() const { return ____receivedCloseFrame_18; }
	inline bool* get_address_of__receivedCloseFrame_18() { return &____receivedCloseFrame_18; }
	inline void set__receivedCloseFrame_18(bool value)
	{
		____receivedCloseFrame_18 = value;
	}

	inline static int32_t get_offset_of__closeStatus_19() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____closeStatus_19)); }
	inline Nullable_1_tEEF07CE805E86A33961C7C0AE095FA4A628605C6  get__closeStatus_19() const { return ____closeStatus_19; }
	inline Nullable_1_tEEF07CE805E86A33961C7C0AE095FA4A628605C6 * get_address_of__closeStatus_19() { return &____closeStatus_19; }
	inline void set__closeStatus_19(Nullable_1_tEEF07CE805E86A33961C7C0AE095FA4A628605C6  value)
	{
		____closeStatus_19 = value;
	}

	inline static int32_t get_offset_of__closeStatusDescription_20() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____closeStatusDescription_20)); }
	inline String_t* get__closeStatusDescription_20() const { return ____closeStatusDescription_20; }
	inline String_t** get_address_of__closeStatusDescription_20() { return &____closeStatusDescription_20; }
	inline void set__closeStatusDescription_20(String_t* value)
	{
		____closeStatusDescription_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____closeStatusDescription_20), (void*)value);
	}

	inline static int32_t get_offset_of__lastReceiveHeader_21() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____lastReceiveHeader_21)); }
	inline MessageHeader_t76B0077FC24560BBDC9A4B6B543DBEDA00702634  get__lastReceiveHeader_21() const { return ____lastReceiveHeader_21; }
	inline MessageHeader_t76B0077FC24560BBDC9A4B6B543DBEDA00702634 * get_address_of__lastReceiveHeader_21() { return &____lastReceiveHeader_21; }
	inline void set__lastReceiveHeader_21(MessageHeader_t76B0077FC24560BBDC9A4B6B543DBEDA00702634  value)
	{
		____lastReceiveHeader_21 = value;
	}

	inline static int32_t get_offset_of__receiveBufferOffset_22() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____receiveBufferOffset_22)); }
	inline int32_t get__receiveBufferOffset_22() const { return ____receiveBufferOffset_22; }
	inline int32_t* get_address_of__receiveBufferOffset_22() { return &____receiveBufferOffset_22; }
	inline void set__receiveBufferOffset_22(int32_t value)
	{
		____receiveBufferOffset_22 = value;
	}

	inline static int32_t get_offset_of__receiveBufferCount_23() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____receiveBufferCount_23)); }
	inline int32_t get__receiveBufferCount_23() const { return ____receiveBufferCount_23; }
	inline int32_t* get_address_of__receiveBufferCount_23() { return &____receiveBufferCount_23; }
	inline void set__receiveBufferCount_23(int32_t value)
	{
		____receiveBufferCount_23 = value;
	}

	inline static int32_t get_offset_of__receivedMaskOffsetOffset_24() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____receivedMaskOffsetOffset_24)); }
	inline int32_t get__receivedMaskOffsetOffset_24() const { return ____receivedMaskOffsetOffset_24; }
	inline int32_t* get_address_of__receivedMaskOffsetOffset_24() { return &____receivedMaskOffsetOffset_24; }
	inline void set__receivedMaskOffsetOffset_24(int32_t value)
	{
		____receivedMaskOffsetOffset_24 = value;
	}

	inline static int32_t get_offset_of__sendBuffer_25() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____sendBuffer_25)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__sendBuffer_25() const { return ____sendBuffer_25; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__sendBuffer_25() { return &____sendBuffer_25; }
	inline void set__sendBuffer_25(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____sendBuffer_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sendBuffer_25), (void*)value);
	}

	inline static int32_t get_offset_of__lastSendWasFragment_26() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____lastSendWasFragment_26)); }
	inline bool get__lastSendWasFragment_26() const { return ____lastSendWasFragment_26; }
	inline bool* get_address_of__lastSendWasFragment_26() { return &____lastSendWasFragment_26; }
	inline void set__lastSendWasFragment_26(bool value)
	{
		____lastSendWasFragment_26 = value;
	}

	inline static int32_t get_offset_of__lastSendAsync_27() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____lastSendAsync_27)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get__lastSendAsync_27() const { return ____lastSendAsync_27; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of__lastSendAsync_27() { return &____lastSendAsync_27; }
	inline void set__lastSendAsync_27(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		____lastSendAsync_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastSendAsync_27), (void*)value);
	}

	inline static int32_t get_offset_of__lastReceiveAsync_28() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____lastReceiveAsync_28)); }
	inline Task_1_t79E764D87096B674F330B1306805A0FF72B2E83E * get__lastReceiveAsync_28() const { return ____lastReceiveAsync_28; }
	inline Task_1_t79E764D87096B674F330B1306805A0FF72B2E83E ** get_address_of__lastReceiveAsync_28() { return &____lastReceiveAsync_28; }
	inline void set__lastReceiveAsync_28(Task_1_t79E764D87096B674F330B1306805A0FF72B2E83E * value)
	{
		____lastReceiveAsync_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReceiveAsync_28), (void*)value);
	}
};

struct ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator System.Net.WebSockets.ManagedWebSocket::s_random
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ___s_random_0;
	// System.Text.UTF8Encoding System.Net.WebSockets.ManagedWebSocket::s_textEncoding
	UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * ___s_textEncoding_1;
	// System.Net.WebSockets.WebSocketState[] System.Net.WebSockets.ManagedWebSocket::s_validSendStates
	WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4* ___s_validSendStates_2;
	// System.Net.WebSockets.WebSocketState[] System.Net.WebSockets.ManagedWebSocket::s_validReceiveStates
	WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4* ___s_validReceiveStates_3;
	// System.Net.WebSockets.WebSocketState[] System.Net.WebSockets.ManagedWebSocket::s_validCloseOutputStates
	WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4* ___s_validCloseOutputStates_4;
	// System.Net.WebSockets.WebSocketState[] System.Net.WebSockets.ManagedWebSocket::s_validCloseStates
	WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4* ___s_validCloseStates_5;

public:
	inline static int32_t get_offset_of_s_random_0() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393_StaticFields, ___s_random_0)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get_s_random_0() const { return ___s_random_0; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of_s_random_0() { return &___s_random_0; }
	inline void set_s_random_0(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		___s_random_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_random_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_textEncoding_1() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393_StaticFields, ___s_textEncoding_1)); }
	inline UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * get_s_textEncoding_1() const { return ___s_textEncoding_1; }
	inline UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 ** get_address_of_s_textEncoding_1() { return &___s_textEncoding_1; }
	inline void set_s_textEncoding_1(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * value)
	{
		___s_textEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_textEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_validSendStates_2() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393_StaticFields, ___s_validSendStates_2)); }
	inline WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4* get_s_validSendStates_2() const { return ___s_validSendStates_2; }
	inline WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4** get_address_of_s_validSendStates_2() { return &___s_validSendStates_2; }
	inline void set_s_validSendStates_2(WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4* value)
	{
		___s_validSendStates_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_validSendStates_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_validReceiveStates_3() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393_StaticFields, ___s_validReceiveStates_3)); }
	inline WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4* get_s_validReceiveStates_3() const { return ___s_validReceiveStates_3; }
	inline WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4** get_address_of_s_validReceiveStates_3() { return &___s_validReceiveStates_3; }
	inline void set_s_validReceiveStates_3(WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4* value)
	{
		___s_validReceiveStates_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_validReceiveStates_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_validCloseOutputStates_4() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393_StaticFields, ___s_validCloseOutputStates_4)); }
	inline WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4* get_s_validCloseOutputStates_4() const { return ___s_validCloseOutputStates_4; }
	inline WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4** get_address_of_s_validCloseOutputStates_4() { return &___s_validCloseOutputStates_4; }
	inline void set_s_validCloseOutputStates_4(WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4* value)
	{
		___s_validCloseOutputStates_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_validCloseOutputStates_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_validCloseStates_5() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393_StaticFields, ___s_validCloseStates_5)); }
	inline WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4* get_s_validCloseStates_5() const { return ___s_validCloseStates_5; }
	inline WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4** get_address_of_s_validCloseStates_5() { return &___s_validCloseStates_5; }
	inline void set_s_validCloseStates_5(WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4* value)
	{
		___s_validCloseStates_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_validCloseStates_5), (void*)value);
	}
};


// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA  : public EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C
{
public:

public:
};


// MapRaycastProvider
struct MapRaycastProvider_t283A5DF0C8A1F895656CD28F0945D899E52F5A86  : public BaseCoreSystem_tC426C126FBF9D59913CCD51BF9FE4E5A2EB9ED3C
{
public:
	// System.Collections.Generic.List`1<Microsoft.Maps.Unity.MapRenderer> MapRaycastProvider::_mapRenderers
	List_1_tB730799AB9076F9B3BBB2088B97BB4241771F8D0 * ____mapRenderers_17;

public:
	inline static int32_t get_offset_of__mapRenderers_17() { return static_cast<int32_t>(offsetof(MapRaycastProvider_t283A5DF0C8A1F895656CD28F0945D899E52F5A86, ____mapRenderers_17)); }
	inline List_1_tB730799AB9076F9B3BBB2088B97BB4241771F8D0 * get__mapRenderers_17() const { return ____mapRenderers_17; }
	inline List_1_tB730799AB9076F9B3BBB2088B97BB4241771F8D0 ** get_address_of__mapRenderers_17() { return &____mapRenderers_17; }
	inline void set__mapRenderers_17(List_1_tB730799AB9076F9B3BBB2088B97BB4241771F8D0 * value)
	{
		____mapRenderers_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapRenderers_17), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.Maps.Unity.MapRendererBase
struct MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Mesh> Microsoft.Maps.Unity.MapRendererBase::=dCB=
	List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * ___U3DdCBU3D_7;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::=dCD=
	bool ___U3DdCDU3D_11;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::_version
	int32_t ____version_13;
	// Microsoft.Maps.Unity.MapSession Microsoft.Maps.Unity.MapRendererBase::_mapSession
	MapSession_t5FA57D2A6DD2D6FEFA0D74AAC5457E9B7283FB7B * ____mapSession_14;
	// Microsoft.Maps.Unity.MapSession Microsoft.Maps.Unity.MapRendererBase::=dCd=
	MapSession_t5FA57D2A6DD2D6FEFA0D74AAC5457E9B7283FB7B * ___U3DdCdU3D_15;
	// System.String Microsoft.Maps.Unity.MapRendererBase::<Copyright>k__BackingField
	String_t* ___U3CCopyrightU3Ek__BackingField_16;
	// UnityEngine.Color Microsoft.Maps.Unity.MapRendererBase::_mapEdgeColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____mapEdgeColor_17;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_mapEdgeColorFadeDistance
	float ____mapEdgeColorFadeDistance_18;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_detailOffset
	float ____detailOffset_19;
	// System.Int16 Microsoft.Maps.Unity.MapRendererBase::_numElevationTileFallbackLods
	int16_t ____numElevationTileFallbackLods_20;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::_requestTilesAroundView
	bool ____requestTilesAroundView_21;
	// Microsoft.Maps.Unity.LatLonWrapper Microsoft.Maps.Unity.MapRendererBase::_center
	LatLonWrapper_tBA271F15F917AD3DA4CE46D59C170E29A20CE620  ____center_22;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_zoomLevel
	float ____zoomLevel_23;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_minimumZoomLevel
	float ____minimumZoomLevel_24;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_maximumZoomLevel
	float ____maximumZoomLevel_25;
	// Microsoft.Maps.Unity.MapTerrainType Microsoft.Maps.Unity.MapRendererBase::_mapTerrainType
	int32_t ____mapTerrainType_26;
	// Microsoft.Maps.Unity.MapShape Microsoft.Maps.Unity.MapRendererBase::_mapShape
	int32_t ____mapShape_27;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::<ElevationBaseline>k__BackingField
	double ___U3CElevationBaselineU3Ek__BackingField_28;
	// UnityEngine.Vector2 Microsoft.Maps.Unity.MapRendererBase::_localMapDimension
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____localMapDimension_29;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_localMapRadius
	float ____localMapRadius_30;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_localMapBaseHeight
	float ____localMapBaseHeight_31;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::<LocalMapHeight>k__BackingField
	float ___U3CLocalMapHeightU3Ek__BackingField_32;
	// UnityEngine.Mesh Microsoft.Maps.Unity.MapRendererBase::=dCE=
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___U3DdCEU3D_33;
	// UnityEngine.Mesh Microsoft.Maps.Unity.MapRendererBase::=dCe=
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___U3DdCeU3D_34;
	// UnityEngine.Mesh Microsoft.Maps.Unity.MapRendererBase::=dCF=
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___U3DdCFU3D_35;
	// UnityEngine.Mesh Microsoft.Maps.Unity.MapRendererBase::=dCf=
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___U3DdCfU3D_36;
	// Microsoft.Geospatial.GeoBoundingBox Microsoft.Maps.Unity.MapRendererBase::<Bounds>k__BackingField
	GeoBoundingBox_t32C03D1EFA3A5806C5C73996150E0BED0E3D2AA9  ___U3CBoundsU3Ek__BackingField_37;
	// UnityEngine.Texture2D Microsoft.Maps.Unity.MapRendererBase::=dC0=
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___U3DdC0U3D_38;
	// UnityEngine.Camera Microsoft.Maps.Unity.MapRendererBase::=ddb3=
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___U3Dddb3U3D_39;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_elevationScale
	float ____elevationScale_40;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::_castShadows
	bool ____castShadows_41;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::_receiveShadows
	bool ____receiveShadows_42;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::_enableMrtkMaterialIntegration
	bool ____enableMrtkMaterialIntegration_43;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::_terrainMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ____terrainMaterial_44;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::=dC1=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3DdC1U3D_45;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::=dC2=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3DdC2U3D_46;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::=dC3=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3DdC3U3D_47;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::_isClippingVolumeWallEnabled
	bool ____isClippingVolumeWallEnabled_48;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::_clippingVolumeMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ____clippingVolumeMaterial_49;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::=dC4=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3DdC4U3D_50;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::=dC5=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3DdC5U3D_51;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::=dC6=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3DdC6U3D_52;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::=dC7=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3DdC7U3D_53;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::=dC8=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3DdC8U3D_54;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::=dC9=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3DdC9U3D_55;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::=dcA=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3DdcAU3D_56;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::=dca=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3DdcaU3D_57;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::=dcB=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3DdcBU3D_58;
	// Microsoft.Maps.Unity.ClippingVolumeDistanceTextureResolution Microsoft.Maps.Unity.MapRendererBase::_clippingVolumeDistanceTextureResolution
	int32_t ____clippingVolumeDistanceTextureResolution_59;
	// Microsoft.Maps.Unity.ClippingVolumeDistanceTextureResolution Microsoft.Maps.Unity.MapRendererBase::=dcb=
	int32_t ___U3DdcbU3D_60;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::_clippingDistanceLayer
	int32_t ____clippingDistanceLayer_61;
	// Microsoft.Maps.Unity.TextureTileLayerList Microsoft.Maps.Unity.MapRendererBase::_textureTileLayers
	TextureTileLayerList_tF1EE1A40F4F4867E65AA4F4604055E5A9EDC4789 * ____textureTileLayers_62;
	// Microsoft.Maps.Unity.ElevationTileLayerList Microsoft.Maps.Unity.MapRendererBase::_elevationTileLayers
	ElevationTileLayerList_t0B1B55454B735FE797DEDC3914D433619EF64596 * ____elevationTileLayers_64;
	// =aa9= Microsoft.Maps.Unity.MapRendererBase::=dcC=
	U3Daa9U3D_tA2FDF26F19D128EC610D68E365E8CC4F511B0023 * ___U3DdcCU3D_65;
	// System.Nullable`1<System.Boolean> Microsoft.Maps.Unity.MapRendererBase::=dcc=
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3DdccU3D_66;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::_hideTileLayerComponents
	bool ____hideTileLayerComponents_67;
	// System.EventHandler Microsoft.Maps.Unity.MapRendererBase::=dEEa=
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___U3DdEEaU3D_68;
	// System.EventHandler Microsoft.Maps.Unity.MapRendererBase::AfterOnDisable
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___AfterOnDisable_69;
	// System.EventHandler`1<Microsoft.Maps.Unity.MapSession> Microsoft.Maps.Unity.MapRendererBase::MapSessionChanged
	EventHandler_1_t80F99D0708F949013178DAAB697A8ADDD7E26CEF * ___MapSessionChanged_70;
	// UnityEngine.MaterialPropertyBlock Microsoft.Maps.Unity.MapRendererBase::=dcD=
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___U3DdcDU3D_71;
	// UnityEngine.MaterialPropertyBlock Microsoft.Maps.Unity.MapRendererBase::=dcd=
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___U3DdcdU3D_72;
	// UnityEngine.RenderTextureFormat Microsoft.Maps.Unity.MapRendererBase::=dcF=
	int32_t ___U3DdcFU3D_75;
	// UnityEngine.Camera Microsoft.Maps.Unity.MapRendererBase::=dcf=
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___U3DdcfU3D_76;
	// UnityEngine.RenderTexture Microsoft.Maps.Unity.MapRendererBase::=dc0=
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___U3Ddc0U3D_77;
	// System.Object Microsoft.Maps.Unity.MapRendererBase::=dc1=
	RuntimeObject * ___U3Ddc1U3D_78;
	// =aBf= Microsoft.Maps.Unity.MapRendererBase::=dc2=
	U3DaBfU3D_t8AF97094D7FF908E5FEE3E770A7106B8F3157A41 * ___U3Ddc2U3D_79;
	// =abC= Microsoft.Maps.Unity.MapRendererBase::=dc3=
	U3DabCU3D_t61789023ABF460958B83F16E10457546C34B7128 * ___U3Ddc3U3D_80;
	// =a6= Microsoft.Maps.Unity.MapRendererBase::=dc4=
	U3Da6U3D_tE932E50BCEBD1F457996E4132D2298E13C361944 * ___U3Ddc4U3D_81;
	// =a8= Microsoft.Maps.Unity.MapRendererBase::=dc5=
	U3Da8U3D_tF0DD36AB9297E82E05661CBABB123D1C496EFE84 * ___U3Ddc5U3D_82;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::=dc6=
	bool ___U3Ddc6U3D_83;
	// Microsoft.Maps.Unity.MapLabelLayer Microsoft.Maps.Unity.MapRendererBase::=dc7=
	MapLabelLayer_t9D22FED9F94903011A544C2BE774E1451CB6458C * ___U3Ddc7U3D_84;
	// Microsoft.Maps.Unity.MapLabelLayer Microsoft.Maps.Unity.MapRendererBase::=dc8=
	MapLabelLayer_t9D22FED9F94903011A544C2BE774E1451CB6458C * ___U3Ddc8U3D_85;
	// =abC= Microsoft.Maps.Unity.MapRendererBase::=dc9=
	U3DabCU3D_t61789023ABF460958B83F16E10457546C34B7128 * ___U3Ddc9U3D_86;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=dDA=
	int32_t ___U3DdDAU3D_87;
	// Microsoft.Geospatial.MercatorBoundingBox Microsoft.Maps.Unity.MapRendererBase::<MercatorBoundingBox>k__BackingField
	MercatorBoundingBox_tF15A0BE4E0B8A348E711DD2E4ABC651FA2A6B457  ___U3CMercatorBoundingBoxU3Ek__BackingField_88;
	// Microsoft.Geospatial.MercatorBoundingBox Microsoft.Maps.Unity.MapRendererBase::=dDa=
	MercatorBoundingBox_tF15A0BE4E0B8A348E711DD2E4ABC651FA2A6B457  ___U3DdDaU3D_89;
	// Microsoft.Geospatial.MercatorBoundingCircle Microsoft.Maps.Unity.MapRendererBase::<MercatorBoundingCircle>k__BackingField
	MercatorBoundingCircle_t30C2C78A027F176AC0C8833BB93DB971F88F1E17  ___U3CMercatorBoundingCircleU3Ek__BackingField_90;
	// System.Collections.Generic.List`1<Microsoft.Geospatial.TileId> Microsoft.Maps.Unity.MapRendererBase::=dDB=
	List_1_t574B55493CD44B678FE0A8C2ED49A502CBF73DFD * ___U3DdDBU3D_91;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::=dDb=
	double ___U3DdDbU3D_92;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::=dDC=
	double ___U3DdDCU3D_93;
	// Microsoft.Geospatial.LatLon Microsoft.Maps.Unity.MapRendererBase::=dDc=
	LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7  ___U3DdDcU3D_94;
	// Microsoft.Geospatial.LatLon Microsoft.Maps.Unity.MapRendererBase::=dDD=
	LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7  ___U3DdDDU3D_95;
	// Microsoft.Geospatial.MercatorCoordinate Microsoft.Maps.Unity.MapRendererBase::=dDd=
	MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578  ___U3DdDdU3D_96;
	// Microsoft.Geospatial.MercatorCoordinate Microsoft.Maps.Unity.MapRendererBase::=dDE=
	MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578  ___U3DdDEU3D_97;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::=dDe=
	double ___U3DdDeU3D_98;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::=dDF=
	double ___U3DdDFU3D_99;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::=dDf=
	double ___U3DdDfU3D_100;
	// UnityEngine.Vector2 Microsoft.Maps.Unity.MapRendererBase::=dD0=
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3DdD0U3D_101;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::=dD1=
	float ___U3DdD1U3D_102;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::=dD2=
	float ___U3DdD2U3D_103;
	// UnityEngine.Vector3 Microsoft.Maps.Unity.MapRendererBase::=dD3=
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3DdD3U3D_104;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::=dD4=
	double ___U3DdD4U3D_105;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::=dD5=
	double ___U3DdD5U3D_106;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::=dD6=
	float ___U3DdD6U3D_107;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::=dD7=
	float ___U3DdD7U3D_108;
	// =ae= Microsoft.Maps.Unity.MapRendererBase::=dD8=
	U3DaeU3D_tD2F8B0AD08FEE403A39C51C867CDFF36E76997CD  ___U3DdD8U3D_109;
	// Microsoft.Geospatial.TileLevelOfDetail Microsoft.Maps.Unity.MapRendererBase::=dD9=
	TileLevelOfDetail_t4420D910EBE3B7A748896E01B73FDBE004BEFA12  ___U3DdD9U3D_110;
	// System.Collections.Generic.List`1<System.String> Microsoft.Maps.Unity.MapRendererBase::=ddA=
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3DddAU3D_111;
	// System.Collections.Generic.List`1<System.String> Microsoft.Maps.Unity.MapRendererBase::=dda=
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3DddaU3D_112;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::=ddB=
	bool ___U3DddBU3D_113;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=ddb=
	int32_t ___U3DddbU3D_114;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=ddC=
	int32_t ___U3DddCU3D_115;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=ddc=
	int32_t ___U3DddcU3D_116;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=ddD=
	int32_t ___U3DddDU3D_117;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=ddd=
	int32_t ___U3DdddU3D_118;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=ddE=
	int32_t ___U3DddEU3D_119;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=dde=
	int32_t ___U3DddeU3D_120;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=ddF=
	int32_t ___U3DddFU3D_121;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=ddf=
	int32_t ___U3DddfU3D_122;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=dd0=
	int32_t ___U3Ddd0U3D_123;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=dd1=
	int32_t ___U3Ddd1U3D_124;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=dd2=
	int32_t ___U3Ddd2U3D_125;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=dd3=
	int32_t ___U3Ddd3U3D_126;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=dd4=
	int32_t ___U3Ddd4U3D_127;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=dd5=
	int32_t ___U3Ddd5U3D_128;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=dd6=
	int32_t ___U3Ddd6U3D_129;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=dd7=
	int32_t ___U3Ddd7U3D_130;
	// UnityEngine.Texture2D Microsoft.Maps.Unity.MapRendererBase::=dd8=
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___U3Ddd8U3D_131;
	// =aF= Microsoft.Maps.Unity.MapRendererBase::=dd9=
	U3DaFU3D_t5939A8DFBCA13E3C0A2C9909883621E99494F95B * ___U3Ddd9U3D_132;
	// System.Collections.Generic.List`1<=aaD=> Microsoft.Maps.Unity.MapRendererBase::=dEA=
	List_1_t98DB3208E8CB7E31A3B4A501EEFE344958781A96 * ___U3DdEAU3D_133;
	// System.Collections.Generic.List`1<=aab=> Microsoft.Maps.Unity.MapRendererBase::=dEa=
	List_1_t65A305F3F31F6FA01BE300EA528D7C8A5DA041EA * ___U3DdEaU3D_134;
	// System.Collections.Generic.List`1<=aBd=> Microsoft.Maps.Unity.MapRendererBase::=dEB=
	List_1_tB2E189377B78B6FCD234B39359957F63B0B298E7 * ___U3DdEBU3D_135;
	// System.Collections.Generic.List`1<=aaC=> Microsoft.Maps.Unity.MapRendererBase::=dEb=
	List_1_tA3331EB76E62250A803EA681CDF11700E1953463 * ___U3DdEbU3D_136;
	// System.Collections.Generic.List`1<Microsoft.Geospatial.TileId> Microsoft.Maps.Unity.MapRendererBase::=dEC=
	List_1_t574B55493CD44B678FE0A8C2ED49A502CBF73DFD * ___U3DdECU3D_137;
	// UnityEngine.Vector4[] Microsoft.Maps.Unity.MapRendererBase::=dEc=
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___U3DdEcU3D_138;
	// System.Collections.Generic.Dictionary`2<Microsoft.Geospatial.TileId,=aD=> Microsoft.Maps.Unity.MapRendererBase::=dED=
	Dictionary_2_t9F50D6C4439A146E288F7929B47D3BE1E2A11A0A * ___U3DdEDU3D_139;
	// System.Collections.Generic.Dictionary`2<Microsoft.Geospatial.TileId,=aaF=> Microsoft.Maps.Unity.MapRendererBase::=dEd=
	Dictionary_2_tDF8CE5B085640093327FBEAAF2280DB01FB44C70 * ___U3DdEdU3D_140;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::=dEE=
	bool ___U3DdEEU3D_141;

public:
	inline static int32_t get_offset_of_U3DdCBU3D_7() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdCBU3D_7)); }
	inline List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * get_U3DdCBU3D_7() const { return ___U3DdCBU3D_7; }
	inline List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B ** get_address_of_U3DdCBU3D_7() { return &___U3DdCBU3D_7; }
	inline void set_U3DdCBU3D_7(List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * value)
	{
		___U3DdCBU3D_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdCBU3D_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdCDU3D_11() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdCDU3D_11)); }
	inline bool get_U3DdCDU3D_11() const { return ___U3DdCDU3D_11; }
	inline bool* get_address_of_U3DdCDU3D_11() { return &___U3DdCDU3D_11; }
	inline void set_U3DdCDU3D_11(bool value)
	{
		___U3DdCDU3D_11 = value;
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__mapSession_14() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ____mapSession_14)); }
	inline MapSession_t5FA57D2A6DD2D6FEFA0D74AAC5457E9B7283FB7B * get__mapSession_14() const { return ____mapSession_14; }
	inline MapSession_t5FA57D2A6DD2D6FEFA0D74AAC5457E9B7283FB7B ** get_address_of__mapSession_14() { return &____mapSession_14; }
	inline void set__mapSession_14(MapSession_t5FA57D2A6DD2D6FEFA0D74AAC5457E9B7283FB7B * value)
	{
		____mapSession_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapSession_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdCdU3D_15() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdCdU3D_15)); }
	inline MapSession_t5FA57D2A6DD2D6FEFA0D74AAC5457E9B7283FB7B * get_U3DdCdU3D_15() const { return ___U3DdCdU3D_15; }
	inline MapSession_t5FA57D2A6DD2D6FEFA0D74AAC5457E9B7283FB7B ** get_address_of_U3DdCdU3D_15() { return &___U3DdCdU3D_15; }
	inline void set_U3DdCdU3D_15(MapSession_t5FA57D2A6DD2D6FEFA0D74AAC5457E9B7283FB7B * value)
	{
		___U3DdCdU3D_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdCdU3D_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCopyrightU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3CCopyrightU3Ek__BackingField_16)); }
	inline String_t* get_U3CCopyrightU3Ek__BackingField_16() const { return ___U3CCopyrightU3Ek__BackingField_16; }
	inline String_t** get_address_of_U3CCopyrightU3Ek__BackingField_16() { return &___U3CCopyrightU3Ek__BackingField_16; }
	inline void set_U3CCopyrightU3Ek__BackingField_16(String_t* value)
	{
		___U3CCopyrightU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCopyrightU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of__mapEdgeColor_17() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ____mapEdgeColor_17)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__mapEdgeColor_17() const { return ____mapEdgeColor_17; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__mapEdgeColor_17() { return &____mapEdgeColor_17; }
	inline void set__mapEdgeColor_17(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____mapEdgeColor_17 = value;
	}

	inline static int32_t get_offset_of__mapEdgeColorFadeDistance_18() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ____mapEdgeColorFadeDistance_18)); }
	inline float get__mapEdgeColorFadeDistance_18() const { return ____mapEdgeColorFadeDistance_18; }
	inline float* get_address_of__mapEdgeColorFadeDistance_18() { return &____mapEdgeColorFadeDistance_18; }
	inline void set__mapEdgeColorFadeDistance_18(float value)
	{
		____mapEdgeColorFadeDistance_18 = value;
	}

	inline static int32_t get_offset_of__detailOffset_19() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ____detailOffset_19)); }
	inline float get__detailOffset_19() const { return ____detailOffset_19; }
	inline float* get_address_of__detailOffset_19() { return &____detailOffset_19; }
	inline void set__detailOffset_19(float value)
	{
		____detailOffset_19 = value;
	}

	inline static int32_t get_offset_of__numElevationTileFallbackLods_20() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ____numElevationTileFallbackLods_20)); }
	inline int16_t get__numElevationTileFallbackLods_20() const { return ____numElevationTileFallbackLods_20; }
	inline int16_t* get_address_of__numElevationTileFallbackLods_20() { return &____numElevationTileFallbackLods_20; }
	inline void set__numElevationTileFallbackLods_20(int16_t value)
	{
		____numElevationTileFallbackLods_20 = value;
	}

	inline static int32_t get_offset_of__requestTilesAroundView_21() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ____requestTilesAroundView_21)); }
	inline bool get__requestTilesAroundView_21() const { return ____requestTilesAroundView_21; }
	inline bool* get_address_of__requestTilesAroundView_21() { return &____requestTilesAroundView_21; }
	inline void set__requestTilesAroundView_21(bool value)
	{
		____requestTilesAroundView_21 = value;
	}

	inline static int32_t get_offset_of__center_22() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ____center_22)); }
	inline LatLonWrapper_tBA271F15F917AD3DA4CE46D59C170E29A20CE620  get__center_22() const { return ____center_22; }
	inline LatLonWrapper_tBA271F15F917AD3DA4CE46D59C170E29A20CE620 * get_address_of__center_22() { return &____center_22; }
	inline void set__center_22(LatLonWrapper_tBA271F15F917AD3DA4CE46D59C170E29A20CE620  value)
	{
		____center_22 = value;
	}

	inline static int32_t get_offset_of__zoomLevel_23() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ____zoomLevel_23)); }
	inline float get__zoomLevel_23() const { return ____zoomLevel_23; }
	inline float* get_address_of__zoomLevel_23() { return &____zoomLevel_23; }
	inline void set__zoomLevel_23(float value)
	{
		____zoomLevel_23 = value;
	}

	inline static int32_t get_offset_of__minimumZoomLevel_24() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ____minimumZoomLevel_24)); }
	inline float get__minimumZoomLevel_24() const { return ____minimumZoomLevel_24; }
	inline float* get_address_of__minimumZoomLevel_24() { return &____minimumZoomLevel_24; }
	inline void set__minimumZoomLevel_24(float value)
	{
		____minimumZoomLevel_24 = value;
	}

	inline static int32_t get_offset_of__maximumZoomLevel_25() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ____maximumZoomLevel_25)); }
	inline float get__maximumZoomLevel_25() const { return ____maximumZoomLevel_25; }
	inline float* get_address_of__maximumZoomLevel_25() { return &____maximumZoomLevel_25; }
	inline void set__maximumZoomLevel_25(float value)
	{
		____maximumZoomLevel_25 = value;
	}

	inline static int32_t get_offset_of__mapTerrainType_26() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ____mapTerrainType_26)); }
	inline int32_t get__mapTerrainType_26() const { return ____mapTerrainType_26; }
	inline int32_t* get_address_of__mapTerrainType_26() { return &____mapTerrainType_26; }
	inline void set__mapTerrainType_26(int32_t value)
	{
		____mapTerrainType_26 = value;
	}

	inline static int32_t get_offset_of__mapShape_27() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ____mapShape_27)); }
	inline int32_t get__mapShape_27() const { return ____mapShape_27; }
	inline int32_t* get_address_of__mapShape_27() { return &____mapShape_27; }
	inline void set__mapShape_27(int32_t value)
	{
		____mapShape_27 = value;
	}

	inline static int32_t get_offset_of_U3CElevationBaselineU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3CElevationBaselineU3Ek__BackingField_28)); }
	inline double get_U3CElevationBaselineU3Ek__BackingField_28() const { return ___U3CElevationBaselineU3Ek__BackingField_28; }
	inline double* get_address_of_U3CElevationBaselineU3Ek__BackingField_28() { return &___U3CElevationBaselineU3Ek__BackingField_28; }
	inline void set_U3CElevationBaselineU3Ek__BackingField_28(double value)
	{
		___U3CElevationBaselineU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of__localMapDimension_29() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ____localMapDimension_29)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get__localMapDimension_29() const { return ____localMapDimension_29; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of__localMapDimension_29() { return &____localMapDimension_29; }
	inline void set__localMapDimension_29(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		____localMapDimension_29 = value;
	}

	inline static int32_t get_offset_of__localMapRadius_30() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ____localMapRadius_30)); }
	inline float get__localMapRadius_30() const { return ____localMapRadius_30; }
	inline float* get_address_of__localMapRadius_30() { return &____localMapRadius_30; }
	inline void set__localMapRadius_30(float value)
	{
		____localMapRadius_30 = value;
	}

	inline static int32_t get_offset_of__localMapBaseHeight_31() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ____localMapBaseHeight_31)); }
	inline float get__localMapBaseHeight_31() const { return ____localMapBaseHeight_31; }
	inline float* get_address_of__localMapBaseHeight_31() { return &____localMapBaseHeight_31; }
	inline void set__localMapBaseHeight_31(float value)
	{
		____localMapBaseHeight_31 = value;
	}

	inline static int32_t get_offset_of_U3CLocalMapHeightU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3CLocalMapHeightU3Ek__BackingField_32)); }
	inline float get_U3CLocalMapHeightU3Ek__BackingField_32() const { return ___U3CLocalMapHeightU3Ek__BackingField_32; }
	inline float* get_address_of_U3CLocalMapHeightU3Ek__BackingField_32() { return &___U3CLocalMapHeightU3Ek__BackingField_32; }
	inline void set_U3CLocalMapHeightU3Ek__BackingField_32(float value)
	{
		___U3CLocalMapHeightU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3DdCEU3D_33() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdCEU3D_33)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_U3DdCEU3D_33() const { return ___U3DdCEU3D_33; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_U3DdCEU3D_33() { return &___U3DdCEU3D_33; }
	inline void set_U3DdCEU3D_33(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___U3DdCEU3D_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdCEU3D_33), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdCeU3D_34() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdCeU3D_34)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_U3DdCeU3D_34() const { return ___U3DdCeU3D_34; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_U3DdCeU3D_34() { return &___U3DdCeU3D_34; }
	inline void set_U3DdCeU3D_34(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___U3DdCeU3D_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdCeU3D_34), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdCFU3D_35() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdCFU3D_35)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_U3DdCFU3D_35() const { return ___U3DdCFU3D_35; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_U3DdCFU3D_35() { return &___U3DdCFU3D_35; }
	inline void set_U3DdCFU3D_35(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___U3DdCFU3D_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdCFU3D_35), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdCfU3D_36() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdCfU3D_36)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_U3DdCfU3D_36() const { return ___U3DdCfU3D_36; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_U3DdCfU3D_36() { return &___U3DdCfU3D_36; }
	inline void set_U3DdCfU3D_36(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___U3DdCfU3D_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdCfU3D_36), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBoundsU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3CBoundsU3Ek__BackingField_37)); }
	inline GeoBoundingBox_t32C03D1EFA3A5806C5C73996150E0BED0E3D2AA9  get_U3CBoundsU3Ek__BackingField_37() const { return ___U3CBoundsU3Ek__BackingField_37; }
	inline GeoBoundingBox_t32C03D1EFA3A5806C5C73996150E0BED0E3D2AA9 * get_address_of_U3CBoundsU3Ek__BackingField_37() { return &___U3CBoundsU3Ek__BackingField_37; }
	inline void set_U3CBoundsU3Ek__BackingField_37(GeoBoundingBox_t32C03D1EFA3A5806C5C73996150E0BED0E3D2AA9  value)
	{
		___U3CBoundsU3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_U3DdC0U3D_38() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdC0U3D_38)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_U3DdC0U3D_38() const { return ___U3DdC0U3D_38; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_U3DdC0U3D_38() { return &___U3DdC0U3D_38; }
	inline void set_U3DdC0U3D_38(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___U3DdC0U3D_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdC0U3D_38), (void*)value);
	}

	inline static int32_t get_offset_of_U3Dddb3U3D_39() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3Dddb3U3D_39)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_U3Dddb3U3D_39() const { return ___U3Dddb3U3D_39; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_U3Dddb3U3D_39() { return &___U3Dddb3U3D_39; }
	inline void set_U3Dddb3U3D_39(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___U3Dddb3U3D_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Dddb3U3D_39), (void*)value);
	}

	inline static int32_t get_offset_of__elevationScale_40() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ____elevationScale_40)); }
	inline float get__elevationScale_40() const { return ____elevationScale_40; }
	inline float* get_address_of__elevationScale_40() { return &____elevationScale_40; }
	inline void set__elevationScale_40(float value)
	{
		____elevationScale_40 = value;
	}

	inline static int32_t get_offset_of__castShadows_41() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ____castShadows_41)); }
	inline bool get__castShadows_41() const { return ____castShadows_41; }
	inline bool* get_address_of__castShadows_41() { return &____castShadows_41; }
	inline void set__castShadows_41(bool value)
	{
		____castShadows_41 = value;
	}

	inline static int32_t get_offset_of__receiveShadows_42() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ____receiveShadows_42)); }
	inline bool get__receiveShadows_42() const { return ____receiveShadows_42; }
	inline bool* get_address_of__receiveShadows_42() { return &____receiveShadows_42; }
	inline void set__receiveShadows_42(bool value)
	{
		____receiveShadows_42 = value;
	}

	inline static int32_t get_offset_of__enableMrtkMaterialIntegration_43() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ____enableMrtkMaterialIntegration_43)); }
	inline bool get__enableMrtkMaterialIntegration_43() const { return ____enableMrtkMaterialIntegration_43; }
	inline bool* get_address_of__enableMrtkMaterialIntegration_43() { return &____enableMrtkMaterialIntegration_43; }
	inline void set__enableMrtkMaterialIntegration_43(bool value)
	{
		____enableMrtkMaterialIntegration_43 = value;
	}

	inline static int32_t get_offset_of__terrainMaterial_44() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ____terrainMaterial_44)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get__terrainMaterial_44() const { return ____terrainMaterial_44; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of__terrainMaterial_44() { return &____terrainMaterial_44; }
	inline void set__terrainMaterial_44(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		____terrainMaterial_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____terrainMaterial_44), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdC1U3D_45() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdC1U3D_45)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3DdC1U3D_45() const { return ___U3DdC1U3D_45; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3DdC1U3D_45() { return &___U3DdC1U3D_45; }
	inline void set_U3DdC1U3D_45(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3DdC1U3D_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdC1U3D_45), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdC2U3D_46() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdC2U3D_46)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3DdC2U3D_46() const { return ___U3DdC2U3D_46; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3DdC2U3D_46() { return &___U3DdC2U3D_46; }
	inline void set_U3DdC2U3D_46(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3DdC2U3D_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdC2U3D_46), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdC3U3D_47() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdC3U3D_47)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3DdC3U3D_47() const { return ___U3DdC3U3D_47; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3DdC3U3D_47() { return &___U3DdC3U3D_47; }
	inline void set_U3DdC3U3D_47(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3DdC3U3D_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdC3U3D_47), (void*)value);
	}

	inline static int32_t get_offset_of__isClippingVolumeWallEnabled_48() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ____isClippingVolumeWallEnabled_48)); }
	inline bool get__isClippingVolumeWallEnabled_48() const { return ____isClippingVolumeWallEnabled_48; }
	inline bool* get_address_of__isClippingVolumeWallEnabled_48() { return &____isClippingVolumeWallEnabled_48; }
	inline void set__isClippingVolumeWallEnabled_48(bool value)
	{
		____isClippingVolumeWallEnabled_48 = value;
	}

	inline static int32_t get_offset_of__clippingVolumeMaterial_49() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ____clippingVolumeMaterial_49)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get__clippingVolumeMaterial_49() const { return ____clippingVolumeMaterial_49; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of__clippingVolumeMaterial_49() { return &____clippingVolumeMaterial_49; }
	inline void set__clippingVolumeMaterial_49(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		____clippingVolumeMaterial_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____clippingVolumeMaterial_49), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdC4U3D_50() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdC4U3D_50)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3DdC4U3D_50() const { return ___U3DdC4U3D_50; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3DdC4U3D_50() { return &___U3DdC4U3D_50; }
	inline void set_U3DdC4U3D_50(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3DdC4U3D_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdC4U3D_50), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdC5U3D_51() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdC5U3D_51)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3DdC5U3D_51() const { return ___U3DdC5U3D_51; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3DdC5U3D_51() { return &___U3DdC5U3D_51; }
	inline void set_U3DdC5U3D_51(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3DdC5U3D_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdC5U3D_51), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdC6U3D_52() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdC6U3D_52)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3DdC6U3D_52() const { return ___U3DdC6U3D_52; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3DdC6U3D_52() { return &___U3DdC6U3D_52; }
	inline void set_U3DdC6U3D_52(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3DdC6U3D_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdC6U3D_52), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdC7U3D_53() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdC7U3D_53)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3DdC7U3D_53() const { return ___U3DdC7U3D_53; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3DdC7U3D_53() { return &___U3DdC7U3D_53; }
	inline void set_U3DdC7U3D_53(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3DdC7U3D_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdC7U3D_53), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdC8U3D_54() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdC8U3D_54)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3DdC8U3D_54() const { return ___U3DdC8U3D_54; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3DdC8U3D_54() { return &___U3DdC8U3D_54; }
	inline void set_U3DdC8U3D_54(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3DdC8U3D_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdC8U3D_54), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdC9U3D_55() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdC9U3D_55)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3DdC9U3D_55() const { return ___U3DdC9U3D_55; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3DdC9U3D_55() { return &___U3DdC9U3D_55; }
	inline void set_U3DdC9U3D_55(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3DdC9U3D_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdC9U3D_55), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdcAU3D_56() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdcAU3D_56)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3DdcAU3D_56() const { return ___U3DdcAU3D_56; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3DdcAU3D_56() { return &___U3DdcAU3D_56; }
	inline void set_U3DdcAU3D_56(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3DdcAU3D_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdcAU3D_56), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdcaU3D_57() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdcaU3D_57)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3DdcaU3D_57() const { return ___U3DdcaU3D_57; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3DdcaU3D_57() { return &___U3DdcaU3D_57; }
	inline void set_U3DdcaU3D_57(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3DdcaU3D_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdcaU3D_57), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdcBU3D_58() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdcBU3D_58)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3DdcBU3D_58() const { return ___U3DdcBU3D_58; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3DdcBU3D_58() { return &___U3DdcBU3D_58; }
	inline void set_U3DdcBU3D_58(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3DdcBU3D_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdcBU3D_58), (void*)value);
	}

	inline static int32_t get_offset_of__clippingVolumeDistanceTextureResolution_59() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ____clippingVolumeDistanceTextureResolution_59)); }
	inline int32_t get__clippingVolumeDistanceTextureResolution_59() const { return ____clippingVolumeDistanceTextureResolution_59; }
	inline int32_t* get_address_of__clippingVolumeDistanceTextureResolution_59() { return &____clippingVolumeDistanceTextureResolution_59; }
	inline void set__clippingVolumeDistanceTextureResolution_59(int32_t value)
	{
		____clippingVolumeDistanceTextureResolution_59 = value;
	}

	inline static int32_t get_offset_of_U3DdcbU3D_60() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdcbU3D_60)); }
	inline int32_t get_U3DdcbU3D_60() const { return ___U3DdcbU3D_60; }
	inline int32_t* get_address_of_U3DdcbU3D_60() { return &___U3DdcbU3D_60; }
	inline void set_U3DdcbU3D_60(int32_t value)
	{
		___U3DdcbU3D_60 = value;
	}

	inline static int32_t get_offset_of__clippingDistanceLayer_61() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ____clippingDistanceLayer_61)); }
	inline int32_t get__clippingDistanceLayer_61() const { return ____clippingDistanceLayer_61; }
	inline int32_t* get_address_of__clippingDistanceLayer_61() { return &____clippingDistanceLayer_61; }
	inline void set__clippingDistanceLayer_61(int32_t value)
	{
		____clippingDistanceLayer_61 = value;
	}

	inline static int32_t get_offset_of__textureTileLayers_62() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ____textureTileLayers_62)); }
	inline TextureTileLayerList_tF1EE1A40F4F4867E65AA4F4604055E5A9EDC4789 * get__textureTileLayers_62() const { return ____textureTileLayers_62; }
	inline TextureTileLayerList_tF1EE1A40F4F4867E65AA4F4604055E5A9EDC4789 ** get_address_of__textureTileLayers_62() { return &____textureTileLayers_62; }
	inline void set__textureTileLayers_62(TextureTileLayerList_tF1EE1A40F4F4867E65AA4F4604055E5A9EDC4789 * value)
	{
		____textureTileLayers_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____textureTileLayers_62), (void*)value);
	}

	inline static int32_t get_offset_of__elevationTileLayers_64() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ____elevationTileLayers_64)); }
	inline ElevationTileLayerList_t0B1B55454B735FE797DEDC3914D433619EF64596 * get__elevationTileLayers_64() const { return ____elevationTileLayers_64; }
	inline ElevationTileLayerList_t0B1B55454B735FE797DEDC3914D433619EF64596 ** get_address_of__elevationTileLayers_64() { return &____elevationTileLayers_64; }
	inline void set__elevationTileLayers_64(ElevationTileLayerList_t0B1B55454B735FE797DEDC3914D433619EF64596 * value)
	{
		____elevationTileLayers_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____elevationTileLayers_64), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdcCU3D_65() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdcCU3D_65)); }
	inline U3Daa9U3D_tA2FDF26F19D128EC610D68E365E8CC4F511B0023 * get_U3DdcCU3D_65() const { return ___U3DdcCU3D_65; }
	inline U3Daa9U3D_tA2FDF26F19D128EC610D68E365E8CC4F511B0023 ** get_address_of_U3DdcCU3D_65() { return &___U3DdcCU3D_65; }
	inline void set_U3DdcCU3D_65(U3Daa9U3D_tA2FDF26F19D128EC610D68E365E8CC4F511B0023 * value)
	{
		___U3DdcCU3D_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdcCU3D_65), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdccU3D_66() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdccU3D_66)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3DdccU3D_66() const { return ___U3DdccU3D_66; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3DdccU3D_66() { return &___U3DdccU3D_66; }
	inline void set_U3DdccU3D_66(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3DdccU3D_66 = value;
	}

	inline static int32_t get_offset_of__hideTileLayerComponents_67() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ____hideTileLayerComponents_67)); }
	inline bool get__hideTileLayerComponents_67() const { return ____hideTileLayerComponents_67; }
	inline bool* get_address_of__hideTileLayerComponents_67() { return &____hideTileLayerComponents_67; }
	inline void set__hideTileLayerComponents_67(bool value)
	{
		____hideTileLayerComponents_67 = value;
	}

	inline static int32_t get_offset_of_U3DdEEaU3D_68() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdEEaU3D_68)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_U3DdEEaU3D_68() const { return ___U3DdEEaU3D_68; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_U3DdEEaU3D_68() { return &___U3DdEEaU3D_68; }
	inline void set_U3DdEEaU3D_68(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___U3DdEEaU3D_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdEEaU3D_68), (void*)value);
	}

	inline static int32_t get_offset_of_AfterOnDisable_69() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___AfterOnDisable_69)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_AfterOnDisable_69() const { return ___AfterOnDisable_69; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_AfterOnDisable_69() { return &___AfterOnDisable_69; }
	inline void set_AfterOnDisable_69(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___AfterOnDisable_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AfterOnDisable_69), (void*)value);
	}

	inline static int32_t get_offset_of_MapSessionChanged_70() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___MapSessionChanged_70)); }
	inline EventHandler_1_t80F99D0708F949013178DAAB697A8ADDD7E26CEF * get_MapSessionChanged_70() const { return ___MapSessionChanged_70; }
	inline EventHandler_1_t80F99D0708F949013178DAAB697A8ADDD7E26CEF ** get_address_of_MapSessionChanged_70() { return &___MapSessionChanged_70; }
	inline void set_MapSessionChanged_70(EventHandler_1_t80F99D0708F949013178DAAB697A8ADDD7E26CEF * value)
	{
		___MapSessionChanged_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MapSessionChanged_70), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdcDU3D_71() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdcDU3D_71)); }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * get_U3DdcDU3D_71() const { return ___U3DdcDU3D_71; }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 ** get_address_of_U3DdcDU3D_71() { return &___U3DdcDU3D_71; }
	inline void set_U3DdcDU3D_71(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * value)
	{
		___U3DdcDU3D_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdcDU3D_71), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdcdU3D_72() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdcdU3D_72)); }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * get_U3DdcdU3D_72() const { return ___U3DdcdU3D_72; }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 ** get_address_of_U3DdcdU3D_72() { return &___U3DdcdU3D_72; }
	inline void set_U3DdcdU3D_72(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * value)
	{
		___U3DdcdU3D_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdcdU3D_72), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdcFU3D_75() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdcFU3D_75)); }
	inline int32_t get_U3DdcFU3D_75() const { return ___U3DdcFU3D_75; }
	inline int32_t* get_address_of_U3DdcFU3D_75() { return &___U3DdcFU3D_75; }
	inline void set_U3DdcFU3D_75(int32_t value)
	{
		___U3DdcFU3D_75 = value;
	}

	inline static int32_t get_offset_of_U3DdcfU3D_76() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdcfU3D_76)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_U3DdcfU3D_76() const { return ___U3DdcfU3D_76; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_U3DdcfU3D_76() { return &___U3DdcfU3D_76; }
	inline void set_U3DdcfU3D_76(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___U3DdcfU3D_76 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdcfU3D_76), (void*)value);
	}

	inline static int32_t get_offset_of_U3Ddc0U3D_77() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3Ddc0U3D_77)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_U3Ddc0U3D_77() const { return ___U3Ddc0U3D_77; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_U3Ddc0U3D_77() { return &___U3Ddc0U3D_77; }
	inline void set_U3Ddc0U3D_77(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___U3Ddc0U3D_77 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Ddc0U3D_77), (void*)value);
	}

	inline static int32_t get_offset_of_U3Ddc1U3D_78() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3Ddc1U3D_78)); }
	inline RuntimeObject * get_U3Ddc1U3D_78() const { return ___U3Ddc1U3D_78; }
	inline RuntimeObject ** get_address_of_U3Ddc1U3D_78() { return &___U3Ddc1U3D_78; }
	inline void set_U3Ddc1U3D_78(RuntimeObject * value)
	{
		___U3Ddc1U3D_78 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Ddc1U3D_78), (void*)value);
	}

	inline static int32_t get_offset_of_U3Ddc2U3D_79() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3Ddc2U3D_79)); }
	inline U3DaBfU3D_t8AF97094D7FF908E5FEE3E770A7106B8F3157A41 * get_U3Ddc2U3D_79() const { return ___U3Ddc2U3D_79; }
	inline U3DaBfU3D_t8AF97094D7FF908E5FEE3E770A7106B8F3157A41 ** get_address_of_U3Ddc2U3D_79() { return &___U3Ddc2U3D_79; }
	inline void set_U3Ddc2U3D_79(U3DaBfU3D_t8AF97094D7FF908E5FEE3E770A7106B8F3157A41 * value)
	{
		___U3Ddc2U3D_79 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Ddc2U3D_79), (void*)value);
	}

	inline static int32_t get_offset_of_U3Ddc3U3D_80() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3Ddc3U3D_80)); }
	inline U3DabCU3D_t61789023ABF460958B83F16E10457546C34B7128 * get_U3Ddc3U3D_80() const { return ___U3Ddc3U3D_80; }
	inline U3DabCU3D_t61789023ABF460958B83F16E10457546C34B7128 ** get_address_of_U3Ddc3U3D_80() { return &___U3Ddc3U3D_80; }
	inline void set_U3Ddc3U3D_80(U3DabCU3D_t61789023ABF460958B83F16E10457546C34B7128 * value)
	{
		___U3Ddc3U3D_80 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Ddc3U3D_80), (void*)value);
	}

	inline static int32_t get_offset_of_U3Ddc4U3D_81() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3Ddc4U3D_81)); }
	inline U3Da6U3D_tE932E50BCEBD1F457996E4132D2298E13C361944 * get_U3Ddc4U3D_81() const { return ___U3Ddc4U3D_81; }
	inline U3Da6U3D_tE932E50BCEBD1F457996E4132D2298E13C361944 ** get_address_of_U3Ddc4U3D_81() { return &___U3Ddc4U3D_81; }
	inline void set_U3Ddc4U3D_81(U3Da6U3D_tE932E50BCEBD1F457996E4132D2298E13C361944 * value)
	{
		___U3Ddc4U3D_81 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Ddc4U3D_81), (void*)value);
	}

	inline static int32_t get_offset_of_U3Ddc5U3D_82() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3Ddc5U3D_82)); }
	inline U3Da8U3D_tF0DD36AB9297E82E05661CBABB123D1C496EFE84 * get_U3Ddc5U3D_82() const { return ___U3Ddc5U3D_82; }
	inline U3Da8U3D_tF0DD36AB9297E82E05661CBABB123D1C496EFE84 ** get_address_of_U3Ddc5U3D_82() { return &___U3Ddc5U3D_82; }
	inline void set_U3Ddc5U3D_82(U3Da8U3D_tF0DD36AB9297E82E05661CBABB123D1C496EFE84 * value)
	{
		___U3Ddc5U3D_82 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Ddc5U3D_82), (void*)value);
	}

	inline static int32_t get_offset_of_U3Ddc6U3D_83() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3Ddc6U3D_83)); }
	inline bool get_U3Ddc6U3D_83() const { return ___U3Ddc6U3D_83; }
	inline bool* get_address_of_U3Ddc6U3D_83() { return &___U3Ddc6U3D_83; }
	inline void set_U3Ddc6U3D_83(bool value)
	{
		___U3Ddc6U3D_83 = value;
	}

	inline static int32_t get_offset_of_U3Ddc7U3D_84() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3Ddc7U3D_84)); }
	inline MapLabelLayer_t9D22FED9F94903011A544C2BE774E1451CB6458C * get_U3Ddc7U3D_84() const { return ___U3Ddc7U3D_84; }
	inline MapLabelLayer_t9D22FED9F94903011A544C2BE774E1451CB6458C ** get_address_of_U3Ddc7U3D_84() { return &___U3Ddc7U3D_84; }
	inline void set_U3Ddc7U3D_84(MapLabelLayer_t9D22FED9F94903011A544C2BE774E1451CB6458C * value)
	{
		___U3Ddc7U3D_84 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Ddc7U3D_84), (void*)value);
	}

	inline static int32_t get_offset_of_U3Ddc8U3D_85() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3Ddc8U3D_85)); }
	inline MapLabelLayer_t9D22FED9F94903011A544C2BE774E1451CB6458C * get_U3Ddc8U3D_85() const { return ___U3Ddc8U3D_85; }
	inline MapLabelLayer_t9D22FED9F94903011A544C2BE774E1451CB6458C ** get_address_of_U3Ddc8U3D_85() { return &___U3Ddc8U3D_85; }
	inline void set_U3Ddc8U3D_85(MapLabelLayer_t9D22FED9F94903011A544C2BE774E1451CB6458C * value)
	{
		___U3Ddc8U3D_85 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Ddc8U3D_85), (void*)value);
	}

	inline static int32_t get_offset_of_U3Ddc9U3D_86() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3Ddc9U3D_86)); }
	inline U3DabCU3D_t61789023ABF460958B83F16E10457546C34B7128 * get_U3Ddc9U3D_86() const { return ___U3Ddc9U3D_86; }
	inline U3DabCU3D_t61789023ABF460958B83F16E10457546C34B7128 ** get_address_of_U3Ddc9U3D_86() { return &___U3Ddc9U3D_86; }
	inline void set_U3Ddc9U3D_86(U3DabCU3D_t61789023ABF460958B83F16E10457546C34B7128 * value)
	{
		___U3Ddc9U3D_86 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Ddc9U3D_86), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdDAU3D_87() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdDAU3D_87)); }
	inline int32_t get_U3DdDAU3D_87() const { return ___U3DdDAU3D_87; }
	inline int32_t* get_address_of_U3DdDAU3D_87() { return &___U3DdDAU3D_87; }
	inline void set_U3DdDAU3D_87(int32_t value)
	{
		___U3DdDAU3D_87 = value;
	}

	inline static int32_t get_offset_of_U3CMercatorBoundingBoxU3Ek__BackingField_88() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3CMercatorBoundingBoxU3Ek__BackingField_88)); }
	inline MercatorBoundingBox_tF15A0BE4E0B8A348E711DD2E4ABC651FA2A6B457  get_U3CMercatorBoundingBoxU3Ek__BackingField_88() const { return ___U3CMercatorBoundingBoxU3Ek__BackingField_88; }
	inline MercatorBoundingBox_tF15A0BE4E0B8A348E711DD2E4ABC651FA2A6B457 * get_address_of_U3CMercatorBoundingBoxU3Ek__BackingField_88() { return &___U3CMercatorBoundingBoxU3Ek__BackingField_88; }
	inline void set_U3CMercatorBoundingBoxU3Ek__BackingField_88(MercatorBoundingBox_tF15A0BE4E0B8A348E711DD2E4ABC651FA2A6B457  value)
	{
		___U3CMercatorBoundingBoxU3Ek__BackingField_88 = value;
	}

	inline static int32_t get_offset_of_U3DdDaU3D_89() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdDaU3D_89)); }
	inline MercatorBoundingBox_tF15A0BE4E0B8A348E711DD2E4ABC651FA2A6B457  get_U3DdDaU3D_89() const { return ___U3DdDaU3D_89; }
	inline MercatorBoundingBox_tF15A0BE4E0B8A348E711DD2E4ABC651FA2A6B457 * get_address_of_U3DdDaU3D_89() { return &___U3DdDaU3D_89; }
	inline void set_U3DdDaU3D_89(MercatorBoundingBox_tF15A0BE4E0B8A348E711DD2E4ABC651FA2A6B457  value)
	{
		___U3DdDaU3D_89 = value;
	}

	inline static int32_t get_offset_of_U3CMercatorBoundingCircleU3Ek__BackingField_90() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3CMercatorBoundingCircleU3Ek__BackingField_90)); }
	inline MercatorBoundingCircle_t30C2C78A027F176AC0C8833BB93DB971F88F1E17  get_U3CMercatorBoundingCircleU3Ek__BackingField_90() const { return ___U3CMercatorBoundingCircleU3Ek__BackingField_90; }
	inline MercatorBoundingCircle_t30C2C78A027F176AC0C8833BB93DB971F88F1E17 * get_address_of_U3CMercatorBoundingCircleU3Ek__BackingField_90() { return &___U3CMercatorBoundingCircleU3Ek__BackingField_90; }
	inline void set_U3CMercatorBoundingCircleU3Ek__BackingField_90(MercatorBoundingCircle_t30C2C78A027F176AC0C8833BB93DB971F88F1E17  value)
	{
		___U3CMercatorBoundingCircleU3Ek__BackingField_90 = value;
	}

	inline static int32_t get_offset_of_U3DdDBU3D_91() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdDBU3D_91)); }
	inline List_1_t574B55493CD44B678FE0A8C2ED49A502CBF73DFD * get_U3DdDBU3D_91() const { return ___U3DdDBU3D_91; }
	inline List_1_t574B55493CD44B678FE0A8C2ED49A502CBF73DFD ** get_address_of_U3DdDBU3D_91() { return &___U3DdDBU3D_91; }
	inline void set_U3DdDBU3D_91(List_1_t574B55493CD44B678FE0A8C2ED49A502CBF73DFD * value)
	{
		___U3DdDBU3D_91 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdDBU3D_91), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdDbU3D_92() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdDbU3D_92)); }
	inline double get_U3DdDbU3D_92() const { return ___U3DdDbU3D_92; }
	inline double* get_address_of_U3DdDbU3D_92() { return &___U3DdDbU3D_92; }
	inline void set_U3DdDbU3D_92(double value)
	{
		___U3DdDbU3D_92 = value;
	}

	inline static int32_t get_offset_of_U3DdDCU3D_93() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdDCU3D_93)); }
	inline double get_U3DdDCU3D_93() const { return ___U3DdDCU3D_93; }
	inline double* get_address_of_U3DdDCU3D_93() { return &___U3DdDCU3D_93; }
	inline void set_U3DdDCU3D_93(double value)
	{
		___U3DdDCU3D_93 = value;
	}

	inline static int32_t get_offset_of_U3DdDcU3D_94() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdDcU3D_94)); }
	inline LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7  get_U3DdDcU3D_94() const { return ___U3DdDcU3D_94; }
	inline LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7 * get_address_of_U3DdDcU3D_94() { return &___U3DdDcU3D_94; }
	inline void set_U3DdDcU3D_94(LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7  value)
	{
		___U3DdDcU3D_94 = value;
	}

	inline static int32_t get_offset_of_U3DdDDU3D_95() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdDDU3D_95)); }
	inline LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7  get_U3DdDDU3D_95() const { return ___U3DdDDU3D_95; }
	inline LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7 * get_address_of_U3DdDDU3D_95() { return &___U3DdDDU3D_95; }
	inline void set_U3DdDDU3D_95(LatLon_tECF15D90E4E87498D78719F86409FE8482A00FF7  value)
	{
		___U3DdDDU3D_95 = value;
	}

	inline static int32_t get_offset_of_U3DdDdU3D_96() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdDdU3D_96)); }
	inline MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578  get_U3DdDdU3D_96() const { return ___U3DdDdU3D_96; }
	inline MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578 * get_address_of_U3DdDdU3D_96() { return &___U3DdDdU3D_96; }
	inline void set_U3DdDdU3D_96(MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578  value)
	{
		___U3DdDdU3D_96 = value;
	}

	inline static int32_t get_offset_of_U3DdDEU3D_97() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdDEU3D_97)); }
	inline MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578  get_U3DdDEU3D_97() const { return ___U3DdDEU3D_97; }
	inline MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578 * get_address_of_U3DdDEU3D_97() { return &___U3DdDEU3D_97; }
	inline void set_U3DdDEU3D_97(MercatorCoordinate_t53D12478F9B8F933B7055CC366FBC562CE614578  value)
	{
		___U3DdDEU3D_97 = value;
	}

	inline static int32_t get_offset_of_U3DdDeU3D_98() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdDeU3D_98)); }
	inline double get_U3DdDeU3D_98() const { return ___U3DdDeU3D_98; }
	inline double* get_address_of_U3DdDeU3D_98() { return &___U3DdDeU3D_98; }
	inline void set_U3DdDeU3D_98(double value)
	{
		___U3DdDeU3D_98 = value;
	}

	inline static int32_t get_offset_of_U3DdDFU3D_99() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdDFU3D_99)); }
	inline double get_U3DdDFU3D_99() const { return ___U3DdDFU3D_99; }
	inline double* get_address_of_U3DdDFU3D_99() { return &___U3DdDFU3D_99; }
	inline void set_U3DdDFU3D_99(double value)
	{
		___U3DdDFU3D_99 = value;
	}

	inline static int32_t get_offset_of_U3DdDfU3D_100() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdDfU3D_100)); }
	inline double get_U3DdDfU3D_100() const { return ___U3DdDfU3D_100; }
	inline double* get_address_of_U3DdDfU3D_100() { return &___U3DdDfU3D_100; }
	inline void set_U3DdDfU3D_100(double value)
	{
		___U3DdDfU3D_100 = value;
	}

	inline static int32_t get_offset_of_U3DdD0U3D_101() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdD0U3D_101)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3DdD0U3D_101() const { return ___U3DdD0U3D_101; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3DdD0U3D_101() { return &___U3DdD0U3D_101; }
	inline void set_U3DdD0U3D_101(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3DdD0U3D_101 = value;
	}

	inline static int32_t get_offset_of_U3DdD1U3D_102() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdD1U3D_102)); }
	inline float get_U3DdD1U3D_102() const { return ___U3DdD1U3D_102; }
	inline float* get_address_of_U3DdD1U3D_102() { return &___U3DdD1U3D_102; }
	inline void set_U3DdD1U3D_102(float value)
	{
		___U3DdD1U3D_102 = value;
	}

	inline static int32_t get_offset_of_U3DdD2U3D_103() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdD2U3D_103)); }
	inline float get_U3DdD2U3D_103() const { return ___U3DdD2U3D_103; }
	inline float* get_address_of_U3DdD2U3D_103() { return &___U3DdD2U3D_103; }
	inline void set_U3DdD2U3D_103(float value)
	{
		___U3DdD2U3D_103 = value;
	}

	inline static int32_t get_offset_of_U3DdD3U3D_104() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdD3U3D_104)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3DdD3U3D_104() const { return ___U3DdD3U3D_104; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3DdD3U3D_104() { return &___U3DdD3U3D_104; }
	inline void set_U3DdD3U3D_104(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3DdD3U3D_104 = value;
	}

	inline static int32_t get_offset_of_U3DdD4U3D_105() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdD4U3D_105)); }
	inline double get_U3DdD4U3D_105() const { return ___U3DdD4U3D_105; }
	inline double* get_address_of_U3DdD4U3D_105() { return &___U3DdD4U3D_105; }
	inline void set_U3DdD4U3D_105(double value)
	{
		___U3DdD4U3D_105 = value;
	}

	inline static int32_t get_offset_of_U3DdD5U3D_106() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdD5U3D_106)); }
	inline double get_U3DdD5U3D_106() const { return ___U3DdD5U3D_106; }
	inline double* get_address_of_U3DdD5U3D_106() { return &___U3DdD5U3D_106; }
	inline void set_U3DdD5U3D_106(double value)
	{
		___U3DdD5U3D_106 = value;
	}

	inline static int32_t get_offset_of_U3DdD6U3D_107() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdD6U3D_107)); }
	inline float get_U3DdD6U3D_107() const { return ___U3DdD6U3D_107; }
	inline float* get_address_of_U3DdD6U3D_107() { return &___U3DdD6U3D_107; }
	inline void set_U3DdD6U3D_107(float value)
	{
		___U3DdD6U3D_107 = value;
	}

	inline static int32_t get_offset_of_U3DdD7U3D_108() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdD7U3D_108)); }
	inline float get_U3DdD7U3D_108() const { return ___U3DdD7U3D_108; }
	inline float* get_address_of_U3DdD7U3D_108() { return &___U3DdD7U3D_108; }
	inline void set_U3DdD7U3D_108(float value)
	{
		___U3DdD7U3D_108 = value;
	}

	inline static int32_t get_offset_of_U3DdD8U3D_109() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdD8U3D_109)); }
	inline U3DaeU3D_tD2F8B0AD08FEE403A39C51C867CDFF36E76997CD  get_U3DdD8U3D_109() const { return ___U3DdD8U3D_109; }
	inline U3DaeU3D_tD2F8B0AD08FEE403A39C51C867CDFF36E76997CD * get_address_of_U3DdD8U3D_109() { return &___U3DdD8U3D_109; }
	inline void set_U3DdD8U3D_109(U3DaeU3D_tD2F8B0AD08FEE403A39C51C867CDFF36E76997CD  value)
	{
		___U3DdD8U3D_109 = value;
	}

	inline static int32_t get_offset_of_U3DdD9U3D_110() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdD9U3D_110)); }
	inline TileLevelOfDetail_t4420D910EBE3B7A748896E01B73FDBE004BEFA12  get_U3DdD9U3D_110() const { return ___U3DdD9U3D_110; }
	inline TileLevelOfDetail_t4420D910EBE3B7A748896E01B73FDBE004BEFA12 * get_address_of_U3DdD9U3D_110() { return &___U3DdD9U3D_110; }
	inline void set_U3DdD9U3D_110(TileLevelOfDetail_t4420D910EBE3B7A748896E01B73FDBE004BEFA12  value)
	{
		___U3DdD9U3D_110 = value;
	}

	inline static int32_t get_offset_of_U3DddAU3D_111() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DddAU3D_111)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3DddAU3D_111() const { return ___U3DddAU3D_111; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3DddAU3D_111() { return &___U3DddAU3D_111; }
	inline void set_U3DddAU3D_111(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3DddAU3D_111 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DddAU3D_111), (void*)value);
	}

	inline static int32_t get_offset_of_U3DddaU3D_112() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DddaU3D_112)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3DddaU3D_112() const { return ___U3DddaU3D_112; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3DddaU3D_112() { return &___U3DddaU3D_112; }
	inline void set_U3DddaU3D_112(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3DddaU3D_112 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DddaU3D_112), (void*)value);
	}

	inline static int32_t get_offset_of_U3DddBU3D_113() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DddBU3D_113)); }
	inline bool get_U3DddBU3D_113() const { return ___U3DddBU3D_113; }
	inline bool* get_address_of_U3DddBU3D_113() { return &___U3DddBU3D_113; }
	inline void set_U3DddBU3D_113(bool value)
	{
		___U3DddBU3D_113 = value;
	}

	inline static int32_t get_offset_of_U3DddbU3D_114() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DddbU3D_114)); }
	inline int32_t get_U3DddbU3D_114() const { return ___U3DddbU3D_114; }
	inline int32_t* get_address_of_U3DddbU3D_114() { return &___U3DddbU3D_114; }
	inline void set_U3DddbU3D_114(int32_t value)
	{
		___U3DddbU3D_114 = value;
	}

	inline static int32_t get_offset_of_U3DddCU3D_115() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DddCU3D_115)); }
	inline int32_t get_U3DddCU3D_115() const { return ___U3DddCU3D_115; }
	inline int32_t* get_address_of_U3DddCU3D_115() { return &___U3DddCU3D_115; }
	inline void set_U3DddCU3D_115(int32_t value)
	{
		___U3DddCU3D_115 = value;
	}

	inline static int32_t get_offset_of_U3DddcU3D_116() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DddcU3D_116)); }
	inline int32_t get_U3DddcU3D_116() const { return ___U3DddcU3D_116; }
	inline int32_t* get_address_of_U3DddcU3D_116() { return &___U3DddcU3D_116; }
	inline void set_U3DddcU3D_116(int32_t value)
	{
		___U3DddcU3D_116 = value;
	}

	inline static int32_t get_offset_of_U3DddDU3D_117() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DddDU3D_117)); }
	inline int32_t get_U3DddDU3D_117() const { return ___U3DddDU3D_117; }
	inline int32_t* get_address_of_U3DddDU3D_117() { return &___U3DddDU3D_117; }
	inline void set_U3DddDU3D_117(int32_t value)
	{
		___U3DddDU3D_117 = value;
	}

	inline static int32_t get_offset_of_U3DdddU3D_118() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdddU3D_118)); }
	inline int32_t get_U3DdddU3D_118() const { return ___U3DdddU3D_118; }
	inline int32_t* get_address_of_U3DdddU3D_118() { return &___U3DdddU3D_118; }
	inline void set_U3DdddU3D_118(int32_t value)
	{
		___U3DdddU3D_118 = value;
	}

	inline static int32_t get_offset_of_U3DddEU3D_119() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DddEU3D_119)); }
	inline int32_t get_U3DddEU3D_119() const { return ___U3DddEU3D_119; }
	inline int32_t* get_address_of_U3DddEU3D_119() { return &___U3DddEU3D_119; }
	inline void set_U3DddEU3D_119(int32_t value)
	{
		___U3DddEU3D_119 = value;
	}

	inline static int32_t get_offset_of_U3DddeU3D_120() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DddeU3D_120)); }
	inline int32_t get_U3DddeU3D_120() const { return ___U3DddeU3D_120; }
	inline int32_t* get_address_of_U3DddeU3D_120() { return &___U3DddeU3D_120; }
	inline void set_U3DddeU3D_120(int32_t value)
	{
		___U3DddeU3D_120 = value;
	}

	inline static int32_t get_offset_of_U3DddFU3D_121() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DddFU3D_121)); }
	inline int32_t get_U3DddFU3D_121() const { return ___U3DddFU3D_121; }
	inline int32_t* get_address_of_U3DddFU3D_121() { return &___U3DddFU3D_121; }
	inline void set_U3DddFU3D_121(int32_t value)
	{
		___U3DddFU3D_121 = value;
	}

	inline static int32_t get_offset_of_U3DddfU3D_122() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DddfU3D_122)); }
	inline int32_t get_U3DddfU3D_122() const { return ___U3DddfU3D_122; }
	inline int32_t* get_address_of_U3DddfU3D_122() { return &___U3DddfU3D_122; }
	inline void set_U3DddfU3D_122(int32_t value)
	{
		___U3DddfU3D_122 = value;
	}

	inline static int32_t get_offset_of_U3Ddd0U3D_123() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3Ddd0U3D_123)); }
	inline int32_t get_U3Ddd0U3D_123() const { return ___U3Ddd0U3D_123; }
	inline int32_t* get_address_of_U3Ddd0U3D_123() { return &___U3Ddd0U3D_123; }
	inline void set_U3Ddd0U3D_123(int32_t value)
	{
		___U3Ddd0U3D_123 = value;
	}

	inline static int32_t get_offset_of_U3Ddd1U3D_124() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3Ddd1U3D_124)); }
	inline int32_t get_U3Ddd1U3D_124() const { return ___U3Ddd1U3D_124; }
	inline int32_t* get_address_of_U3Ddd1U3D_124() { return &___U3Ddd1U3D_124; }
	inline void set_U3Ddd1U3D_124(int32_t value)
	{
		___U3Ddd1U3D_124 = value;
	}

	inline static int32_t get_offset_of_U3Ddd2U3D_125() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3Ddd2U3D_125)); }
	inline int32_t get_U3Ddd2U3D_125() const { return ___U3Ddd2U3D_125; }
	inline int32_t* get_address_of_U3Ddd2U3D_125() { return &___U3Ddd2U3D_125; }
	inline void set_U3Ddd2U3D_125(int32_t value)
	{
		___U3Ddd2U3D_125 = value;
	}

	inline static int32_t get_offset_of_U3Ddd3U3D_126() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3Ddd3U3D_126)); }
	inline int32_t get_U3Ddd3U3D_126() const { return ___U3Ddd3U3D_126; }
	inline int32_t* get_address_of_U3Ddd3U3D_126() { return &___U3Ddd3U3D_126; }
	inline void set_U3Ddd3U3D_126(int32_t value)
	{
		___U3Ddd3U3D_126 = value;
	}

	inline static int32_t get_offset_of_U3Ddd4U3D_127() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3Ddd4U3D_127)); }
	inline int32_t get_U3Ddd4U3D_127() const { return ___U3Ddd4U3D_127; }
	inline int32_t* get_address_of_U3Ddd4U3D_127() { return &___U3Ddd4U3D_127; }
	inline void set_U3Ddd4U3D_127(int32_t value)
	{
		___U3Ddd4U3D_127 = value;
	}

	inline static int32_t get_offset_of_U3Ddd5U3D_128() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3Ddd5U3D_128)); }
	inline int32_t get_U3Ddd5U3D_128() const { return ___U3Ddd5U3D_128; }
	inline int32_t* get_address_of_U3Ddd5U3D_128() { return &___U3Ddd5U3D_128; }
	inline void set_U3Ddd5U3D_128(int32_t value)
	{
		___U3Ddd5U3D_128 = value;
	}

	inline static int32_t get_offset_of_U3Ddd6U3D_129() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3Ddd6U3D_129)); }
	inline int32_t get_U3Ddd6U3D_129() const { return ___U3Ddd6U3D_129; }
	inline int32_t* get_address_of_U3Ddd6U3D_129() { return &___U3Ddd6U3D_129; }
	inline void set_U3Ddd6U3D_129(int32_t value)
	{
		___U3Ddd6U3D_129 = value;
	}

	inline static int32_t get_offset_of_U3Ddd7U3D_130() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3Ddd7U3D_130)); }
	inline int32_t get_U3Ddd7U3D_130() const { return ___U3Ddd7U3D_130; }
	inline int32_t* get_address_of_U3Ddd7U3D_130() { return &___U3Ddd7U3D_130; }
	inline void set_U3Ddd7U3D_130(int32_t value)
	{
		___U3Ddd7U3D_130 = value;
	}

	inline static int32_t get_offset_of_U3Ddd8U3D_131() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3Ddd8U3D_131)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_U3Ddd8U3D_131() const { return ___U3Ddd8U3D_131; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_U3Ddd8U3D_131() { return &___U3Ddd8U3D_131; }
	inline void set_U3Ddd8U3D_131(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___U3Ddd8U3D_131 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Ddd8U3D_131), (void*)value);
	}

	inline static int32_t get_offset_of_U3Ddd9U3D_132() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3Ddd9U3D_132)); }
	inline U3DaFU3D_t5939A8DFBCA13E3C0A2C9909883621E99494F95B * get_U3Ddd9U3D_132() const { return ___U3Ddd9U3D_132; }
	inline U3DaFU3D_t5939A8DFBCA13E3C0A2C9909883621E99494F95B ** get_address_of_U3Ddd9U3D_132() { return &___U3Ddd9U3D_132; }
	inline void set_U3Ddd9U3D_132(U3DaFU3D_t5939A8DFBCA13E3C0A2C9909883621E99494F95B * value)
	{
		___U3Ddd9U3D_132 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Ddd9U3D_132), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdEAU3D_133() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdEAU3D_133)); }
	inline List_1_t98DB3208E8CB7E31A3B4A501EEFE344958781A96 * get_U3DdEAU3D_133() const { return ___U3DdEAU3D_133; }
	inline List_1_t98DB3208E8CB7E31A3B4A501EEFE344958781A96 ** get_address_of_U3DdEAU3D_133() { return &___U3DdEAU3D_133; }
	inline void set_U3DdEAU3D_133(List_1_t98DB3208E8CB7E31A3B4A501EEFE344958781A96 * value)
	{
		___U3DdEAU3D_133 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdEAU3D_133), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdEaU3D_134() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdEaU3D_134)); }
	inline List_1_t65A305F3F31F6FA01BE300EA528D7C8A5DA041EA * get_U3DdEaU3D_134() const { return ___U3DdEaU3D_134; }
	inline List_1_t65A305F3F31F6FA01BE300EA528D7C8A5DA041EA ** get_address_of_U3DdEaU3D_134() { return &___U3DdEaU3D_134; }
	inline void set_U3DdEaU3D_134(List_1_t65A305F3F31F6FA01BE300EA528D7C8A5DA041EA * value)
	{
		___U3DdEaU3D_134 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdEaU3D_134), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdEBU3D_135() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdEBU3D_135)); }
	inline List_1_tB2E189377B78B6FCD234B39359957F63B0B298E7 * get_U3DdEBU3D_135() const { return ___U3DdEBU3D_135; }
	inline List_1_tB2E189377B78B6FCD234B39359957F63B0B298E7 ** get_address_of_U3DdEBU3D_135() { return &___U3DdEBU3D_135; }
	inline void set_U3DdEBU3D_135(List_1_tB2E189377B78B6FCD234B39359957F63B0B298E7 * value)
	{
		___U3DdEBU3D_135 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdEBU3D_135), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdEbU3D_136() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdEbU3D_136)); }
	inline List_1_tA3331EB76E62250A803EA681CDF11700E1953463 * get_U3DdEbU3D_136() const { return ___U3DdEbU3D_136; }
	inline List_1_tA3331EB76E62250A803EA681CDF11700E1953463 ** get_address_of_U3DdEbU3D_136() { return &___U3DdEbU3D_136; }
	inline void set_U3DdEbU3D_136(List_1_tA3331EB76E62250A803EA681CDF11700E1953463 * value)
	{
		___U3DdEbU3D_136 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdEbU3D_136), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdECU3D_137() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdECU3D_137)); }
	inline List_1_t574B55493CD44B678FE0A8C2ED49A502CBF73DFD * get_U3DdECU3D_137() const { return ___U3DdECU3D_137; }
	inline List_1_t574B55493CD44B678FE0A8C2ED49A502CBF73DFD ** get_address_of_U3DdECU3D_137() { return &___U3DdECU3D_137; }
	inline void set_U3DdECU3D_137(List_1_t574B55493CD44B678FE0A8C2ED49A502CBF73DFD * value)
	{
		___U3DdECU3D_137 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdECU3D_137), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdEcU3D_138() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdEcU3D_138)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_U3DdEcU3D_138() const { return ___U3DdEcU3D_138; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_U3DdEcU3D_138() { return &___U3DdEcU3D_138; }
	inline void set_U3DdEcU3D_138(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___U3DdEcU3D_138 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdEcU3D_138), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdEDU3D_139() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdEDU3D_139)); }
	inline Dictionary_2_t9F50D6C4439A146E288F7929B47D3BE1E2A11A0A * get_U3DdEDU3D_139() const { return ___U3DdEDU3D_139; }
	inline Dictionary_2_t9F50D6C4439A146E288F7929B47D3BE1E2A11A0A ** get_address_of_U3DdEDU3D_139() { return &___U3DdEDU3D_139; }
	inline void set_U3DdEDU3D_139(Dictionary_2_t9F50D6C4439A146E288F7929B47D3BE1E2A11A0A * value)
	{
		___U3DdEDU3D_139 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdEDU3D_139), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdEdU3D_140() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdEdU3D_140)); }
	inline Dictionary_2_tDF8CE5B085640093327FBEAAF2280DB01FB44C70 * get_U3DdEdU3D_140() const { return ___U3DdEdU3D_140; }
	inline Dictionary_2_tDF8CE5B085640093327FBEAAF2280DB01FB44C70 ** get_address_of_U3DdEdU3D_140() { return &___U3DdEdU3D_140; }
	inline void set_U3DdEdU3D_140(Dictionary_2_tDF8CE5B085640093327FBEAAF2280DB01FB44C70 * value)
	{
		___U3DdEdU3D_140 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdEdU3D_140), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdEEU3D_141() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B, ___U3DdEEU3D_141)); }
	inline bool get_U3DdEEU3D_141() const { return ___U3DdEEU3D_141; }
	inline bool* get_address_of_U3DdEEU3D_141() { return &___U3DdEEU3D_141; }
	inline void set_U3DdEEU3D_141(bool value)
	{
		___U3DdEEU3D_141 = value;
	}
};

struct MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B_StaticFields
{
public:
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=dCa=
	int32_t ___U3DdCaU3D_6;
	// UnityEngine.Vector4 Microsoft.Maps.Unity.MapRendererBase::=dCb=
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___U3DdCbU3D_8;
	// UnityEngine.Vector4[] Microsoft.Maps.Unity.MapRendererBase::=dCC=
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___U3DdCCU3D_9;
	// Microsoft.Geospatial.TileId[] Microsoft.Maps.Unity.MapRendererBase::=dCc=
	TileIdU5BU5D_tE329647BFAD80DC51B9CBF9693B1BA05A742A13D* ___U3DdCcU3D_10;
	// System.Int32[] Microsoft.Maps.Unity.MapRendererBase::=dcE=
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U3DdcEU3D_73;
	// System.Int32[] Microsoft.Maps.Unity.MapRendererBase::=dce=
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U3DdceU3D_74;
	// UnityEngine.Vector3[] Microsoft.Maps.Unity.MapRendererBase::=dEe=
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___U3DdEeU3D_142;
	// =aaF= Microsoft.Maps.Unity.MapRendererBase::=dEF=
	U3DaaFU3D_t6A4C39BFEC1A0FB367F57D8E11C4429204018D32 * ___U3DdEFU3D_143;
	// UnityEngine.Vector2[] Microsoft.Maps.Unity.MapRendererBase::=dE0=
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___U3DdE0U3D_145;

public:
	inline static int32_t get_offset_of_U3DdCaU3D_6() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B_StaticFields, ___U3DdCaU3D_6)); }
	inline int32_t get_U3DdCaU3D_6() const { return ___U3DdCaU3D_6; }
	inline int32_t* get_address_of_U3DdCaU3D_6() { return &___U3DdCaU3D_6; }
	inline void set_U3DdCaU3D_6(int32_t value)
	{
		___U3DdCaU3D_6 = value;
	}

	inline static int32_t get_offset_of_U3DdCbU3D_8() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B_StaticFields, ___U3DdCbU3D_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_U3DdCbU3D_8() const { return ___U3DdCbU3D_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_U3DdCbU3D_8() { return &___U3DdCbU3D_8; }
	inline void set_U3DdCbU3D_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___U3DdCbU3D_8 = value;
	}

	inline static int32_t get_offset_of_U3DdCCU3D_9() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B_StaticFields, ___U3DdCCU3D_9)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_U3DdCCU3D_9() const { return ___U3DdCCU3D_9; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_U3DdCCU3D_9() { return &___U3DdCCU3D_9; }
	inline void set_U3DdCCU3D_9(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___U3DdCCU3D_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdCCU3D_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdCcU3D_10() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B_StaticFields, ___U3DdCcU3D_10)); }
	inline TileIdU5BU5D_tE329647BFAD80DC51B9CBF9693B1BA05A742A13D* get_U3DdCcU3D_10() const { return ___U3DdCcU3D_10; }
	inline TileIdU5BU5D_tE329647BFAD80DC51B9CBF9693B1BA05A742A13D** get_address_of_U3DdCcU3D_10() { return &___U3DdCcU3D_10; }
	inline void set_U3DdCcU3D_10(TileIdU5BU5D_tE329647BFAD80DC51B9CBF9693B1BA05A742A13D* value)
	{
		___U3DdCcU3D_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdCcU3D_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdcEU3D_73() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B_StaticFields, ___U3DdcEU3D_73)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U3DdcEU3D_73() const { return ___U3DdcEU3D_73; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U3DdcEU3D_73() { return &___U3DdcEU3D_73; }
	inline void set_U3DdcEU3D_73(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U3DdcEU3D_73 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdcEU3D_73), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdceU3D_74() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B_StaticFields, ___U3DdceU3D_74)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U3DdceU3D_74() const { return ___U3DdceU3D_74; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U3DdceU3D_74() { return &___U3DdceU3D_74; }
	inline void set_U3DdceU3D_74(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U3DdceU3D_74 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdceU3D_74), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdEeU3D_142() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B_StaticFields, ___U3DdEeU3D_142)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_U3DdEeU3D_142() const { return ___U3DdEeU3D_142; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_U3DdEeU3D_142() { return &___U3DdEeU3D_142; }
	inline void set_U3DdEeU3D_142(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___U3DdEeU3D_142 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdEeU3D_142), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdEFU3D_143() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B_StaticFields, ___U3DdEFU3D_143)); }
	inline U3DaaFU3D_t6A4C39BFEC1A0FB367F57D8E11C4429204018D32 * get_U3DdEFU3D_143() const { return ___U3DdEFU3D_143; }
	inline U3DaaFU3D_t6A4C39BFEC1A0FB367F57D8E11C4429204018D32 ** get_address_of_U3DdEFU3D_143() { return &___U3DdEFU3D_143; }
	inline void set_U3DdEFU3D_143(U3DaaFU3D_t6A4C39BFEC1A0FB367F57D8E11C4429204018D32 * value)
	{
		___U3DdEFU3D_143 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdEFU3D_143), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdE0U3D_145() { return static_cast<int32_t>(offsetof(MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B_StaticFields, ___U3DdE0U3D_145)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_U3DdE0U3D_145() const { return ___U3DdE0U3D_145; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_U3DdE0U3D_145() { return &___U3DdE0U3D_145; }
	inline void set_U3DdE0U3D_145(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___U3DdE0U3D_145 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdE0U3D_145), (void*)value);
	}
};


// Microsoft.Maps.Unity.MapRenderer
struct MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8  : public MapRendererBase_t19DDA14D44406CC29A0D6A011235466C263A055B
{
public:
	// Microsoft.Maps.Unity.MapColliderType Microsoft.Maps.Unity.MapRenderer::_mapColliderType
	int32_t ____mapColliderType_146;
	// Microsoft.Maps.Unity.MapColliderType Microsoft.Maps.Unity.MapRenderer::_previousMapColliderType
	int32_t ____previousMapColliderType_147;
	// UnityEngine.Collider Microsoft.Maps.Unity.MapRenderer::_mapCollider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ____mapCollider_148;
	// UnityEngine.BoxCollider Microsoft.Maps.Unity.MapRenderer::_mapBoxCollider
	BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * ____mapBoxCollider_149;
	// Microsoft.Maps.Unity.IMapSceneAnimationController Microsoft.Maps.Unity.MapRenderer::_activeMapSceneAnimationController
	RuntimeObject* ____activeMapSceneAnimationController_150;
	// System.Boolean Microsoft.Maps.Unity.MapRenderer::_checkChildMapPins
	bool ____checkChildMapPins_151;
	// System.Collections.Generic.HashSet`1<Microsoft.Maps.Unity.MapPin> Microsoft.Maps.Unity.MapRenderer::_mapPinChildrenSet
	HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E * ____mapPinChildrenSet_152;
	// System.Collections.Generic.List`1<Microsoft.Maps.Unity.MapPin> Microsoft.Maps.Unity.MapRenderer::_lastMapPinsInView
	List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * ____lastMapPinsInView_153;
	// System.Collections.Generic.List`1<Microsoft.Maps.Unity.MapPin> Microsoft.Maps.Unity.MapRenderer::_mapPinsInView
	List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * ____mapPinsInView_154;
	// System.Collections.Generic.HashSet`1<Microsoft.Maps.Unity.MapPin> Microsoft.Maps.Unity.MapRenderer::_currentChildrenMapPins
	HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E * ____currentChildrenMapPins_155;
	// System.Collections.Generic.List`1<Microsoft.Maps.Unity.MapPin> Microsoft.Maps.Unity.MapRenderer::_mapPinChildrenToRemove
	List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * ____mapPinChildrenToRemove_156;
	// System.EventHandler Microsoft.Maps.Unity.MapRenderer::AfterUpdate
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___AfterUpdate_157;

public:
	inline static int32_t get_offset_of__mapColliderType_146() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____mapColliderType_146)); }
	inline int32_t get__mapColliderType_146() const { return ____mapColliderType_146; }
	inline int32_t* get_address_of__mapColliderType_146() { return &____mapColliderType_146; }
	inline void set__mapColliderType_146(int32_t value)
	{
		____mapColliderType_146 = value;
	}

	inline static int32_t get_offset_of__previousMapColliderType_147() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____previousMapColliderType_147)); }
	inline int32_t get__previousMapColliderType_147() const { return ____previousMapColliderType_147; }
	inline int32_t* get_address_of__previousMapColliderType_147() { return &____previousMapColliderType_147; }
	inline void set__previousMapColliderType_147(int32_t value)
	{
		____previousMapColliderType_147 = value;
	}

	inline static int32_t get_offset_of__mapCollider_148() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____mapCollider_148)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get__mapCollider_148() const { return ____mapCollider_148; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of__mapCollider_148() { return &____mapCollider_148; }
	inline void set__mapCollider_148(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		____mapCollider_148 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapCollider_148), (void*)value);
	}

	inline static int32_t get_offset_of__mapBoxCollider_149() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____mapBoxCollider_149)); }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * get__mapBoxCollider_149() const { return ____mapBoxCollider_149; }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 ** get_address_of__mapBoxCollider_149() { return &____mapBoxCollider_149; }
	inline void set__mapBoxCollider_149(BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * value)
	{
		____mapBoxCollider_149 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapBoxCollider_149), (void*)value);
	}

	inline static int32_t get_offset_of__activeMapSceneAnimationController_150() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____activeMapSceneAnimationController_150)); }
	inline RuntimeObject* get__activeMapSceneAnimationController_150() const { return ____activeMapSceneAnimationController_150; }
	inline RuntimeObject** get_address_of__activeMapSceneAnimationController_150() { return &____activeMapSceneAnimationController_150; }
	inline void set__activeMapSceneAnimationController_150(RuntimeObject* value)
	{
		____activeMapSceneAnimationController_150 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeMapSceneAnimationController_150), (void*)value);
	}

	inline static int32_t get_offset_of__checkChildMapPins_151() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____checkChildMapPins_151)); }
	inline bool get__checkChildMapPins_151() const { return ____checkChildMapPins_151; }
	inline bool* get_address_of__checkChildMapPins_151() { return &____checkChildMapPins_151; }
	inline void set__checkChildMapPins_151(bool value)
	{
		____checkChildMapPins_151 = value;
	}

	inline static int32_t get_offset_of__mapPinChildrenSet_152() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____mapPinChildrenSet_152)); }
	inline HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E * get__mapPinChildrenSet_152() const { return ____mapPinChildrenSet_152; }
	inline HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E ** get_address_of__mapPinChildrenSet_152() { return &____mapPinChildrenSet_152; }
	inline void set__mapPinChildrenSet_152(HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E * value)
	{
		____mapPinChildrenSet_152 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapPinChildrenSet_152), (void*)value);
	}

	inline static int32_t get_offset_of__lastMapPinsInView_153() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____lastMapPinsInView_153)); }
	inline List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * get__lastMapPinsInView_153() const { return ____lastMapPinsInView_153; }
	inline List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 ** get_address_of__lastMapPinsInView_153() { return &____lastMapPinsInView_153; }
	inline void set__lastMapPinsInView_153(List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * value)
	{
		____lastMapPinsInView_153 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastMapPinsInView_153), (void*)value);
	}

	inline static int32_t get_offset_of__mapPinsInView_154() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____mapPinsInView_154)); }
	inline List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * get__mapPinsInView_154() const { return ____mapPinsInView_154; }
	inline List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 ** get_address_of__mapPinsInView_154() { return &____mapPinsInView_154; }
	inline void set__mapPinsInView_154(List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * value)
	{
		____mapPinsInView_154 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapPinsInView_154), (void*)value);
	}

	inline static int32_t get_offset_of__currentChildrenMapPins_155() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____currentChildrenMapPins_155)); }
	inline HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E * get__currentChildrenMapPins_155() const { return ____currentChildrenMapPins_155; }
	inline HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E ** get_address_of__currentChildrenMapPins_155() { return &____currentChildrenMapPins_155; }
	inline void set__currentChildrenMapPins_155(HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E * value)
	{
		____currentChildrenMapPins_155 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentChildrenMapPins_155), (void*)value);
	}

	inline static int32_t get_offset_of__mapPinChildrenToRemove_156() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____mapPinChildrenToRemove_156)); }
	inline List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * get__mapPinChildrenToRemove_156() const { return ____mapPinChildrenToRemove_156; }
	inline List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 ** get_address_of__mapPinChildrenToRemove_156() { return &____mapPinChildrenToRemove_156; }
	inline void set__mapPinChildrenToRemove_156(List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * value)
	{
		____mapPinChildrenToRemove_156 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapPinChildrenToRemove_156), (void*)value);
	}

	inline static int32_t get_offset_of_AfterUpdate_157() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ___AfterUpdate_157)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_AfterUpdate_157() const { return ___AfterUpdate_157; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_AfterUpdate_157() { return &___AfterUpdate_157; }
	inline void set_AfterUpdate_157(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___AfterUpdate_157 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AfterUpdate_157), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue);
il2cpp_hresult_t IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0);
il2cpp_hresult_t IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(RuntimeObject* __this);


// System.Object System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::GetAt(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ListToBindableVectorViewAdapter_GetAt_m4B138FEE3A71058B2D8B39DF8BCE91EF18E317C2 (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __this, uint32_t ___index0, const RuntimeMethod* method);
// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ListToBindableVectorViewAdapter_get_Size_m639607FFD5260E793DE3C653992EEE933C570826 (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::IndexOf(System.Object,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListToBindableVectorViewAdapter_IndexOf_m1C9D9F10213594BA4538F263EE5EA9B27A13BAAD (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __this, RuntimeObject * ___value0, uint32_t* ___index1, const RuntimeMethod* method);
// System.Byte System.Int32::System.IConvertible.ToByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Int32_System_IConvertible_ToByte_mF20DC676FA2B16FA587B48C46126FF3A510FC2FE (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int16 System.Int32::System.IConvertible.ToInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Int32_System_IConvertible_ToInt16_m546AEA11867A3FB43C753862D37C5E5D903A998A (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt16 System.Int32::System.IConvertible.ToUInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Int32_System_IConvertible_ToUInt16_m4F02D84F201B3DD4F14E0DB290FFDF6484186C1D (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt32 System.Int32::System.IConvertible.ToUInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Int32_System_IConvertible_ToUInt32_m32F7902EB35E916E5066F4F8F2A62C9EE4625F61 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int64 System.Int32::System.IConvertible.ToInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Int32_System_IConvertible_ToInt64_m8D333A53E7A5D76D06626647D5C323E3D7DEAF7F (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt64 System.Int32::System.IConvertible.ToUInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Int32_System_IConvertible_ToUInt64_m624D1F3CF0A12FE5BA34183B454C4E87C4CA92F8 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Single System.Int32::System.IConvertible.ToSingle(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Int32_System_IConvertible_ToSingle_mA4658FD9FC83A12B7A9F9D5C3663354BA768D12B (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Double System.Int32::System.IConvertible.ToDouble(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Int32_System_IConvertible_ToDouble_mBE6FF400E38A132D26CA5C073F5DF78446C0FED1 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);

// COM Callable Wrapper for System.Dynamic.Utils.ListParameterProvider
struct ListParameterProvider_tD1DE24A9B96B6CFC88A74F00D9556CE873940D0F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ListParameterProvider_tD1DE24A9B96B6CFC88A74F00D9556CE873940D0F_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ListParameterProvider_tD1DE24A9B96B6CFC88A74F00D9556CE873940D0F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ListParameterProvider_tD1DE24A9B96B6CFC88A74F00D9556CE873940D0F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ListParameterProvider_tD1DE24A9B96B6CFC88A74F00D9556CE873940D0F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ListParameterProvider_tD1DE24A9B96B6CFC88A74F00D9556CE873940D0F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ListParameterProvider_tD1DE24A9B96B6CFC88A74F00D9556CE873940D0F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.ComponentModel.ListSortDescriptionCollection
struct ListSortDescriptionCollection_tC9C0CEDAF9496F7A1A7E6F665189295CE400F60A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ListSortDescriptionCollection_tC9C0CEDAF9496F7A1A7E6F665189295CE400F60A_ComCallableWrapper>, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ListSortDescriptionCollection_tC9C0CEDAF9496F7A1A7E6F665189295CE400F60A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ListSortDescriptionCollection_tC9C0CEDAF9496F7A1A7E6F665189295CE400F60A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ListSortDescriptionCollection_tC9C0CEDAF9496F7A1A7E6F665189295CE400F60A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ListSortDescriptionCollection_tC9C0CEDAF9496F7A1A7E6F665189295CE400F60A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ListSortDescriptionCollection_tC9C0CEDAF9496F7A1A7E6F665189295CE400F60A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter
struct ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper>, IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVectorView_GetAt_mB119DB25AF57A337D2C7112063778434CE0F5CF5(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject * returnValue;
		try
		{
			ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __thisValue = (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 *)GetManagedObjectInline();
			returnValue = ListToBindableVectorViewAdapter_GetAt_m4B138FEE3A71058B2D8B39DF8BCE91EF18E317C2(__thisValue, ___index0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		Il2CppIInspectable* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IBindableVectorView_get_Size_m4F48139B27CB215D7E728F77E748FA6573F7DA09(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __thisValue = (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 *)GetManagedObjectInline();
			returnValue = ListToBindableVectorViewAdapter_get_Size_m639607FFD5260E793DE3C653992EEE933C570826(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IBindableVectorView_IndexOf_mD85EC41D34BC2E450FA0133CC802906157D765F2(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		RuntimeObject * ____value0_unmarshaled = NULL;
		if (___value0 != NULL)
		{
			____value0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____value0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____value0_unmarshaled), Il2CppIInspectable::IID, ___value0);
			}
		}
		else
		{
			____value0_unmarshaled = NULL;
		}

		// Marshaling of parameter '___index1' to managed representation
		uint32_t ____index1_empty = 0;

		// Managed method invocation
		bool returnValue;
		try
		{
			ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __thisValue = (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 *)GetManagedObjectInline();
			returnValue = ListToBindableVectorViewAdapter_IndexOf_m1C9D9F10213594BA4538F263EE5EA9B27A13BAAD(__thisValue, ____value0_unmarshaled, (&____index1_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___index1' back from managed representation
		*___index1 = ____index1_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Photon.Realtime.LobbyCallbacksContainer
struct LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService
struct LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.MACTripleDES
struct MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.Remoting.Messaging.MCMDictionary
struct MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Security.Cryptography.MD2Managed
struct MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Security.Cryptography.MD2Managed
struct MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Security.Cryptography.MD4Managed
struct MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Security.Cryptography.MD4Managed
struct MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.MD5CryptoServiceProvider
struct MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.WebSockets.ManagedWebSocket
struct ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.ManualResetEventSlim
struct ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for MapRaycastProvider
struct MapRaycastProvider_t283A5DF0C8A1F895656CD28F0945D899E52F5A86_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MapRaycastProvider_t283A5DF0C8A1F895656CD28F0945D899E52F5A86_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MapRaycastProvider_t283A5DF0C8A1F895656CD28F0945D899E52F5A86_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MapRaycastProvider_t283A5DF0C8A1F895656CD28F0945D899E52F5A86_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MapRaycastProvider_t283A5DF0C8A1F895656CD28F0945D899E52F5A86(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MapRaycastProvider_t283A5DF0C8A1F895656CD28F0945D899E52F5A86_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MapRaycastProvider_t283A5DF0C8A1F895656CD28F0945D899E52F5A86_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.Maps.Unity.MapRenderer
struct MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.ComponentModel.MarshalByValueComponent
struct MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Metadata.MarshalingType
struct MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper>, IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB021045389972057F5036B2BEAF48C63CC75C2E0(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = true;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint8_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Byte");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
			}

			try
			{
				uint8_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToByte_mF20DC676FA2B16FA587B48C46126FF3A510FC2FE((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Byte");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int16_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			try
			{
				int16_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToInt16_m546AEA11867A3FB43C753862D37C5E5D903A998A((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Int16");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint16_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt16");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
			}

			try
			{
				uint16_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt16_m4F02D84F201B3DD4F14E0DB290FFDF6484186C1D((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt16");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt32");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
			}

			try
			{
				uint32_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt32_m32F7902EB35E916E5066F4F8F2A62C9EE4625F61((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt32");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int64_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			try
			{
				int64_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToInt64_m8D333A53E7A5D76D06626647D5C323E3D7DEAF7F((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Int64");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt64");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
			}

			try
			{
				uint64_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt64_m624D1F3CF0A12FE5BA34183B454C4E87C4CA92F8((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt64");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		float returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			try
			{
				float il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToSingle_mA4658FD9FC83A12B7A9F9D5C3663354BA768D12B((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Single");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		double returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			try
			{
				double il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToDouble_mBE6FF400E38A132D26CA5C073F5DF78446C0FED1((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Double");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Text.RegularExpressions.MatchCollection
struct MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Photon.Realtime.MatchMakingCallbacksContainer
struct MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Numerics.Matrix4x4
struct Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper>, IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mA1E3E5D81B89D3EA702FD87A063F5C5CBDD3949B(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  returnValue;
		try
		{
			returnValue = *static_cast<Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 *>(UnBox(GetManagedObjectInline(), Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Numerics.Matrix4x4
struct Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper>, IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB1385E16B3DF2EBB57B6A2953C5ACFFB0F57E766(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82  returnValue;
		try
		{
			returnValue = *static_cast<Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 *>(UnBox(GetManagedObjectInline(), Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.Remoting.Messaging.MessageDictionary
struct MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper(obj));
}
