#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Mirror.EmptyMessage
struct EmptyMessage_t50A033E9118B8078123AC2274445B7ED013612A0;
// Mirror.ExponentialMovingAverage
struct ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943;
// Mirror.LocalClient
struct LocalClient_tE212625B6AD521629F4E826D3AD1220DBA5A19DC;
// Mirror.MessageBase
struct MessageBase_t18C829EC4363E125BF1E98E367DFBE721034BDC6;
// Mirror.NetworkBehaviour[]
struct NetworkBehaviourU5BU5D_t0D4AB6368E07D49B1283AF28C12050F32CF3C33E;
// Mirror.NetworkClient
struct NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980;
// Mirror.NetworkConnection
struct NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553;
// Mirror.NetworkIdentity
struct NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870;
// Mirror.NetworkIdentity/ClientAuthorityCallback
struct ClientAuthorityCallback_tAEAA8B0506C32E8378FB6AA7C1EC405DEFEEC02D;
// Mirror.NetworkPingMessage
struct NetworkPingMessage_t0CD9DEB4D3F4E46C724EC1537BBE43EDE4DA18F9;
// Mirror.NetworkPongMessage
struct NetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB;
// Mirror.NetworkReader
struct NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25;
// Mirror.NetworkSettingsAttribute
struct NetworkSettingsAttribute_t70DA30B0FB5638EA017F9C536EE5E6321E104E8E;
// Mirror.NetworkStartPosition
struct NetworkStartPosition_t1099D5268874C50B9E17E6714388AFA8E227A464;
// Mirror.NetworkWriter
struct NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D;
// Mirror.NotReadyMessage
struct NotReadyMessage_t8CDB885248D3D910295CC051F67D03D977ED212B;
// Mirror.ObjectDestroyMessage
struct ObjectDestroyMessage_tCAEDA7F85120CC950BE64733931F0B95552A9053;
// Mirror.ObjectHideMessage
struct ObjectHideMessage_tF0EF2C045B3BFF5A6C7533FE65251757D209B26F;
// Mirror.ObjectSpawnFinishedMessage
struct ObjectSpawnFinishedMessage_t057B2DB67056306906BE06484E88D209BCA34553;
// Mirror.ObjectSpawnStartedMessage
struct ObjectSpawnStartedMessage_tF1FF4F4EF9BBB083C4A6FC2998AAD0165A822D83;
// Mirror.OwnerMessage
struct OwnerMessage_t5B9F3813FF57F5C44F7453E0B12423409D1AD3D9;
// Mirror.ReadyMessage
struct ReadyMessage_t7781C3EA6ED346684B704E4D5D169572B4A98632;
// Mirror.RemoteCallMessage
struct RemoteCallMessage_t8F16BC5D89C9CE3BC22D315100ABBAAE02A9D31C;
// Mirror.RemovePlayerMessage
struct RemovePlayerMessage_t97BE9115FC1584404F127225B2CDE04E3EBEF359;
// Mirror.RpcMessage
struct RpcMessage_t654DE7A93F2C632C3014F7EC3455AB319F3AA4E8;
// Mirror.SceneAttribute
struct SceneAttribute_t2484BD4457BA974898E687A2554EE60E1351B423;
// Mirror.SceneMessage
struct SceneMessage_t41D769BE66DAABD69C0E576AA8B945AC5F2BDF47;
// Mirror.ServerAttribute
struct ServerAttribute_t2FDCCEE489BE4E816E963AB2C0F5CBF333D23FF9;
// Mirror.ServerCallbackAttribute
struct ServerCallbackAttribute_t9FB75A0CE615ADC5DA4CC32EFC8FBD13012A0532;
// Mirror.SpawnDelegate
struct SpawnDelegate_tD5F09787306269E04335315D8968A7994563A2D9;
// Mirror.SpawnPrefabMessage
struct SpawnPrefabMessage_tAABE6655EBD053D60779ECE2AEB1009063B9AB08;
// Mirror.SpawnSceneObjectMessage
struct SpawnSceneObjectMessage_t756AE7AB9D828C08339571AC4B899AA95C5FDE99;
// Mirror.StringMessage
struct StringMessage_t946707773BD82A3C9839A41982482EE7278FC05C;
// Mirror.SyncEventAttribute
struct SyncEventAttribute_tA98B3F53D2AE69B5A453769D09C637BACB870F19;
// Mirror.SyncEventMessage
struct SyncEventMessage_tA7316BF890CA1EEDAC3EDF870DDF809A91B53E77;
// Mirror.SyncListBool
struct SyncListBool_t54569B1E7DFF857F92C9E39BF59124D83187493E;
// Mirror.SyncListFloat
struct SyncListFloat_t09BF4B3E58761DE4E452A57417B119AEFE1A3B88;
// Mirror.SyncListInt
struct SyncListInt_t5C20EECACEE550DAED46A2DE6E39E0B99E3BB404;
// Mirror.SyncListString
struct SyncListString_t69366AD8A01F0912BC568BE682FB9549A99D0382;
// Mirror.SyncListUInt
struct SyncListUInt_tEF4E598A708B22DAB55C04F092CD12DD0C383D9D;
// Mirror.SyncList`1/SyncListChanged<System.Boolean>
struct SyncListChanged_tD39F7F7548EA4A14218B0248C5AE604E0093EFD9;
// Mirror.SyncList`1/SyncListChanged<System.Int32>
struct SyncListChanged_t53655A70968240D038D22EFB6DBADF34C77F5287;
// Mirror.SyncList`1/SyncListChanged<System.Single>
struct SyncListChanged_tBAC228788C563D3AA08A30A8948B58358102D68A;
// Mirror.SyncList`1/SyncListChanged<System.String>
struct SyncListChanged_t12AC46CB54B8B38046ED8EDB74EF9882A35F3444;
// Mirror.SyncList`1/SyncListChanged<System.UInt32>
struct SyncListChanged_tDFC2E4C1254C9A7BE8DB4BD7B0B9C2930735F528;
// Mirror.SyncList`1<System.Boolean>
struct SyncList_1_t033CEC0EDA490F9D66877E1293C8F60E74DCF81D;
// Mirror.SyncList`1<System.Int32>
struct SyncList_1_tC1F959EAA42CFA5B7CD120EC08C2E89988981E32;
// Mirror.SyncList`1<System.Object>
struct SyncList_1_t8EED65FE42C2CE7ACE60A04F6517E2D2C8D98B28;
// Mirror.SyncList`1<System.Single>
struct SyncList_1_tF2335EDF773695C413A424569EB73B0F8B402649;
// Mirror.SyncList`1<System.String>
struct SyncList_1_t705325F67F4AEE9A566FF3083F0ABAD0EB90F1BD;
// Mirror.SyncList`1<System.UInt32>
struct SyncList_1_t958D769BAD089D33B0B7FD35E50BE7B2870AF9BE;
// Mirror.SyncVarAttribute
struct SyncVarAttribute_tA9753A7344FD1634277628C93CB8A85D0BB21436;
// Mirror.TargetRpcAttribute
struct TargetRpcAttribute_tBD6E81F8BAED840414BA159DDC00A9A8ED8CAAA7;
// Mirror.TelepathyTransport
struct TelepathyTransport_tDEC703A55ECE19175BBCDBBBFBAAF35B243F4918;
// Mirror.Transport
struct Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195;
// Mirror.ULocalConnectionToClient
struct ULocalConnectionToClient_tD46D83EA5610993710B35F9585058E7269225304;
// Mirror.ULocalConnectionToServer
struct ULocalConnectionToServer_tF9453DCD038DA1326F5A2EFD601668BF5C488890;
// Mirror.UnSpawnDelegate
struct UnSpawnDelegate_tC3DA8AD221C58FA5C6AA3BECA2B91E4DE1BE901A;
// Mirror.UnityEventByteArray
struct UnityEventByteArray_t8F9C385E1AFA9E13C18F58FAA2CC7D062BD6E07E;
// Mirror.UnityEventException
struct UnityEventException_tC51123DDAD93C3B3E6F3C32395828A4FEA1CAC74;
// Mirror.UnityEventInt
struct UnityEventInt_t25605BA0F5D789946A94CBAF118716E9FF3EE69A;
// Mirror.UnityEventIntByteArray
struct UnityEventIntByteArray_t5B46D154F0F9D94AB13839D6B8CA25DD9E9013CF;
// Mirror.UnityEventIntException
struct UnityEventIntException_t4C17526221B8BEEAA11C8D30DB004ACE4F1BEFF4;
// Mirror.UpdateVarsMessage
struct UpdateVarsMessage_tEE310E3D93629AB8305DDD549F8D98F0E5D8DFF1;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<System.String>
struct Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Attribute
struct Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.Server/ClientToken>
struct ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B;
// System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>
struct ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88;
// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnection>
struct Dictionary_2_t3D5D57E98A772A4E3FDBEACEAA26B4E831EC7AD4;
// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkMessageDelegate>
struct Dictionary_2_tFAAA35944634FA9EB663ACBC8F43D99C9C0C9A80;
// System.Collections.Generic.Dictionary`2<System.UInt32,Mirror.NetworkIdentity>
struct Dictionary_2_t9788E6486FCC0EBB64606CECE92328ED9703E80E;
// System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity>
struct HashSet_1_t9D352D63FA0ED68669F8B323AD2AC0D9D22C630D;
// System.Collections.Generic.HashSet`1<System.UInt32>
struct HashSet_1_t777E007D347CC4F32BA314663B686E660A7745D1;
// System.Collections.Generic.List`1<Mirror.SyncList`1/Change<System.Boolean>>
struct List_1_tBF102E7B691E8D89BA0467B1BAF54414165D16CC;
// System.Collections.Generic.List`1<Mirror.SyncList`1/Change<System.Int32>>
struct List_1_t83440F49E7F45852591A9ED3AE1FC86B6489CE2D;
// System.Collections.Generic.List`1<Mirror.SyncList`1/Change<System.Single>>
struct List_1_tE00DBD5F093CBEF639591E7CF13DA6B8F1DB3CA7;
// System.Collections.Generic.List`1<Mirror.SyncList`1/Change<System.String>>
struct List_1_t3091C6AEE3789F04275E47C412CC00B111955E2A;
// System.Collections.Generic.List`1<Mirror.SyncList`1/Change<System.UInt32>>
struct List_1_t39D91F669017991B57E1B2BB2F3156019E701C30;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t026D7A8C4D989218772DB3E051A624F753A60859;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE;
// System.Collections.Generic.Queue`1<System.Byte[]>
struct Queue_1_t8562F1B190CBBD67B4F5E105ECADB5DE3B24DD7F;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.Stopwatch
struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IO.BinaryReader
struct BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969;
// System.IO.BinaryWriter
struct BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3;
// System.IO.MemoryStream
struct MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.IOAsyncCallback
struct IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547;
// System.Net.EndPoint
struct EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980;
// System.Net.IPEndPoint
struct IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A;
// System.Net.Sockets.Socket
struct Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8;
// System.Net.Sockets.TcpClient
struct TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB;
// System.Net.Sockets.TcpListener
struct TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.Text.Encoder
struct Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.ManualResetEvent
struct ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87;
// System.Threading.Thread
struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Telepathy.Client
struct Client_t00748E10E80324FD9D1C491A162829231DB6A3FA;
// Telepathy.Common
struct Common_tFCC994B3A027AC464326397B2D22751359949226;
// Telepathy.Message
struct Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603;
// Telepathy.SafeQueue`1<System.Byte[]>
struct SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10;
// Telepathy.Server
struct Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.Events.UnityEvent`1<System.Byte[]>
struct UnityEvent_1_t33C4AE804E4DFCF919C354213C40AC81F6BAB1AD;
// UnityEngine.Events.UnityEvent`1<System.Exception>
struct UnityEvent_1_t19D53D50B89FEA9EC653D142280287DC5047277A;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D;
// UnityEngine.Events.UnityEvent`2<System.Int32,System.Byte[]>
struct UnityEvent_2_t59961C962823467177342BFD246272B5CCD1FB9F;
// UnityEngine.Events.UnityEvent`2<System.Int32,System.Exception>
struct UnityEvent_2_t9B9B1083EAE21A118772ECD9896B4EEA7D204675;
// UnityEngine.Events.UnityEvent`2<System.Int32,System.Object>
struct UnityEvent_2_t4FDDA2CA7DF86DE12BCFF756C8BF909C18B813F7;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.ILogger
struct ILogger_t572B66532D8EB6E76240476A788384A26D70866F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Client_t00748E10E80324FD9D1C491A162829231DB6A3FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogFilter_tDDEE59742B3785AE4012E6097B8194A665059013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkPingMessage_t0CD9DEB4D3F4E46C724EC1537BBE43EDE4DA18F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0C84AC39FC120C1E579C09FEAA062CA04994E08F;
IL2CPP_EXTERN_C String_t* _stringLiteral1CDFEAB29C4AD9DAC96B9B86A0440B7DCCACBA06;
IL2CPP_EXTERN_C String_t* _stringLiteral3CF39F219504612F15FBAED90694EBBB76684AD6;
IL2CPP_EXTERN_C String_t* _stringLiteral47316692AA00E6249A8B62B17F0571A6C6B0E787;
IL2CPP_EXTERN_C String_t* _stringLiteral6D43417A541E53961F3CDDB47B5C0ABAF518DBD2;
IL2CPP_EXTERN_C String_t* _stringLiteral737B4762E8BFE4D539AD3DC9D5353A05908A7018;
IL2CPP_EXTERN_C String_t* _stringLiteral8A90E4187AA462FD7BCD9E2521B1C4F09372DBAF;
IL2CPP_EXTERN_C String_t* _stringLiteral96A2D7AC2AA2C373862D1665EAAB572FBF11FEF4;
IL2CPP_EXTERN_C String_t* _stringLiteral9EB54FF1C0C96C2FE9047FAB9EAFA80A5E126E1C;
IL2CPP_EXTERN_C String_t* _stringLiteralA45E7DA12B87A6DBEDA68DC73471E87E66E9C2E1;
IL2CPP_EXTERN_C String_t* _stringLiteralBF86AE9241F89FAE8E186A310192333CF4111E0F;
IL2CPP_EXTERN_C String_t* _stringLiteralE6FA13BCDE0CC98F8DC35C1856122BE15C1F8595;
IL2CPP_EXTERN_C String_t* _stringLiteralFC82D79CC725F459BB30E979E27631B67E33B7F6;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870_m68FD22ADF9BFAFC0FD976A554EF474B8919C8288_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisNetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870_m73308E6CE1D9B3879BA659C6AF56071F48515F68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkClient_Send_TisNetworkPingMessage_t0CD9DEB4D3F4E46C724EC1537BBE43EDE4DA18F9_m3C30C129377F5631FAB3010554F37DC11E344699_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkConnection_Send_TisNetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB_mA2510EF59C4AA4DE981FA9482C841AA7DC749D86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mEF86147DA97BC52597094D71FCC03A167B7B397D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1__ctor_m23D944C8E6AD1D72C974724BE217994CA0A65654_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1__ctor_m4EB638BEE0D7B9DDE3B838A50E024B2C3B81F4F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1__ctor_m586A3A332EE27FFE087998AC680D1A86E847D380_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1__ctor_m619B6F305570F672DBEB3B88E5E740B01D2BECBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1__ctor_mA186BD2476430CD549976685807C50C97464D3D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mAC9BEEF287D58E79A447A57E28D3679F9B199D70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mE94F75B7336AB64579FB710C7B62220B8EB1EF3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m1EF01690E1F8F81E7C190F8D9610573D5E59490C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m5ED407B8A717F69AF2F7C7B986784DB3840EA637_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m92F7EFB8C3F2F732F07E445BAF5647170FB88AE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m6AABD556AD11F3503B7EF7D96CC390D16E80602A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_m58212C267C1FC0ABDB1C3E6563369065892758D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_m792A3968A997E15088CFED6C9C07F2343D4BB362_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t NetworkServer_get_localConnection_mEB7460522A686E4B4CE08AA092CAA1A963F9A42DMirror3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkStartPosition_Awake_m137AAB9D071F182D6E236D9FE1F455CD8BE25171_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkStartPosition_OnDestroy_m0B556CDDC1EC6898D42710671B5EB8780A5F2D28_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTime_GetPing_m137613F558B9667BDCA89F84EC4D46EE12EA0B2F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTime_LocalTime_m46D72F34B4AA99EDBAA5E4E700D89222956A0E8D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTime_OnClientPong_mA993A35731EB0BAB69000E702B0E6DDC693723D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTime_OnServerPing_m49D0C1C1424739F5CCB53B32790070206BE604AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTime_Reset_m441A6AD7B673E76F8F22B104387E262B703FC76E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTime_UpdateClient_mCB8823E5EA4E8B7BF185046CF9BCBAA91B427475_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTime__cctor_m07D953E704842F502A7AB2E5508504B87900580C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTime_get_offset_m8D0C18F218003E6CF12F1C560BFE2D31958670CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTime_get_rttSd_m4CD038BB1E21E8C39F414BA3D01B017968DBC818_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTime_get_rttVar_mC0E69BE6C3FB031360A6FABCC684E9B9839AFA60_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTime_get_rtt_m7916F6430A962DBC6903B014F58DEF4F4A6BD94D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTime_get_timeSd_m4889493FEFC9504D0A75F9CEB37C278648EC72EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTime_get_timeVar_m5A5DE65A16086AFA62272CBFB26EAC043D59597B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTime_get_time_m2B13720A2E1A06BBF8D1F1F2DC84545C23FDE698_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkWriter_SetLength_m4324EA8B370A61F54F51D7CEE7E323DD7F98A46D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkWriter_ToArray_m71F31476076F8B82ED22E10E6A9091212702D06F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkWriter_WriteBytesAndSize_m2D3F0D3F5370947CD9FB401ECF09A2ECC66A06D6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkWriter_Write_m08082864DE52D9F401B9420E1ABA683A969A1E17_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkWriter_Write_m7F36C9904F2D714441C2671D6B88DEABDD8295FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkWriter_Write_m93D2783E0D615825096EE2782CF7E69721C52BD7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkWriter__ctor_m5F3AFE4F6091311F99C14E553C03DCB5F9E412BD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpawnDelegate_BeginInvoke_mF69B619CD0C76C08F73A2192FBB9ED2CF880E06D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncListBool__ctor_mD7682B095CF65B60BEE4A1E7108B5129EA3524E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncListFloat__ctor_m32E01DFBF689B8972A3E2D5FFCCF6A9BA640F896_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncListInt__ctor_mC66FD76F1BF4E80751A9F67AF7C699FB1AD9E32B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncListString__ctor_m6C999729B8811D8D58413C3887B747A47C7427CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncListUInt__ctor_mC63CA21551A6276CFC96200320D776FB934B4F2B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TelepathyTransport_Awake_m12EE825A644042E6CC700A936318F7DD93BF19F9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TelepathyTransport_ProcessClientMessage_mE8C5AB3AC778AE489D3C768BF928DC64ACE24DC8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TelepathyTransport_ProcessServerMessage_m259C848A6086174424B1A6E5D316182EFBA17E59_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TelepathyTransport_Shutdown_m56D0FF3942B9BDBE1CD083C5378650B5FFEEBBF9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TelepathyTransport_ToString_m8EE2E92DFCC7BBA99670FC5A656F47E2836FE631_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TelepathyTransport__ctor_m70EEDBB02E6E30521C64ECA4547A29ECE021F560_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ULocalConnectionToClient_SendBytes_mCEFCAD4A728E824B1E58EA253E7EE3BD9E0B3533_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ULocalConnectionToClient__ctor_mA3575A759C821A3886CDF1911110CF9C564AF3CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ULocalConnectionToServer_SendBytes_mBECAED11180EF824D4C838538C66E7CCEB7C3AF4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ULocalConnectionToServer__ctor_m8C1772A9FB32FC3883B5248F12D0911E0859CA15_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEventByteArray__ctor_mB6116F7B49AF9F6792A30DD4ECF17AD45E8CC995_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEventException__ctor_m164CDC4DD4E65EFBB230D54D36684183477F6949_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEventIntByteArray__ctor_m821FADE9DB4A4780E020DAFBD4FC0F15AB1E6AE9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEventIntException__ctor_m861C1070F6F6C5CF3AE516BF3EE3197E788397D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEventInt__ctor_mD19E65D8F5DBDD3688C607A1707E6E79964955C6_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Mirror.ExponentialMovingAverage
struct  ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943  : public RuntimeObject
{
public:
	// System.Single Mirror.ExponentialMovingAverage::alpha
	float ___alpha_0;
	// System.Boolean Mirror.ExponentialMovingAverage::initialized
	bool ___initialized_1;
	// System.Double Mirror.ExponentialMovingAverage::<Value>k__BackingField
	double ___U3CValueU3Ek__BackingField_2;
	// System.Double Mirror.ExponentialMovingAverage::<Var>k__BackingField
	double ___U3CVarU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_alpha_0() { return static_cast<int32_t>(offsetof(ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943, ___alpha_0)); }
	inline float get_alpha_0() const { return ___alpha_0; }
	inline float* get_address_of_alpha_0() { return &___alpha_0; }
	inline void set_alpha_0(float value)
	{
		___alpha_0 = value;
	}

	inline static int32_t get_offset_of_initialized_1() { return static_cast<int32_t>(offsetof(ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943, ___initialized_1)); }
	inline bool get_initialized_1() const { return ___initialized_1; }
	inline bool* get_address_of_initialized_1() { return &___initialized_1; }
	inline void set_initialized_1(bool value)
	{
		___initialized_1 = value;
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943, ___U3CValueU3Ek__BackingField_2)); }
	inline double get_U3CValueU3Ek__BackingField_2() const { return ___U3CValueU3Ek__BackingField_2; }
	inline double* get_address_of_U3CValueU3Ek__BackingField_2() { return &___U3CValueU3Ek__BackingField_2; }
	inline void set_U3CValueU3Ek__BackingField_2(double value)
	{
		___U3CValueU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CVarU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943, ___U3CVarU3Ek__BackingField_3)); }
	inline double get_U3CVarU3Ek__BackingField_3() const { return ___U3CVarU3Ek__BackingField_3; }
	inline double* get_address_of_U3CVarU3Ek__BackingField_3() { return &___U3CVarU3Ek__BackingField_3; }
	inline void set_U3CVarU3Ek__BackingField_3(double value)
	{
		___U3CVarU3Ek__BackingField_3 = value;
	}
};


// Mirror.LogFilter
struct  LogFilter_tDDEE59742B3785AE4012E6097B8194A665059013  : public RuntimeObject
{
public:

public:
};

struct LogFilter_tDDEE59742B3785AE4012E6097B8194A665059013_StaticFields
{
public:
	// System.Boolean Mirror.LogFilter::Debug
	bool ___Debug_0;

public:
	inline static int32_t get_offset_of_Debug_0() { return static_cast<int32_t>(offsetof(LogFilter_tDDEE59742B3785AE4012E6097B8194A665059013_StaticFields, ___Debug_0)); }
	inline bool get_Debug_0() const { return ___Debug_0; }
	inline bool* get_address_of_Debug_0() { return &___Debug_0; }
	inline void set_Debug_0(bool value)
	{
		___Debug_0 = value;
	}
};


// Mirror.MessageBase
struct  MessageBase_t18C829EC4363E125BF1E98E367DFBE721034BDC6  : public RuntimeObject
{
public:

public:
};


// Mirror.NetworkConnection
struct  NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity> Mirror.NetworkConnection::visList
	HashSet_1_t9D352D63FA0ED68669F8B323AD2AC0D9D22C630D * ___visList_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkMessageDelegate> Mirror.NetworkConnection::m_MessageHandlers
	Dictionary_2_tFAAA35944634FA9EB663ACBC8F43D99C9C0C9A80 * ___m_MessageHandlers_1;
	// System.Int32 Mirror.NetworkConnection::connectionId
	int32_t ___connectionId_2;
	// System.Boolean Mirror.NetworkConnection::isReady
	bool ___isReady_3;
	// System.String Mirror.NetworkConnection::address
	String_t* ___address_4;
	// System.Single Mirror.NetworkConnection::lastMessageTime
	float ___lastMessageTime_5;
	// Mirror.NetworkIdentity Mirror.NetworkConnection::<playerController>k__BackingField
	NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * ___U3CplayerControllerU3Ek__BackingField_6;
	// System.Collections.Generic.HashSet`1<System.UInt32> Mirror.NetworkConnection::clientOwnedObjects
	HashSet_1_t777E007D347CC4F32BA314663B686E660A7745D1 * ___clientOwnedObjects_7;
	// System.Boolean Mirror.NetworkConnection::logNetworkMessages
	bool ___logNetworkMessages_8;
	// System.Boolean Mirror.NetworkConnection::<isConnected>k__BackingField
	bool ___U3CisConnectedU3Ek__BackingField_9;
	// System.Int32 Mirror.NetworkConnection::hostId
	int32_t ___hostId_10;

public:
	inline static int32_t get_offset_of_visList_0() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___visList_0)); }
	inline HashSet_1_t9D352D63FA0ED68669F8B323AD2AC0D9D22C630D * get_visList_0() const { return ___visList_0; }
	inline HashSet_1_t9D352D63FA0ED68669F8B323AD2AC0D9D22C630D ** get_address_of_visList_0() { return &___visList_0; }
	inline void set_visList_0(HashSet_1_t9D352D63FA0ED68669F8B323AD2AC0D9D22C630D * value)
	{
		___visList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visList_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_MessageHandlers_1() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___m_MessageHandlers_1)); }
	inline Dictionary_2_tFAAA35944634FA9EB663ACBC8F43D99C9C0C9A80 * get_m_MessageHandlers_1() const { return ___m_MessageHandlers_1; }
	inline Dictionary_2_tFAAA35944634FA9EB663ACBC8F43D99C9C0C9A80 ** get_address_of_m_MessageHandlers_1() { return &___m_MessageHandlers_1; }
	inline void set_m_MessageHandlers_1(Dictionary_2_tFAAA35944634FA9EB663ACBC8F43D99C9C0C9A80 * value)
	{
		___m_MessageHandlers_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MessageHandlers_1), (void*)value);
	}

	inline static int32_t get_offset_of_connectionId_2() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___connectionId_2)); }
	inline int32_t get_connectionId_2() const { return ___connectionId_2; }
	inline int32_t* get_address_of_connectionId_2() { return &___connectionId_2; }
	inline void set_connectionId_2(int32_t value)
	{
		___connectionId_2 = value;
	}

	inline static int32_t get_offset_of_isReady_3() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___isReady_3)); }
	inline bool get_isReady_3() const { return ___isReady_3; }
	inline bool* get_address_of_isReady_3() { return &___isReady_3; }
	inline void set_isReady_3(bool value)
	{
		___isReady_3 = value;
	}

	inline static int32_t get_offset_of_address_4() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___address_4)); }
	inline String_t* get_address_4() const { return ___address_4; }
	inline String_t** get_address_of_address_4() { return &___address_4; }
	inline void set_address_4(String_t* value)
	{
		___address_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___address_4), (void*)value);
	}

	inline static int32_t get_offset_of_lastMessageTime_5() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___lastMessageTime_5)); }
	inline float get_lastMessageTime_5() const { return ___lastMessageTime_5; }
	inline float* get_address_of_lastMessageTime_5() { return &___lastMessageTime_5; }
	inline void set_lastMessageTime_5(float value)
	{
		___lastMessageTime_5 = value;
	}

	inline static int32_t get_offset_of_U3CplayerControllerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___U3CplayerControllerU3Ek__BackingField_6)); }
	inline NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * get_U3CplayerControllerU3Ek__BackingField_6() const { return ___U3CplayerControllerU3Ek__BackingField_6; }
	inline NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 ** get_address_of_U3CplayerControllerU3Ek__BackingField_6() { return &___U3CplayerControllerU3Ek__BackingField_6; }
	inline void set_U3CplayerControllerU3Ek__BackingField_6(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * value)
	{
		___U3CplayerControllerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CplayerControllerU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_clientOwnedObjects_7() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___clientOwnedObjects_7)); }
	inline HashSet_1_t777E007D347CC4F32BA314663B686E660A7745D1 * get_clientOwnedObjects_7() const { return ___clientOwnedObjects_7; }
	inline HashSet_1_t777E007D347CC4F32BA314663B686E660A7745D1 ** get_address_of_clientOwnedObjects_7() { return &___clientOwnedObjects_7; }
	inline void set_clientOwnedObjects_7(HashSet_1_t777E007D347CC4F32BA314663B686E660A7745D1 * value)
	{
		___clientOwnedObjects_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientOwnedObjects_7), (void*)value);
	}

	inline static int32_t get_offset_of_logNetworkMessages_8() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___logNetworkMessages_8)); }
	inline bool get_logNetworkMessages_8() const { return ___logNetworkMessages_8; }
	inline bool* get_address_of_logNetworkMessages_8() { return &___logNetworkMessages_8; }
	inline void set_logNetworkMessages_8(bool value)
	{
		___logNetworkMessages_8 = value;
	}

	inline static int32_t get_offset_of_U3CisConnectedU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___U3CisConnectedU3Ek__BackingField_9)); }
	inline bool get_U3CisConnectedU3Ek__BackingField_9() const { return ___U3CisConnectedU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CisConnectedU3Ek__BackingField_9() { return &___U3CisConnectedU3Ek__BackingField_9; }
	inline void set_U3CisConnectedU3Ek__BackingField_9(bool value)
	{
		___U3CisConnectedU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_hostId_10() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___hostId_10)); }
	inline int32_t get_hostId_10() const { return ___hostId_10; }
	inline int32_t* get_address_of_hostId_10() { return &___hostId_10; }
	inline void set_hostId_10(int32_t value)
	{
		___hostId_10 = value;
	}
};


// Mirror.NetworkReader
struct  NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25  : public RuntimeObject
{
public:
	// System.IO.BinaryReader Mirror.NetworkReader::reader
	BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___reader_0;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25, ___reader_0)); }
	inline BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * get_reader_0() const { return ___reader_0; }
	inline BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reader_0), (void*)value);
	}
};


// Mirror.NetworkServer
struct  NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A  : public RuntimeObject
{
public:

public:
};

struct NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_StaticFields
{
public:
	// Mirror.ULocalConnectionToClient Mirror.NetworkServer::s_LocalConnection
	ULocalConnectionToClient_tD46D83EA5610993710B35F9585058E7269225304 * ___s_LocalConnection_0;
	// System.Boolean Mirror.NetworkServer::s_Initialized
	bool ___s_Initialized_1;
	// System.Int32 Mirror.NetworkServer::s_MaxConnections
	int32_t ___s_MaxConnections_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnection> Mirror.NetworkServer::connections
	Dictionary_2_t3D5D57E98A772A4E3FDBEACEAA26B4E831EC7AD4 * ___connections_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkMessageDelegate> Mirror.NetworkServer::handlers
	Dictionary_2_tFAAA35944634FA9EB663ACBC8F43D99C9C0C9A80 * ___handlers_4;
	// System.Boolean Mirror.NetworkServer::dontListen
	bool ___dontListen_5;
	// System.Boolean Mirror.NetworkServer::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_6;
	// System.Boolean Mirror.NetworkServer::<localClientActive>k__BackingField
	bool ___U3ClocalClientActiveU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_s_LocalConnection_0() { return static_cast<int32_t>(offsetof(NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_StaticFields, ___s_LocalConnection_0)); }
	inline ULocalConnectionToClient_tD46D83EA5610993710B35F9585058E7269225304 * get_s_LocalConnection_0() const { return ___s_LocalConnection_0; }
	inline ULocalConnectionToClient_tD46D83EA5610993710B35F9585058E7269225304 ** get_address_of_s_LocalConnection_0() { return &___s_LocalConnection_0; }
	inline void set_s_LocalConnection_0(ULocalConnectionToClient_tD46D83EA5610993710B35F9585058E7269225304 * value)
	{
		___s_LocalConnection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalConnection_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_1() { return static_cast<int32_t>(offsetof(NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_StaticFields, ___s_Initialized_1)); }
	inline bool get_s_Initialized_1() const { return ___s_Initialized_1; }
	inline bool* get_address_of_s_Initialized_1() { return &___s_Initialized_1; }
	inline void set_s_Initialized_1(bool value)
	{
		___s_Initialized_1 = value;
	}

	inline static int32_t get_offset_of_s_MaxConnections_2() { return static_cast<int32_t>(offsetof(NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_StaticFields, ___s_MaxConnections_2)); }
	inline int32_t get_s_MaxConnections_2() const { return ___s_MaxConnections_2; }
	inline int32_t* get_address_of_s_MaxConnections_2() { return &___s_MaxConnections_2; }
	inline void set_s_MaxConnections_2(int32_t value)
	{
		___s_MaxConnections_2 = value;
	}

	inline static int32_t get_offset_of_connections_3() { return static_cast<int32_t>(offsetof(NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_StaticFields, ___connections_3)); }
	inline Dictionary_2_t3D5D57E98A772A4E3FDBEACEAA26B4E831EC7AD4 * get_connections_3() const { return ___connections_3; }
	inline Dictionary_2_t3D5D57E98A772A4E3FDBEACEAA26B4E831EC7AD4 ** get_address_of_connections_3() { return &___connections_3; }
	inline void set_connections_3(Dictionary_2_t3D5D57E98A772A4E3FDBEACEAA26B4E831EC7AD4 * value)
	{
		___connections_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connections_3), (void*)value);
	}

	inline static int32_t get_offset_of_handlers_4() { return static_cast<int32_t>(offsetof(NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_StaticFields, ___handlers_4)); }
	inline Dictionary_2_tFAAA35944634FA9EB663ACBC8F43D99C9C0C9A80 * get_handlers_4() const { return ___handlers_4; }
	inline Dictionary_2_tFAAA35944634FA9EB663ACBC8F43D99C9C0C9A80 ** get_address_of_handlers_4() { return &___handlers_4; }
	inline void set_handlers_4(Dictionary_2_tFAAA35944634FA9EB663ACBC8F43D99C9C0C9A80 * value)
	{
		___handlers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handlers_4), (void*)value);
	}

	inline static int32_t get_offset_of_dontListen_5() { return static_cast<int32_t>(offsetof(NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_StaticFields, ___dontListen_5)); }
	inline bool get_dontListen_5() const { return ___dontListen_5; }
	inline bool* get_address_of_dontListen_5() { return &___dontListen_5; }
	inline void set_dontListen_5(bool value)
	{
		___dontListen_5 = value;
	}

	inline static int32_t get_offset_of_U3CactiveU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_StaticFields, ___U3CactiveU3Ek__BackingField_6)); }
	inline bool get_U3CactiveU3Ek__BackingField_6() const { return ___U3CactiveU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CactiveU3Ek__BackingField_6() { return &___U3CactiveU3Ek__BackingField_6; }
	inline void set_U3CactiveU3Ek__BackingField_6(bool value)
	{
		___U3CactiveU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3ClocalClientActiveU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_StaticFields, ___U3ClocalClientActiveU3Ek__BackingField_7)); }
	inline bool get_U3ClocalClientActiveU3Ek__BackingField_7() const { return ___U3ClocalClientActiveU3Ek__BackingField_7; }
	inline bool* get_address_of_U3ClocalClientActiveU3Ek__BackingField_7() { return &___U3ClocalClientActiveU3Ek__BackingField_7; }
	inline void set_U3ClocalClientActiveU3Ek__BackingField_7(bool value)
	{
		___U3ClocalClientActiveU3Ek__BackingField_7 = value;
	}
};


// Mirror.NetworkTime
struct  NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B  : public RuntimeObject
{
public:

public:
};

struct NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields
{
public:
	// System.Single Mirror.NetworkTime::PingFrequency
	float ___PingFrequency_0;
	// System.Int32 Mirror.NetworkTime::PingWindowSize
	int32_t ___PingWindowSize_1;
	// System.Double Mirror.NetworkTime::lastPingTime
	double ___lastPingTime_2;
	// System.Diagnostics.Stopwatch Mirror.NetworkTime::stopwatch
	Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * ___stopwatch_3;
	// Mirror.ExponentialMovingAverage Mirror.NetworkTime::_rtt
	ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 * ____rtt_4;
	// Mirror.ExponentialMovingAverage Mirror.NetworkTime::_offset
	ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 * ____offset_5;
	// System.Double Mirror.NetworkTime::offsetMin
	double ___offsetMin_6;
	// System.Double Mirror.NetworkTime::offsetMax
	double ___offsetMax_7;

public:
	inline static int32_t get_offset_of_PingFrequency_0() { return static_cast<int32_t>(offsetof(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields, ___PingFrequency_0)); }
	inline float get_PingFrequency_0() const { return ___PingFrequency_0; }
	inline float* get_address_of_PingFrequency_0() { return &___PingFrequency_0; }
	inline void set_PingFrequency_0(float value)
	{
		___PingFrequency_0 = value;
	}

	inline static int32_t get_offset_of_PingWindowSize_1() { return static_cast<int32_t>(offsetof(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields, ___PingWindowSize_1)); }
	inline int32_t get_PingWindowSize_1() const { return ___PingWindowSize_1; }
	inline int32_t* get_address_of_PingWindowSize_1() { return &___PingWindowSize_1; }
	inline void set_PingWindowSize_1(int32_t value)
	{
		___PingWindowSize_1 = value;
	}

	inline static int32_t get_offset_of_lastPingTime_2() { return static_cast<int32_t>(offsetof(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields, ___lastPingTime_2)); }
	inline double get_lastPingTime_2() const { return ___lastPingTime_2; }
	inline double* get_address_of_lastPingTime_2() { return &___lastPingTime_2; }
	inline void set_lastPingTime_2(double value)
	{
		___lastPingTime_2 = value;
	}

	inline static int32_t get_offset_of_stopwatch_3() { return static_cast<int32_t>(offsetof(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields, ___stopwatch_3)); }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * get_stopwatch_3() const { return ___stopwatch_3; }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 ** get_address_of_stopwatch_3() { return &___stopwatch_3; }
	inline void set_stopwatch_3(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * value)
	{
		___stopwatch_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stopwatch_3), (void*)value);
	}

	inline static int32_t get_offset_of__rtt_4() { return static_cast<int32_t>(offsetof(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields, ____rtt_4)); }
	inline ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 * get__rtt_4() const { return ____rtt_4; }
	inline ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 ** get_address_of__rtt_4() { return &____rtt_4; }
	inline void set__rtt_4(ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 * value)
	{
		____rtt_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rtt_4), (void*)value);
	}

	inline static int32_t get_offset_of__offset_5() { return static_cast<int32_t>(offsetof(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields, ____offset_5)); }
	inline ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 * get__offset_5() const { return ____offset_5; }
	inline ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 ** get_address_of__offset_5() { return &____offset_5; }
	inline void set__offset_5(ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 * value)
	{
		____offset_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____offset_5), (void*)value);
	}

	inline static int32_t get_offset_of_offsetMin_6() { return static_cast<int32_t>(offsetof(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields, ___offsetMin_6)); }
	inline double get_offsetMin_6() const { return ___offsetMin_6; }
	inline double* get_address_of_offsetMin_6() { return &___offsetMin_6; }
	inline void set_offsetMin_6(double value)
	{
		___offsetMin_6 = value;
	}

	inline static int32_t get_offset_of_offsetMax_7() { return static_cast<int32_t>(offsetof(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields, ___offsetMax_7)); }
	inline double get_offsetMax_7() const { return ___offsetMax_7; }
	inline double* get_address_of_offsetMax_7() { return &___offsetMax_7; }
	inline void set_offsetMax_7(double value)
	{
		___offsetMax_7 = value;
	}
};


// Mirror.NetworkWriter
struct  NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D  : public RuntimeObject
{
public:
	// System.IO.BinaryWriter Mirror.NetworkWriter::writer
	BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___writer_0;

public:
	inline static int32_t get_offset_of_writer_0() { return static_cast<int32_t>(offsetof(NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D, ___writer_0)); }
	inline BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * get_writer_0() const { return ___writer_0; }
	inline BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 ** get_address_of_writer_0() { return &___writer_0; }
	inline void set_writer_0(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * value)
	{
		___writer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writer_0), (void*)value);
	}
};


// Mirror.StringHash
struct  StringHash_t9679D4213C93F66FD8F9F58BD7A527D9717FA095  : public RuntimeObject
{
public:

public:
};


// Mirror.SyncList`1<System.Boolean>
struct  SyncList_1_t033CEC0EDA490F9D66877E1293C8F60E74DCF81D  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Mirror.SyncList`1::m_Objects
	List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * ___m_Objects_0;
	// System.Boolean Mirror.SyncList`1::<IsReadOnly>k__BackingField
	bool ___U3CIsReadOnlyU3Ek__BackingField_1;
	// Mirror.SyncList`1_SyncListChanged<T> Mirror.SyncList`1::Callback
	SyncListChanged_tD39F7F7548EA4A14218B0248C5AE604E0093EFD9 * ___Callback_2;
	// System.Collections.Generic.List`1<Mirror.SyncList`1_Change<T>> Mirror.SyncList`1::Changes
	List_1_tBF102E7B691E8D89BA0467B1BAF54414165D16CC * ___Changes_3;
	// System.Int32 Mirror.SyncList`1::changesAhead
	int32_t ___changesAhead_4;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_t033CEC0EDA490F9D66877E1293C8F60E74DCF81D, ___m_Objects_0)); }
	inline List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsReadOnlyU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SyncList_1_t033CEC0EDA490F9D66877E1293C8F60E74DCF81D, ___U3CIsReadOnlyU3Ek__BackingField_1)); }
	inline bool get_U3CIsReadOnlyU3Ek__BackingField_1() const { return ___U3CIsReadOnlyU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsReadOnlyU3Ek__BackingField_1() { return &___U3CIsReadOnlyU3Ek__BackingField_1; }
	inline void set_U3CIsReadOnlyU3Ek__BackingField_1(bool value)
	{
		___U3CIsReadOnlyU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_Callback_2() { return static_cast<int32_t>(offsetof(SyncList_1_t033CEC0EDA490F9D66877E1293C8F60E74DCF81D, ___Callback_2)); }
	inline SyncListChanged_tD39F7F7548EA4A14218B0248C5AE604E0093EFD9 * get_Callback_2() const { return ___Callback_2; }
	inline SyncListChanged_tD39F7F7548EA4A14218B0248C5AE604E0093EFD9 ** get_address_of_Callback_2() { return &___Callback_2; }
	inline void set_Callback_2(SyncListChanged_tD39F7F7548EA4A14218B0248C5AE604E0093EFD9 * value)
	{
		___Callback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callback_2), (void*)value);
	}

	inline static int32_t get_offset_of_Changes_3() { return static_cast<int32_t>(offsetof(SyncList_1_t033CEC0EDA490F9D66877E1293C8F60E74DCF81D, ___Changes_3)); }
	inline List_1_tBF102E7B691E8D89BA0467B1BAF54414165D16CC * get_Changes_3() const { return ___Changes_3; }
	inline List_1_tBF102E7B691E8D89BA0467B1BAF54414165D16CC ** get_address_of_Changes_3() { return &___Changes_3; }
	inline void set_Changes_3(List_1_tBF102E7B691E8D89BA0467B1BAF54414165D16CC * value)
	{
		___Changes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Changes_3), (void*)value);
	}

	inline static int32_t get_offset_of_changesAhead_4() { return static_cast<int32_t>(offsetof(SyncList_1_t033CEC0EDA490F9D66877E1293C8F60E74DCF81D, ___changesAhead_4)); }
	inline int32_t get_changesAhead_4() const { return ___changesAhead_4; }
	inline int32_t* get_address_of_changesAhead_4() { return &___changesAhead_4; }
	inline void set_changesAhead_4(int32_t value)
	{
		___changesAhead_4 = value;
	}
};


// Mirror.SyncList`1<System.Int32>
struct  SyncList_1_tC1F959EAA42CFA5B7CD120EC08C2E89988981E32  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Mirror.SyncList`1::m_Objects
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___m_Objects_0;
	// System.Boolean Mirror.SyncList`1::<IsReadOnly>k__BackingField
	bool ___U3CIsReadOnlyU3Ek__BackingField_1;
	// Mirror.SyncList`1_SyncListChanged<T> Mirror.SyncList`1::Callback
	SyncListChanged_t53655A70968240D038D22EFB6DBADF34C77F5287 * ___Callback_2;
	// System.Collections.Generic.List`1<Mirror.SyncList`1_Change<T>> Mirror.SyncList`1::Changes
	List_1_t83440F49E7F45852591A9ED3AE1FC86B6489CE2D * ___Changes_3;
	// System.Int32 Mirror.SyncList`1::changesAhead
	int32_t ___changesAhead_4;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_tC1F959EAA42CFA5B7CD120EC08C2E89988981E32, ___m_Objects_0)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsReadOnlyU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SyncList_1_tC1F959EAA42CFA5B7CD120EC08C2E89988981E32, ___U3CIsReadOnlyU3Ek__BackingField_1)); }
	inline bool get_U3CIsReadOnlyU3Ek__BackingField_1() const { return ___U3CIsReadOnlyU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsReadOnlyU3Ek__BackingField_1() { return &___U3CIsReadOnlyU3Ek__BackingField_1; }
	inline void set_U3CIsReadOnlyU3Ek__BackingField_1(bool value)
	{
		___U3CIsReadOnlyU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_Callback_2() { return static_cast<int32_t>(offsetof(SyncList_1_tC1F959EAA42CFA5B7CD120EC08C2E89988981E32, ___Callback_2)); }
	inline SyncListChanged_t53655A70968240D038D22EFB6DBADF34C77F5287 * get_Callback_2() const { return ___Callback_2; }
	inline SyncListChanged_t53655A70968240D038D22EFB6DBADF34C77F5287 ** get_address_of_Callback_2() { return &___Callback_2; }
	inline void set_Callback_2(SyncListChanged_t53655A70968240D038D22EFB6DBADF34C77F5287 * value)
	{
		___Callback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callback_2), (void*)value);
	}

	inline static int32_t get_offset_of_Changes_3() { return static_cast<int32_t>(offsetof(SyncList_1_tC1F959EAA42CFA5B7CD120EC08C2E89988981E32, ___Changes_3)); }
	inline List_1_t83440F49E7F45852591A9ED3AE1FC86B6489CE2D * get_Changes_3() const { return ___Changes_3; }
	inline List_1_t83440F49E7F45852591A9ED3AE1FC86B6489CE2D ** get_address_of_Changes_3() { return &___Changes_3; }
	inline void set_Changes_3(List_1_t83440F49E7F45852591A9ED3AE1FC86B6489CE2D * value)
	{
		___Changes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Changes_3), (void*)value);
	}

	inline static int32_t get_offset_of_changesAhead_4() { return static_cast<int32_t>(offsetof(SyncList_1_tC1F959EAA42CFA5B7CD120EC08C2E89988981E32, ___changesAhead_4)); }
	inline int32_t get_changesAhead_4() const { return ___changesAhead_4; }
	inline int32_t* get_address_of_changesAhead_4() { return &___changesAhead_4; }
	inline void set_changesAhead_4(int32_t value)
	{
		___changesAhead_4 = value;
	}
};


// Mirror.SyncList`1<System.Single>
struct  SyncList_1_tF2335EDF773695C413A424569EB73B0F8B402649  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Mirror.SyncList`1::m_Objects
	List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * ___m_Objects_0;
	// System.Boolean Mirror.SyncList`1::<IsReadOnly>k__BackingField
	bool ___U3CIsReadOnlyU3Ek__BackingField_1;
	// Mirror.SyncList`1_SyncListChanged<T> Mirror.SyncList`1::Callback
	SyncListChanged_tBAC228788C563D3AA08A30A8948B58358102D68A * ___Callback_2;
	// System.Collections.Generic.List`1<Mirror.SyncList`1_Change<T>> Mirror.SyncList`1::Changes
	List_1_tE00DBD5F093CBEF639591E7CF13DA6B8F1DB3CA7 * ___Changes_3;
	// System.Int32 Mirror.SyncList`1::changesAhead
	int32_t ___changesAhead_4;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_tF2335EDF773695C413A424569EB73B0F8B402649, ___m_Objects_0)); }
	inline List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_t026D7A8C4D989218772DB3E051A624F753A60859 ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsReadOnlyU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SyncList_1_tF2335EDF773695C413A424569EB73B0F8B402649, ___U3CIsReadOnlyU3Ek__BackingField_1)); }
	inline bool get_U3CIsReadOnlyU3Ek__BackingField_1() const { return ___U3CIsReadOnlyU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsReadOnlyU3Ek__BackingField_1() { return &___U3CIsReadOnlyU3Ek__BackingField_1; }
	inline void set_U3CIsReadOnlyU3Ek__BackingField_1(bool value)
	{
		___U3CIsReadOnlyU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_Callback_2() { return static_cast<int32_t>(offsetof(SyncList_1_tF2335EDF773695C413A424569EB73B0F8B402649, ___Callback_2)); }
	inline SyncListChanged_tBAC228788C563D3AA08A30A8948B58358102D68A * get_Callback_2() const { return ___Callback_2; }
	inline SyncListChanged_tBAC228788C563D3AA08A30A8948B58358102D68A ** get_address_of_Callback_2() { return &___Callback_2; }
	inline void set_Callback_2(SyncListChanged_tBAC228788C563D3AA08A30A8948B58358102D68A * value)
	{
		___Callback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callback_2), (void*)value);
	}

	inline static int32_t get_offset_of_Changes_3() { return static_cast<int32_t>(offsetof(SyncList_1_tF2335EDF773695C413A424569EB73B0F8B402649, ___Changes_3)); }
	inline List_1_tE00DBD5F093CBEF639591E7CF13DA6B8F1DB3CA7 * get_Changes_3() const { return ___Changes_3; }
	inline List_1_tE00DBD5F093CBEF639591E7CF13DA6B8F1DB3CA7 ** get_address_of_Changes_3() { return &___Changes_3; }
	inline void set_Changes_3(List_1_tE00DBD5F093CBEF639591E7CF13DA6B8F1DB3CA7 * value)
	{
		___Changes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Changes_3), (void*)value);
	}

	inline static int32_t get_offset_of_changesAhead_4() { return static_cast<int32_t>(offsetof(SyncList_1_tF2335EDF773695C413A424569EB73B0F8B402649, ___changesAhead_4)); }
	inline int32_t get_changesAhead_4() const { return ___changesAhead_4; }
	inline int32_t* get_address_of_changesAhead_4() { return &___changesAhead_4; }
	inline void set_changesAhead_4(int32_t value)
	{
		___changesAhead_4 = value;
	}
};


// Mirror.SyncList`1<System.String>
struct  SyncList_1_t705325F67F4AEE9A566FF3083F0ABAD0EB90F1BD  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Mirror.SyncList`1::m_Objects
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___m_Objects_0;
	// System.Boolean Mirror.SyncList`1::<IsReadOnly>k__BackingField
	bool ___U3CIsReadOnlyU3Ek__BackingField_1;
	// Mirror.SyncList`1_SyncListChanged<T> Mirror.SyncList`1::Callback
	SyncListChanged_t12AC46CB54B8B38046ED8EDB74EF9882A35F3444 * ___Callback_2;
	// System.Collections.Generic.List`1<Mirror.SyncList`1_Change<T>> Mirror.SyncList`1::Changes
	List_1_t3091C6AEE3789F04275E47C412CC00B111955E2A * ___Changes_3;
	// System.Int32 Mirror.SyncList`1::changesAhead
	int32_t ___changesAhead_4;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_t705325F67F4AEE9A566FF3083F0ABAD0EB90F1BD, ___m_Objects_0)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsReadOnlyU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SyncList_1_t705325F67F4AEE9A566FF3083F0ABAD0EB90F1BD, ___U3CIsReadOnlyU3Ek__BackingField_1)); }
	inline bool get_U3CIsReadOnlyU3Ek__BackingField_1() const { return ___U3CIsReadOnlyU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsReadOnlyU3Ek__BackingField_1() { return &___U3CIsReadOnlyU3Ek__BackingField_1; }
	inline void set_U3CIsReadOnlyU3Ek__BackingField_1(bool value)
	{
		___U3CIsReadOnlyU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_Callback_2() { return static_cast<int32_t>(offsetof(SyncList_1_t705325F67F4AEE9A566FF3083F0ABAD0EB90F1BD, ___Callback_2)); }
	inline SyncListChanged_t12AC46CB54B8B38046ED8EDB74EF9882A35F3444 * get_Callback_2() const { return ___Callback_2; }
	inline SyncListChanged_t12AC46CB54B8B38046ED8EDB74EF9882A35F3444 ** get_address_of_Callback_2() { return &___Callback_2; }
	inline void set_Callback_2(SyncListChanged_t12AC46CB54B8B38046ED8EDB74EF9882A35F3444 * value)
	{
		___Callback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callback_2), (void*)value);
	}

	inline static int32_t get_offset_of_Changes_3() { return static_cast<int32_t>(offsetof(SyncList_1_t705325F67F4AEE9A566FF3083F0ABAD0EB90F1BD, ___Changes_3)); }
	inline List_1_t3091C6AEE3789F04275E47C412CC00B111955E2A * get_Changes_3() const { return ___Changes_3; }
	inline List_1_t3091C6AEE3789F04275E47C412CC00B111955E2A ** get_address_of_Changes_3() { return &___Changes_3; }
	inline void set_Changes_3(List_1_t3091C6AEE3789F04275E47C412CC00B111955E2A * value)
	{
		___Changes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Changes_3), (void*)value);
	}

	inline static int32_t get_offset_of_changesAhead_4() { return static_cast<int32_t>(offsetof(SyncList_1_t705325F67F4AEE9A566FF3083F0ABAD0EB90F1BD, ___changesAhead_4)); }
	inline int32_t get_changesAhead_4() const { return ___changesAhead_4; }
	inline int32_t* get_address_of_changesAhead_4() { return &___changesAhead_4; }
	inline void set_changesAhead_4(int32_t value)
	{
		___changesAhead_4 = value;
	}
};


// Mirror.SyncList`1<System.UInt32>
struct  SyncList_1_t958D769BAD089D33B0B7FD35E50BE7B2870AF9BE  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Mirror.SyncList`1::m_Objects
	List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * ___m_Objects_0;
	// System.Boolean Mirror.SyncList`1::<IsReadOnly>k__BackingField
	bool ___U3CIsReadOnlyU3Ek__BackingField_1;
	// Mirror.SyncList`1_SyncListChanged<T> Mirror.SyncList`1::Callback
	SyncListChanged_tDFC2E4C1254C9A7BE8DB4BD7B0B9C2930735F528 * ___Callback_2;
	// System.Collections.Generic.List`1<Mirror.SyncList`1_Change<T>> Mirror.SyncList`1::Changes
	List_1_t39D91F669017991B57E1B2BB2F3156019E701C30 * ___Changes_3;
	// System.Int32 Mirror.SyncList`1::changesAhead
	int32_t ___changesAhead_4;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_t958D769BAD089D33B0B7FD35E50BE7B2870AF9BE, ___m_Objects_0)); }
	inline List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsReadOnlyU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SyncList_1_t958D769BAD089D33B0B7FD35E50BE7B2870AF9BE, ___U3CIsReadOnlyU3Ek__BackingField_1)); }
	inline bool get_U3CIsReadOnlyU3Ek__BackingField_1() const { return ___U3CIsReadOnlyU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsReadOnlyU3Ek__BackingField_1() { return &___U3CIsReadOnlyU3Ek__BackingField_1; }
	inline void set_U3CIsReadOnlyU3Ek__BackingField_1(bool value)
	{
		___U3CIsReadOnlyU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_Callback_2() { return static_cast<int32_t>(offsetof(SyncList_1_t958D769BAD089D33B0B7FD35E50BE7B2870AF9BE, ___Callback_2)); }
	inline SyncListChanged_tDFC2E4C1254C9A7BE8DB4BD7B0B9C2930735F528 * get_Callback_2() const { return ___Callback_2; }
	inline SyncListChanged_tDFC2E4C1254C9A7BE8DB4BD7B0B9C2930735F528 ** get_address_of_Callback_2() { return &___Callback_2; }
	inline void set_Callback_2(SyncListChanged_tDFC2E4C1254C9A7BE8DB4BD7B0B9C2930735F528 * value)
	{
		___Callback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callback_2), (void*)value);
	}

	inline static int32_t get_offset_of_Changes_3() { return static_cast<int32_t>(offsetof(SyncList_1_t958D769BAD089D33B0B7FD35E50BE7B2870AF9BE, ___Changes_3)); }
	inline List_1_t39D91F669017991B57E1B2BB2F3156019E701C30 * get_Changes_3() const { return ___Changes_3; }
	inline List_1_t39D91F669017991B57E1B2BB2F3156019E701C30 ** get_address_of_Changes_3() { return &___Changes_3; }
	inline void set_Changes_3(List_1_t39D91F669017991B57E1B2BB2F3156019E701C30 * value)
	{
		___Changes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Changes_3), (void*)value);
	}

	inline static int32_t get_offset_of_changesAhead_4() { return static_cast<int32_t>(offsetof(SyncList_1_t958D769BAD089D33B0B7FD35E50BE7B2870AF9BE, ___changesAhead_4)); }
	inline int32_t get_changesAhead_4() const { return ___changesAhead_4; }
	inline int32_t* get_address_of_changesAhead_4() { return &___changesAhead_4; }
	inline void set_changesAhead_4(int32_t value)
	{
		___changesAhead_4 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.Queue`1<System.Byte[]>
struct  Queue_1_t8562F1B190CBBD67B4F5E105ECADB5DE3B24DD7F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t8562F1B190CBBD67B4F5E105ECADB5DE3B24DD7F, ____array_0)); }
	inline ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* get__array_0() const { return ____array_0; }
	inline ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t8562F1B190CBBD67B4F5E105ECADB5DE3B24DD7F, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t8562F1B190CBBD67B4F5E105ECADB5DE3B24DD7F, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t8562F1B190CBBD67B4F5E105ECADB5DE3B24DD7F, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t8562F1B190CBBD67B4F5E105ECADB5DE3B24DD7F, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t8562F1B190CBBD67B4F5E105ECADB5DE3B24DD7F, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Diagnostics.Stopwatch
struct  Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
};


// System.IO.BinaryWriter
struct  BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Char[] System.IO.BinaryWriter::_tmpOneCharBuffer
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ____tmpOneCharBuffer_6;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____largeByteBuffer_7;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_8;

public:
	inline static int32_t get_offset_of_OutStream_1() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ___OutStream_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_OutStream_1() const { return ___OutStream_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_OutStream_1() { return &___OutStream_1; }
	inline void set_OutStream_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___OutStream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OutStream_1), (void*)value);
	}

	inline static int32_t get_offset_of__buffer_2() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____buffer_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__buffer_2() const { return ____buffer_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__buffer_2() { return &____buffer_2; }
	inline void set__buffer_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____buffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_2), (void*)value);
	}

	inline static int32_t get_offset_of__encoding_3() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get__encoding_3() const { return ____encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of__encoding_3() { return &____encoding_3; }
	inline void set__encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		____encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of__encoder_4() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____encoder_4)); }
	inline Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * get__encoder_4() const { return ____encoder_4; }
	inline Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 ** get_address_of__encoder_4() { return &____encoder_4; }
	inline void set__encoder_4(Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * value)
	{
		____encoder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoder_4), (void*)value);
	}

	inline static int32_t get_offset_of__leaveOpen_5() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____leaveOpen_5)); }
	inline bool get__leaveOpen_5() const { return ____leaveOpen_5; }
	inline bool* get_address_of__leaveOpen_5() { return &____leaveOpen_5; }
	inline void set__leaveOpen_5(bool value)
	{
		____leaveOpen_5 = value;
	}

	inline static int32_t get_offset_of__tmpOneCharBuffer_6() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____tmpOneCharBuffer_6)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get__tmpOneCharBuffer_6() const { return ____tmpOneCharBuffer_6; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of__tmpOneCharBuffer_6() { return &____tmpOneCharBuffer_6; }
	inline void set__tmpOneCharBuffer_6(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		____tmpOneCharBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tmpOneCharBuffer_6), (void*)value);
	}

	inline static int32_t get_offset_of__largeByteBuffer_7() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____largeByteBuffer_7)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__largeByteBuffer_7() const { return ____largeByteBuffer_7; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__largeByteBuffer_7() { return &____largeByteBuffer_7; }
	inline void set__largeByteBuffer_7(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____largeByteBuffer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____largeByteBuffer_7), (void*)value);
	}

	inline static int32_t get_offset_of__maxChars_8() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____maxChars_8)); }
	inline int32_t get__maxChars_8() const { return ____maxChars_8; }
	inline int32_t* get_address_of__maxChars_8() { return &____maxChars_8; }
	inline void set__maxChars_8(int32_t value)
	{
		____maxChars_8 = value;
	}
};

struct BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_StaticFields
{
public:
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_StaticFields, ___Null_0)); }
	inline BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * get_Null_0() const { return ___Null_0; }
	inline BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Net.EndPoint
struct  EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980  : public RuntimeObject
{
public:

public:
};


// System.Net.Sockets.TcpListener
struct  TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE  : public RuntimeObject
{
public:
	// System.Net.IPEndPoint System.Net.Sockets.TcpListener::m_ServerSocketEP
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___m_ServerSocketEP_0;
	// System.Net.Sockets.Socket System.Net.Sockets.TcpListener::m_ServerSocket
	Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___m_ServerSocket_1;
	// System.Boolean System.Net.Sockets.TcpListener::m_Active
	bool ___m_Active_2;
	// System.Boolean System.Net.Sockets.TcpListener::m_ExclusiveAddressUse
	bool ___m_ExclusiveAddressUse_3;

public:
	inline static int32_t get_offset_of_m_ServerSocketEP_0() { return static_cast<int32_t>(offsetof(TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE, ___m_ServerSocketEP_0)); }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * get_m_ServerSocketEP_0() const { return ___m_ServerSocketEP_0; }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** get_address_of_m_ServerSocketEP_0() { return &___m_ServerSocketEP_0; }
	inline void set_m_ServerSocketEP_0(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * value)
	{
		___m_ServerSocketEP_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ServerSocketEP_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ServerSocket_1() { return static_cast<int32_t>(offsetof(TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE, ___m_ServerSocket_1)); }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * get_m_ServerSocket_1() const { return ___m_ServerSocket_1; }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 ** get_address_of_m_ServerSocket_1() { return &___m_ServerSocket_1; }
	inline void set_m_ServerSocket_1(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * value)
	{
		___m_ServerSocket_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ServerSocket_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_2() { return static_cast<int32_t>(offsetof(TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE, ___m_Active_2)); }
	inline bool get_m_Active_2() const { return ___m_Active_2; }
	inline bool* get_address_of_m_Active_2() { return &___m_Active_2; }
	inline void set_m_Active_2(bool value)
	{
		___m_Active_2 = value;
	}

	inline static int32_t get_offset_of_m_ExclusiveAddressUse_3() { return static_cast<int32_t>(offsetof(TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE, ___m_ExclusiveAddressUse_3)); }
	inline bool get_m_ExclusiveAddressUse_3() const { return ___m_ExclusiveAddressUse_3; }
	inline bool* get_address_of_m_ExclusiveAddressUse_3() { return &___m_ExclusiveAddressUse_3; }
	inline void set_m_ExclusiveAddressUse_3(bool value)
	{
		___m_ExclusiveAddressUse_3 = value;
	}
};


// System.String
struct  String_t  : public RuntimeObject
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
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Telepathy.Common
struct  Common_tFCC994B3A027AC464326397B2D22751359949226  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message> Telepathy.Common::receiveQueue
	ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * ___receiveQueue_0;
	// System.Boolean Telepathy.Common::NoDelay
	bool ___NoDelay_2;
	// System.Int32 Telepathy.Common::SendTimeout
	int32_t ___SendTimeout_3;

public:
	inline static int32_t get_offset_of_receiveQueue_0() { return static_cast<int32_t>(offsetof(Common_tFCC994B3A027AC464326397B2D22751359949226, ___receiveQueue_0)); }
	inline ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * get_receiveQueue_0() const { return ___receiveQueue_0; }
	inline ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 ** get_address_of_receiveQueue_0() { return &___receiveQueue_0; }
	inline void set_receiveQueue_0(ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * value)
	{
		___receiveQueue_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receiveQueue_0), (void*)value);
	}

	inline static int32_t get_offset_of_NoDelay_2() { return static_cast<int32_t>(offsetof(Common_tFCC994B3A027AC464326397B2D22751359949226, ___NoDelay_2)); }
	inline bool get_NoDelay_2() const { return ___NoDelay_2; }
	inline bool* get_address_of_NoDelay_2() { return &___NoDelay_2; }
	inline void set_NoDelay_2(bool value)
	{
		___NoDelay_2 = value;
	}

	inline static int32_t get_offset_of_SendTimeout_3() { return static_cast<int32_t>(offsetof(Common_tFCC994B3A027AC464326397B2D22751359949226, ___SendTimeout_3)); }
	inline int32_t get_SendTimeout_3() const { return ___SendTimeout_3; }
	inline int32_t* get_address_of_SendTimeout_3() { return &___SendTimeout_3; }
	inline void set_SendTimeout_3(int32_t value)
	{
		___SendTimeout_3 = value;
	}
};

struct Common_tFCC994B3A027AC464326397B2D22751359949226_StaticFields
{
public:
	// System.Int32 Telepathy.Common::messageQueueSizeWarning
	int32_t ___messageQueueSizeWarning_1;

public:
	inline static int32_t get_offset_of_messageQueueSizeWarning_1() { return static_cast<int32_t>(offsetof(Common_tFCC994B3A027AC464326397B2D22751359949226_StaticFields, ___messageQueueSizeWarning_1)); }
	inline int32_t get_messageQueueSizeWarning_1() const { return ___messageQueueSizeWarning_1; }
	inline int32_t* get_address_of_messageQueueSizeWarning_1() { return &___messageQueueSizeWarning_1; }
	inline void set_messageQueueSizeWarning_1(int32_t value)
	{
		___messageQueueSizeWarning_1 = value;
	}
};


// Telepathy.Logger
struct  Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4  : public RuntimeObject
{
public:

public:
};

struct Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields
{
public:
	// System.Action`1<System.String> Telepathy.Logger::Log
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___Log_0;
	// System.Action`1<System.String> Telepathy.Logger::LogWarning
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___LogWarning_1;
	// System.Action`1<System.String> Telepathy.Logger::LogError
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___LogError_2;

public:
	inline static int32_t get_offset_of_Log_0() { return static_cast<int32_t>(offsetof(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields, ___Log_0)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_Log_0() const { return ___Log_0; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_Log_0() { return &___Log_0; }
	inline void set_Log_0(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___Log_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Log_0), (void*)value);
	}

	inline static int32_t get_offset_of_LogWarning_1() { return static_cast<int32_t>(offsetof(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields, ___LogWarning_1)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_LogWarning_1() const { return ___LogWarning_1; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_LogWarning_1() { return &___LogWarning_1; }
	inline void set_LogWarning_1(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___LogWarning_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LogWarning_1), (void*)value);
	}

	inline static int32_t get_offset_of_LogError_2() { return static_cast<int32_t>(offsetof(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields, ___LogError_2)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_LogError_2() const { return ___LogError_2; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_LogError_2() { return &___LogError_2; }
	inline void set_LogError_2(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___LogError_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LogError_2), (void*)value);
	}
};


// UnityEngine.Debug
struct  Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4  : public RuntimeObject
{
public:

public:
};

struct Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_StaticFields
{
public:
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	RuntimeObject* ___s_Logger_0;

public:
	inline static int32_t get_offset_of_s_Logger_0() { return static_cast<int32_t>(offsetof(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_StaticFields, ___s_Logger_0)); }
	inline RuntimeObject* get_s_Logger_0() const { return ___s_Logger_0; }
	inline RuntimeObject** get_address_of_s_Logger_0() { return &___s_Logger_0; }
	inline void set_s_Logger_0(RuntimeObject* value)
	{
		___s_Logger_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Logger_0), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TypeName_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};


// Mirror.DoubleMessage
struct  DoubleMessage_t352EACB856C49375DF7876D6F621E097E6AA8F46  : public MessageBase_t18C829EC4363E125BF1E98E367DFBE721034BDC6
{
public:
	// System.Double Mirror.DoubleMessage::value
	double ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(DoubleMessage_t352EACB856C49375DF7876D6F621E097E6AA8F46, ___value_0)); }
	inline double get_value_0() const { return ___value_0; }
	inline double* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(double value)
	{
		___value_0 = value;
	}
};


// Mirror.EmptyMessage
struct  EmptyMessage_t50A033E9118B8078123AC2274445B7ED013612A0  : public MessageBase_t18C829EC4363E125BF1E98E367DFBE721034BDC6
{
public:

public:
};


// Mirror.NetworkPongMessage
struct  NetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB  : public MessageBase_t18C829EC4363E125BF1E98E367DFBE721034BDC6
{
public:
	// System.Double Mirror.NetworkPongMessage::clientTime
	double ___clientTime_0;
	// System.Double Mirror.NetworkPongMessage::serverTime
	double ___serverTime_1;

public:
	inline static int32_t get_offset_of_clientTime_0() { return static_cast<int32_t>(offsetof(NetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB, ___clientTime_0)); }
	inline double get_clientTime_0() const { return ___clientTime_0; }
	inline double* get_address_of_clientTime_0() { return &___clientTime_0; }
	inline void set_clientTime_0(double value)
	{
		___clientTime_0 = value;
	}

	inline static int32_t get_offset_of_serverTime_1() { return static_cast<int32_t>(offsetof(NetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB, ___serverTime_1)); }
	inline double get_serverTime_1() const { return ___serverTime_1; }
	inline double* get_address_of_serverTime_1() { return &___serverTime_1; }
	inline void set_serverTime_1(double value)
	{
		___serverTime_1 = value;
	}
};


// Mirror.NetworkSettingsAttribute
struct  NetworkSettingsAttribute_t70DA30B0FB5638EA017F9C536EE5E6321E104E8E  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.Single Mirror.NetworkSettingsAttribute::sendInterval
	float ___sendInterval_0;

public:
	inline static int32_t get_offset_of_sendInterval_0() { return static_cast<int32_t>(offsetof(NetworkSettingsAttribute_t70DA30B0FB5638EA017F9C536EE5E6321E104E8E, ___sendInterval_0)); }
	inline float get_sendInterval_0() const { return ___sendInterval_0; }
	inline float* get_address_of_sendInterval_0() { return &___sendInterval_0; }
	inline void set_sendInterval_0(float value)
	{
		___sendInterval_0 = value;
	}
};


// Mirror.ObjectDestroyMessage
struct  ObjectDestroyMessage_tCAEDA7F85120CC950BE64733931F0B95552A9053  : public MessageBase_t18C829EC4363E125BF1E98E367DFBE721034BDC6
{
public:
	// System.UInt32 Mirror.ObjectDestroyMessage::netId
	uint32_t ___netId_0;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(ObjectDestroyMessage_tCAEDA7F85120CC950BE64733931F0B95552A9053, ___netId_0)); }
	inline uint32_t get_netId_0() const { return ___netId_0; }
	inline uint32_t* get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(uint32_t value)
	{
		___netId_0 = value;
	}
};


// Mirror.ObjectHideMessage
struct  ObjectHideMessage_tF0EF2C045B3BFF5A6C7533FE65251757D209B26F  : public MessageBase_t18C829EC4363E125BF1E98E367DFBE721034BDC6
{
public:
	// System.UInt32 Mirror.ObjectHideMessage::netId
	uint32_t ___netId_0;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(ObjectHideMessage_tF0EF2C045B3BFF5A6C7533FE65251757D209B26F, ___netId_0)); }
	inline uint32_t get_netId_0() const { return ___netId_0; }
	inline uint32_t* get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(uint32_t value)
	{
		___netId_0 = value;
	}
};


// Mirror.OwnerMessage
struct  OwnerMessage_t5B9F3813FF57F5C44F7453E0B12423409D1AD3D9  : public MessageBase_t18C829EC4363E125BF1E98E367DFBE721034BDC6
{
public:
	// System.UInt32 Mirror.OwnerMessage::netId
	uint32_t ___netId_0;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(OwnerMessage_t5B9F3813FF57F5C44F7453E0B12423409D1AD3D9, ___netId_0)); }
	inline uint32_t get_netId_0() const { return ___netId_0; }
	inline uint32_t* get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(uint32_t value)
	{
		___netId_0 = value;
	}
};


// Mirror.RemoteCallMessage
struct  RemoteCallMessage_t8F16BC5D89C9CE3BC22D315100ABBAAE02A9D31C  : public MessageBase_t18C829EC4363E125BF1E98E367DFBE721034BDC6
{
public:
	// System.UInt32 Mirror.RemoteCallMessage::netId
	uint32_t ___netId_0;
	// System.Int32 Mirror.RemoteCallMessage::componentIndex
	int32_t ___componentIndex_1;
	// System.Int32 Mirror.RemoteCallMessage::functionHash
	int32_t ___functionHash_2;
	// System.Byte[] Mirror.RemoteCallMessage::payload
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___payload_3;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(RemoteCallMessage_t8F16BC5D89C9CE3BC22D315100ABBAAE02A9D31C, ___netId_0)); }
	inline uint32_t get_netId_0() const { return ___netId_0; }
	inline uint32_t* get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(uint32_t value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_componentIndex_1() { return static_cast<int32_t>(offsetof(RemoteCallMessage_t8F16BC5D89C9CE3BC22D315100ABBAAE02A9D31C, ___componentIndex_1)); }
	inline int32_t get_componentIndex_1() const { return ___componentIndex_1; }
	inline int32_t* get_address_of_componentIndex_1() { return &___componentIndex_1; }
	inline void set_componentIndex_1(int32_t value)
	{
		___componentIndex_1 = value;
	}

	inline static int32_t get_offset_of_functionHash_2() { return static_cast<int32_t>(offsetof(RemoteCallMessage_t8F16BC5D89C9CE3BC22D315100ABBAAE02A9D31C, ___functionHash_2)); }
	inline int32_t get_functionHash_2() const { return ___functionHash_2; }
	inline int32_t* get_address_of_functionHash_2() { return &___functionHash_2; }
	inline void set_functionHash_2(int32_t value)
	{
		___functionHash_2 = value;
	}

	inline static int32_t get_offset_of_payload_3() { return static_cast<int32_t>(offsetof(RemoteCallMessage_t8F16BC5D89C9CE3BC22D315100ABBAAE02A9D31C, ___payload_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_payload_3() const { return ___payload_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_payload_3() { return &___payload_3; }
	inline void set_payload_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___payload_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payload_3), (void*)value);
	}
};


// Mirror.ServerAttribute
struct  ServerAttribute_t2FDCCEE489BE4E816E963AB2C0F5CBF333D23FF9  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};


// Mirror.ServerCallbackAttribute
struct  ServerCallbackAttribute_t9FB75A0CE615ADC5DA4CC32EFC8FBD13012A0532  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};


// Mirror.StringMessage
struct  StringMessage_t946707773BD82A3C9839A41982482EE7278FC05C  : public MessageBase_t18C829EC4363E125BF1E98E367DFBE721034BDC6
{
public:
	// System.String Mirror.StringMessage::value
	String_t* ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(StringMessage_t946707773BD82A3C9839A41982482EE7278FC05C, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_0), (void*)value);
	}
};


// Mirror.SyncEventAttribute
struct  SyncEventAttribute_tA98B3F53D2AE69B5A453769D09C637BACB870F19  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.Int32 Mirror.SyncEventAttribute::channel
	int32_t ___channel_0;

public:
	inline static int32_t get_offset_of_channel_0() { return static_cast<int32_t>(offsetof(SyncEventAttribute_tA98B3F53D2AE69B5A453769D09C637BACB870F19, ___channel_0)); }
	inline int32_t get_channel_0() const { return ___channel_0; }
	inline int32_t* get_address_of_channel_0() { return &___channel_0; }
	inline void set_channel_0(int32_t value)
	{
		___channel_0 = value;
	}
};


// Mirror.SyncListBool
struct  SyncListBool_t54569B1E7DFF857F92C9E39BF59124D83187493E  : public SyncList_1_t033CEC0EDA490F9D66877E1293C8F60E74DCF81D
{
public:

public:
};


// Mirror.SyncListFloat
struct  SyncListFloat_t09BF4B3E58761DE4E452A57417B119AEFE1A3B88  : public SyncList_1_tF2335EDF773695C413A424569EB73B0F8B402649
{
public:

public:
};


// Mirror.SyncListInt
struct  SyncListInt_t5C20EECACEE550DAED46A2DE6E39E0B99E3BB404  : public SyncList_1_tC1F959EAA42CFA5B7CD120EC08C2E89988981E32
{
public:

public:
};


// Mirror.SyncListString
struct  SyncListString_t69366AD8A01F0912BC568BE682FB9549A99D0382  : public SyncList_1_t705325F67F4AEE9A566FF3083F0ABAD0EB90F1BD
{
public:

public:
};


// Mirror.SyncListUInt
struct  SyncListUInt_tEF4E598A708B22DAB55C04F092CD12DD0C383D9D  : public SyncList_1_t958D769BAD089D33B0B7FD35E50BE7B2870AF9BE
{
public:

public:
};


// Mirror.SyncVarAttribute
struct  SyncVarAttribute_tA9753A7344FD1634277628C93CB8A85D0BB21436  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.String Mirror.SyncVarAttribute::hook
	String_t* ___hook_0;

public:
	inline static int32_t get_offset_of_hook_0() { return static_cast<int32_t>(offsetof(SyncVarAttribute_tA9753A7344FD1634277628C93CB8A85D0BB21436, ___hook_0)); }
	inline String_t* get_hook_0() const { return ___hook_0; }
	inline String_t** get_address_of_hook_0() { return &___hook_0; }
	inline void set_hook_0(String_t* value)
	{
		___hook_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hook_0), (void*)value);
	}
};


// Mirror.TargetRpcAttribute
struct  TargetRpcAttribute_tBD6E81F8BAED840414BA159DDC00A9A8ED8CAAA7  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.Int32 Mirror.TargetRpcAttribute::channel
	int32_t ___channel_0;

public:
	inline static int32_t get_offset_of_channel_0() { return static_cast<int32_t>(offsetof(TargetRpcAttribute_tBD6E81F8BAED840414BA159DDC00A9A8ED8CAAA7, ___channel_0)); }
	inline int32_t get_channel_0() const { return ___channel_0; }
	inline int32_t* get_address_of_channel_0() { return &___channel_0; }
	inline void set_channel_0(int32_t value)
	{
		___channel_0 = value;
	}
};


// Mirror.ULocalConnectionToClient
struct  ULocalConnectionToClient_tD46D83EA5610993710B35F9585058E7269225304  : public NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553
{
public:
	// Mirror.LocalClient Mirror.ULocalConnectionToClient::localClient
	LocalClient_tE212625B6AD521629F4E826D3AD1220DBA5A19DC * ___localClient_11;

public:
	inline static int32_t get_offset_of_localClient_11() { return static_cast<int32_t>(offsetof(ULocalConnectionToClient_tD46D83EA5610993710B35F9585058E7269225304, ___localClient_11)); }
	inline LocalClient_tE212625B6AD521629F4E826D3AD1220DBA5A19DC * get_localClient_11() const { return ___localClient_11; }
	inline LocalClient_tE212625B6AD521629F4E826D3AD1220DBA5A19DC ** get_address_of_localClient_11() { return &___localClient_11; }
	inline void set_localClient_11(LocalClient_tE212625B6AD521629F4E826D3AD1220DBA5A19DC * value)
	{
		___localClient_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localClient_11), (void*)value);
	}
};


// Mirror.ULocalConnectionToServer
struct  ULocalConnectionToServer_tF9453DCD038DA1326F5A2EFD601668BF5C488890  : public NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553
{
public:

public:
};


// Mirror.UpdateVarsMessage
struct  UpdateVarsMessage_tEE310E3D93629AB8305DDD549F8D98F0E5D8DFF1  : public MessageBase_t18C829EC4363E125BF1E98E367DFBE721034BDC6
{
public:
	// System.UInt32 Mirror.UpdateVarsMessage::netId
	uint32_t ___netId_0;
	// System.Byte[] Mirror.UpdateVarsMessage::payload
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___payload_1;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(UpdateVarsMessage_tEE310E3D93629AB8305DDD549F8D98F0E5D8DFF1, ___netId_0)); }
	inline uint32_t get_netId_0() const { return ___netId_0; }
	inline uint32_t* get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(uint32_t value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_payload_1() { return static_cast<int32_t>(offsetof(UpdateVarsMessage_tEE310E3D93629AB8305DDD549F8D98F0E5D8DFF1, ___payload_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_payload_1() const { return ___payload_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_payload_1() { return &___payload_1; }
	inline void set_payload_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___payload_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payload_1), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Decimal
struct  Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Zero_7)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___One_8)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_One_8() const { return ___One_8; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinusOne_9)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MaxValue_10)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinValue_11)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Guid
struct  Guid_t 
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
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____fastRng_14;

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
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
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


// System.SByte
struct  SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// Telepathy.Server
struct  Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818  : public Common_tFCC994B3A027AC464326397B2D22751359949226
{
public:
	// System.Net.Sockets.TcpListener Telepathy.Server::listener
	TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * ___listener_4;
	// System.Threading.Thread Telepathy.Server::listenerThread
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ___listenerThread_5;
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.Server_ClientToken> Telepathy.Server::clients
	ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B * ___clients_6;

public:
	inline static int32_t get_offset_of_listener_4() { return static_cast<int32_t>(offsetof(Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818, ___listener_4)); }
	inline TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * get_listener_4() const { return ___listener_4; }
	inline TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE ** get_address_of_listener_4() { return &___listener_4; }
	inline void set_listener_4(TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * value)
	{
		___listener_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listener_4), (void*)value);
	}

	inline static int32_t get_offset_of_listenerThread_5() { return static_cast<int32_t>(offsetof(Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818, ___listenerThread_5)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get_listenerThread_5() const { return ___listenerThread_5; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of_listenerThread_5() { return &___listenerThread_5; }
	inline void set_listenerThread_5(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		___listenerThread_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listenerThread_5), (void*)value);
	}

	inline static int32_t get_offset_of_clients_6() { return static_cast<int32_t>(offsetof(Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818, ___clients_6)); }
	inline ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B * get_clients_6() const { return ___clients_6; }
	inline ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B ** get_address_of_clients_6() { return &___clients_6; }
	inline void set_clients_6(ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B * value)
	{
		___clients_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clients_6), (void*)value);
	}
};

struct Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818_StaticFields
{
public:
	// System.Int32 Telepathy.Server::counter
	int32_t ___counter_7;

public:
	inline static int32_t get_offset_of_counter_7() { return static_cast<int32_t>(offsetof(Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818_StaticFields, ___counter_7)); }
	inline int32_t get_counter_7() const { return ___counter_7; }
	inline int32_t* get_address_of_counter_7() { return &___counter_7; }
	inline void set_counter_7(int32_t value)
	{
		___counter_7 = value;
	}
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct  Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct  UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Byte[]>
struct  UnityEvent_1_t33C4AE804E4DFCF919C354213C40AC81F6BAB1AD  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t33C4AE804E4DFCF919C354213C40AC81F6BAB1AD, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Exception>
struct  UnityEvent_1_t19D53D50B89FEA9EC653D142280287DC5047277A  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t19D53D50B89FEA9EC653D142280287DC5047277A, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<System.Int32,System.Byte[]>
struct  UnityEvent_2_t59961C962823467177342BFD246272B5CCD1FB9F  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_2_t59961C962823467177342BFD246272B5CCD1FB9F, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<System.Int32,System.Exception>
struct  UnityEvent_2_t9B9B1083EAE21A118772ECD9896B4EEA7D204675  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_2_t9B9B1083EAE21A118772ECD9896B4EEA7D204675, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// Mirror.NetworkClient_ConnectState
struct  ConnectState_tDA09CA198163A76844E4831D736B6CB28981E553 
{
public:
	// System.Int32 Mirror.NetworkClient_ConnectState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectState_tDA09CA198163A76844E4831D736B6CB28981E553, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mirror.NetworkPingMessage
struct  NetworkPingMessage_t0CD9DEB4D3F4E46C724EC1537BBE43EDE4DA18F9  : public DoubleMessage_t352EACB856C49375DF7876D6F621E097E6AA8F46
{
public:

public:
};


// Mirror.NotReadyMessage
struct  NotReadyMessage_t8CDB885248D3D910295CC051F67D03D977ED212B  : public EmptyMessage_t50A033E9118B8078123AC2274445B7ED013612A0
{
public:

public:
};


// Mirror.ObjectSpawnFinishedMessage
struct  ObjectSpawnFinishedMessage_t057B2DB67056306906BE06484E88D209BCA34553  : public EmptyMessage_t50A033E9118B8078123AC2274445B7ED013612A0
{
public:

public:
};


// Mirror.ObjectSpawnStartedMessage
struct  ObjectSpawnStartedMessage_tF1FF4F4EF9BBB083C4A6FC2998AAD0165A822D83  : public EmptyMessage_t50A033E9118B8078123AC2274445B7ED013612A0
{
public:

public:
};


// Mirror.PlayerSpawnMethod
struct  PlayerSpawnMethod_t8BE4047C7B06208D54ABDF1B7F75DCDE600B4F8E 
{
public:
	// System.Int32 Mirror.PlayerSpawnMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayerSpawnMethod_t8BE4047C7B06208D54ABDF1B7F75DCDE600B4F8E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mirror.ReadyMessage
struct  ReadyMessage_t7781C3EA6ED346684B704E4D5D169572B4A98632  : public EmptyMessage_t50A033E9118B8078123AC2274445B7ED013612A0
{
public:

public:
};


// Mirror.RemovePlayerMessage
struct  RemovePlayerMessage_t97BE9115FC1584404F127225B2CDE04E3EBEF359  : public EmptyMessage_t50A033E9118B8078123AC2274445B7ED013612A0
{
public:

public:
};


// Mirror.RpcMessage
struct  RpcMessage_t654DE7A93F2C632C3014F7EC3455AB319F3AA4E8  : public RemoteCallMessage_t8F16BC5D89C9CE3BC22D315100ABBAAE02A9D31C
{
public:

public:
};


// Mirror.SceneAttribute
struct  SceneAttribute_t2484BD4457BA974898E687A2554EE60E1351B423  : public PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54
{
public:

public:
};


// Mirror.SceneMessage
struct  SceneMessage_t41D769BE66DAABD69C0E576AA8B945AC5F2BDF47  : public StringMessage_t946707773BD82A3C9839A41982482EE7278FC05C
{
public:

public:
};


// Mirror.SpawnPrefabMessage
struct  SpawnPrefabMessage_tAABE6655EBD053D60779ECE2AEB1009063B9AB08  : public MessageBase_t18C829EC4363E125BF1E98E367DFBE721034BDC6
{
public:
	// System.UInt32 Mirror.SpawnPrefabMessage::netId
	uint32_t ___netId_0;
	// System.Guid Mirror.SpawnPrefabMessage::assetId
	Guid_t  ___assetId_1;
	// UnityEngine.Vector3 Mirror.SpawnPrefabMessage::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_2;
	// UnityEngine.Quaternion Mirror.SpawnPrefabMessage::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_3;
	// System.Byte[] Mirror.SpawnPrefabMessage::payload
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___payload_4;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(SpawnPrefabMessage_tAABE6655EBD053D60779ECE2AEB1009063B9AB08, ___netId_0)); }
	inline uint32_t get_netId_0() const { return ___netId_0; }
	inline uint32_t* get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(uint32_t value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_assetId_1() { return static_cast<int32_t>(offsetof(SpawnPrefabMessage_tAABE6655EBD053D60779ECE2AEB1009063B9AB08, ___assetId_1)); }
	inline Guid_t  get_assetId_1() const { return ___assetId_1; }
	inline Guid_t * get_address_of_assetId_1() { return &___assetId_1; }
	inline void set_assetId_1(Guid_t  value)
	{
		___assetId_1 = value;
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(SpawnPrefabMessage_tAABE6655EBD053D60779ECE2AEB1009063B9AB08, ___position_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_2() const { return ___position_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(SpawnPrefabMessage_tAABE6655EBD053D60779ECE2AEB1009063B9AB08, ___rotation_3)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_3() const { return ___rotation_3; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_3 = value;
	}

	inline static int32_t get_offset_of_payload_4() { return static_cast<int32_t>(offsetof(SpawnPrefabMessage_tAABE6655EBD053D60779ECE2AEB1009063B9AB08, ___payload_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_payload_4() const { return ___payload_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_payload_4() { return &___payload_4; }
	inline void set_payload_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___payload_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payload_4), (void*)value);
	}
};


// Mirror.SpawnSceneObjectMessage
struct  SpawnSceneObjectMessage_t756AE7AB9D828C08339571AC4B899AA95C5FDE99  : public MessageBase_t18C829EC4363E125BF1E98E367DFBE721034BDC6
{
public:
	// System.UInt32 Mirror.SpawnSceneObjectMessage::netId
	uint32_t ___netId_0;
	// System.UInt32 Mirror.SpawnSceneObjectMessage::sceneId
	uint32_t ___sceneId_1;
	// UnityEngine.Vector3 Mirror.SpawnSceneObjectMessage::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_2;
	// UnityEngine.Quaternion Mirror.SpawnSceneObjectMessage::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_3;
	// System.Byte[] Mirror.SpawnSceneObjectMessage::payload
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___payload_4;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(SpawnSceneObjectMessage_t756AE7AB9D828C08339571AC4B899AA95C5FDE99, ___netId_0)); }
	inline uint32_t get_netId_0() const { return ___netId_0; }
	inline uint32_t* get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(uint32_t value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_sceneId_1() { return static_cast<int32_t>(offsetof(SpawnSceneObjectMessage_t756AE7AB9D828C08339571AC4B899AA95C5FDE99, ___sceneId_1)); }
	inline uint32_t get_sceneId_1() const { return ___sceneId_1; }
	inline uint32_t* get_address_of_sceneId_1() { return &___sceneId_1; }
	inline void set_sceneId_1(uint32_t value)
	{
		___sceneId_1 = value;
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(SpawnSceneObjectMessage_t756AE7AB9D828C08339571AC4B899AA95C5FDE99, ___position_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_2() const { return ___position_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(SpawnSceneObjectMessage_t756AE7AB9D828C08339571AC4B899AA95C5FDE99, ___rotation_3)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_3() const { return ___rotation_3; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_3 = value;
	}

	inline static int32_t get_offset_of_payload_4() { return static_cast<int32_t>(offsetof(SpawnSceneObjectMessage_t756AE7AB9D828C08339571AC4B899AA95C5FDE99, ___payload_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_payload_4() const { return ___payload_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_payload_4() { return &___payload_4; }
	inline void set_payload_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___payload_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payload_4), (void*)value);
	}
};


// Mirror.SyncEventMessage
struct  SyncEventMessage_tA7316BF890CA1EEDAC3EDF870DDF809A91B53E77  : public RemoteCallMessage_t8F16BC5D89C9CE3BC22D315100ABBAAE02A9D31C
{
public:

public:
};


// Mirror.UnityEventByteArray
struct  UnityEventByteArray_t8F9C385E1AFA9E13C18F58FAA2CC7D062BD6E07E  : public UnityEvent_1_t33C4AE804E4DFCF919C354213C40AC81F6BAB1AD
{
public:

public:
};


// Mirror.UnityEventException
struct  UnityEventException_tC51123DDAD93C3B3E6F3C32395828A4FEA1CAC74  : public UnityEvent_1_t19D53D50B89FEA9EC653D142280287DC5047277A
{
public:

public:
};


// Mirror.UnityEventInt
struct  UnityEventInt_t25605BA0F5D789946A94CBAF118716E9FF3EE69A  : public UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914
{
public:

public:
};


// Mirror.UnityEventIntByteArray
struct  UnityEventIntByteArray_t5B46D154F0F9D94AB13839D6B8CA25DD9E9013CF  : public UnityEvent_2_t59961C962823467177342BFD246272B5CCD1FB9F
{
public:

public:
};


// Mirror.UnityEventIntException
struct  UnityEventIntException_t4C17526221B8BEEAA11C8D30DB004ACE4F1BEFF4  : public UnityEvent_2_t9B9B1083EAE21A118772ECD9896B4EEA7D204675
{
public:

public:
};


// Mirror.Version
struct  Version_tDB3D803501119D6A98130759C7A4DD93C805E54E 
{
public:
	// System.Int32 Mirror.Version::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Version_tDB3D803501119D6A98130759C7A4DD93C805E54E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.IO.MemoryStream
struct  MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____buffer_5;
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
	Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * ____lastReadTask_14;

public:
	inline static int32_t get_offset_of__buffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____buffer_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__buffer_5() const { return ____buffer_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__buffer_5() { return &____buffer_5; }
	inline void set__buffer_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of__origin_6() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____origin_6)); }
	inline int32_t get__origin_6() const { return ____origin_6; }
	inline int32_t* get_address_of__origin_6() { return &____origin_6; }
	inline void set__origin_6(int32_t value)
	{
		____origin_6 = value;
	}

	inline static int32_t get_offset_of__position_7() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____position_7)); }
	inline int32_t get__position_7() const { return ____position_7; }
	inline int32_t* get_address_of__position_7() { return &____position_7; }
	inline void set__position_7(int32_t value)
	{
		____position_7 = value;
	}

	inline static int32_t get_offset_of__length_8() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____length_8)); }
	inline int32_t get__length_8() const { return ____length_8; }
	inline int32_t* get_address_of__length_8() { return &____length_8; }
	inline void set__length_8(int32_t value)
	{
		____length_8 = value;
	}

	inline static int32_t get_offset_of__capacity_9() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____capacity_9)); }
	inline int32_t get__capacity_9() const { return ____capacity_9; }
	inline int32_t* get_address_of__capacity_9() { return &____capacity_9; }
	inline void set__capacity_9(int32_t value)
	{
		____capacity_9 = value;
	}

	inline static int32_t get_offset_of__expandable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____expandable_10)); }
	inline bool get__expandable_10() const { return ____expandable_10; }
	inline bool* get_address_of__expandable_10() { return &____expandable_10; }
	inline void set__expandable_10(bool value)
	{
		____expandable_10 = value;
	}

	inline static int32_t get_offset_of__writable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____writable_11)); }
	inline bool get__writable_11() const { return ____writable_11; }
	inline bool* get_address_of__writable_11() { return &____writable_11; }
	inline void set__writable_11(bool value)
	{
		____writable_11 = value;
	}

	inline static int32_t get_offset_of__exposable_12() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____exposable_12)); }
	inline bool get__exposable_12() const { return ____exposable_12; }
	inline bool* get_address_of__exposable_12() { return &____exposable_12; }
	inline void set__exposable_12(bool value)
	{
		____exposable_12 = value;
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_14() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____lastReadTask_14)); }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * get__lastReadTask_14() const { return ____lastReadTask_14; }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 ** get_address_of__lastReadTask_14() { return &____lastReadTask_14; }
	inline void set__lastReadTask_14(Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * value)
	{
		____lastReadTask_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_14), (void*)value);
	}
};


// System.Net.Sockets.AddressFamily
struct  AddressFamily_tFA4F79FA7F299EBDF507F4811E6E5C3EEBF0850E 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_tFA4F79FA7F299EBDF507F4811E6E5C3EEBF0850E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.ProtocolType
struct  ProtocolType_t20E72BC88D85E41793731DC987F8F04F312D66DD 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProtocolType_t20E72BC88D85E41793731DC987F8F04F312D66DD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketType
struct  SocketType_tCD56A18D4C7B43BF166E5C8B4B456BD646DF5775 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketType_tCD56A18D4C7B43BF166E5C8B4B456BD646DF5775, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// Telepathy.Client
struct  Client_t00748E10E80324FD9D1C491A162829231DB6A3FA  : public Common_tFCC994B3A027AC464326397B2D22751359949226
{
public:
	// System.Net.Sockets.TcpClient Telepathy.Client::client
	TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * ___client_4;
	// System.Threading.Thread Telepathy.Client::receiveThread
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ___receiveThread_5;
	// System.Threading.Thread Telepathy.Client::sendThread
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ___sendThread_6;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Telepathy.Client::_Connecting
	bool ____Connecting_7;
	// Telepathy.SafeQueue`1<System.Byte[]> Telepathy.Client::sendQueue
	SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * ___sendQueue_8;
	// System.Threading.ManualResetEvent Telepathy.Client::sendPending
	ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * ___sendPending_9;

public:
	inline static int32_t get_offset_of_client_4() { return static_cast<int32_t>(offsetof(Client_t00748E10E80324FD9D1C491A162829231DB6A3FA, ___client_4)); }
	inline TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * get_client_4() const { return ___client_4; }
	inline TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB ** get_address_of_client_4() { return &___client_4; }
	inline void set_client_4(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * value)
	{
		___client_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_4), (void*)value);
	}

	inline static int32_t get_offset_of_receiveThread_5() { return static_cast<int32_t>(offsetof(Client_t00748E10E80324FD9D1C491A162829231DB6A3FA, ___receiveThread_5)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get_receiveThread_5() const { return ___receiveThread_5; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of_receiveThread_5() { return &___receiveThread_5; }
	inline void set_receiveThread_5(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		___receiveThread_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receiveThread_5), (void*)value);
	}

	inline static int32_t get_offset_of_sendThread_6() { return static_cast<int32_t>(offsetof(Client_t00748E10E80324FD9D1C491A162829231DB6A3FA, ___sendThread_6)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get_sendThread_6() const { return ___sendThread_6; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of_sendThread_6() { return &___sendThread_6; }
	inline void set_sendThread_6(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		___sendThread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendThread_6), (void*)value);
	}

	inline static int32_t get_offset_of__Connecting_7() { return static_cast<int32_t>(offsetof(Client_t00748E10E80324FD9D1C491A162829231DB6A3FA, ____Connecting_7)); }
	inline bool get__Connecting_7() const { return ____Connecting_7; }
	inline bool* get_address_of__Connecting_7() { return &____Connecting_7; }
	inline void set__Connecting_7(bool value)
	{
		____Connecting_7 = value;
	}

	inline static int32_t get_offset_of_sendQueue_8() { return static_cast<int32_t>(offsetof(Client_t00748E10E80324FD9D1C491A162829231DB6A3FA, ___sendQueue_8)); }
	inline SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * get_sendQueue_8() const { return ___sendQueue_8; }
	inline SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 ** get_address_of_sendQueue_8() { return &___sendQueue_8; }
	inline void set_sendQueue_8(SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * value)
	{
		___sendQueue_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendQueue_8), (void*)value);
	}

	inline static int32_t get_offset_of_sendPending_9() { return static_cast<int32_t>(offsetof(Client_t00748E10E80324FD9D1C491A162829231DB6A3FA, ___sendPending_9)); }
	inline ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * get_sendPending_9() const { return ___sendPending_9; }
	inline ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 ** get_address_of_sendPending_9() { return &___sendPending_9; }
	inline void set_sendPending_9(ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * value)
	{
		___sendPending_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendPending_9), (void*)value);
	}
};


// Telepathy.EventType
struct  EventType_t335A0BD09D746B4FF67DBC19E317F1D79A420267 
{
public:
	// System.Int32 Telepathy.EventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventType_t335A0BD09D746B4FF67DBC19E317F1D79A420267, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Plane
struct  Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED, ___m_Normal_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};


// UnityEngine.Ray
struct  Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Origin_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Direction_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RuntimePlatform
struct  RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mirror.NetworkClient
struct  NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkMessageDelegate> Mirror.NetworkClient::handlers
	Dictionary_2_tFAAA35944634FA9EB663ACBC8F43D99C9C0C9A80 * ___handlers_1;
	// Mirror.NetworkConnection Mirror.NetworkClient::<connection>k__BackingField
	NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___U3CconnectionU3Ek__BackingField_2;
	// Mirror.NetworkClient_ConnectState Mirror.NetworkClient::connectState
	int32_t ___connectState_3;
	// System.String Mirror.NetworkClient::<serverIp>k__BackingField
	String_t* ___U3CserverIpU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_handlers_1() { return static_cast<int32_t>(offsetof(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980, ___handlers_1)); }
	inline Dictionary_2_tFAAA35944634FA9EB663ACBC8F43D99C9C0C9A80 * get_handlers_1() const { return ___handlers_1; }
	inline Dictionary_2_tFAAA35944634FA9EB663ACBC8F43D99C9C0C9A80 ** get_address_of_handlers_1() { return &___handlers_1; }
	inline void set_handlers_1(Dictionary_2_tFAAA35944634FA9EB663ACBC8F43D99C9C0C9A80 * value)
	{
		___handlers_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handlers_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CconnectionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980, ___U3CconnectionU3Ek__BackingField_2)); }
	inline NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * get_U3CconnectionU3Ek__BackingField_2() const { return ___U3CconnectionU3Ek__BackingField_2; }
	inline NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 ** get_address_of_U3CconnectionU3Ek__BackingField_2() { return &___U3CconnectionU3Ek__BackingField_2; }
	inline void set_U3CconnectionU3Ek__BackingField_2(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * value)
	{
		___U3CconnectionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CconnectionU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_connectState_3() { return static_cast<int32_t>(offsetof(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980, ___connectState_3)); }
	inline int32_t get_connectState_3() const { return ___connectState_3; }
	inline int32_t* get_address_of_connectState_3() { return &___connectState_3; }
	inline void set_connectState_3(int32_t value)
	{
		___connectState_3 = value;
	}

	inline static int32_t get_offset_of_U3CserverIpU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980, ___U3CserverIpU3Ek__BackingField_4)); }
	inline String_t* get_U3CserverIpU3Ek__BackingField_4() const { return ___U3CserverIpU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CserverIpU3Ek__BackingField_4() { return &___U3CserverIpU3Ek__BackingField_4; }
	inline void set_U3CserverIpU3Ek__BackingField_4(String_t* value)
	{
		___U3CserverIpU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CserverIpU3Ek__BackingField_4), (void*)value);
	}
};

struct NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_StaticFields
{
public:
	// Mirror.NetworkClient Mirror.NetworkClient::singleton
	NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980 * ___singleton_0;
	// System.Boolean Mirror.NetworkClient::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_singleton_0() { return static_cast<int32_t>(offsetof(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_StaticFields, ___singleton_0)); }
	inline NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980 * get_singleton_0() const { return ___singleton_0; }
	inline NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980 ** get_address_of_singleton_0() { return &___singleton_0; }
	inline void set_singleton_0(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980 * value)
	{
		___singleton_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___singleton_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CactiveU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_StaticFields, ___U3CactiveU3Ek__BackingField_5)); }
	inline bool get_U3CactiveU3Ek__BackingField_5() const { return ___U3CactiveU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CactiveU3Ek__BackingField_5() { return &___U3CactiveU3Ek__BackingField_5; }
	inline void set_U3CactiveU3Ek__BackingField_5(bool value)
	{
		___U3CactiveU3Ek__BackingField_5 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Net.Sockets.Socket
struct  Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_10;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_11;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_12;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_13;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_14;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_15;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_16;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A * ___m_Handle_17;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * ___seed_endpoint_18;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ___ReadSem_19;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ___WriteSem_20;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_21;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_22;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_23;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_24;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_25;

public:
	inline static int32_t get_offset_of_is_closed_10() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_closed_10)); }
	inline bool get_is_closed_10() const { return ___is_closed_10; }
	inline bool* get_address_of_is_closed_10() { return &___is_closed_10; }
	inline void set_is_closed_10(bool value)
	{
		___is_closed_10 = value;
	}

	inline static int32_t get_offset_of_is_listening_11() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_listening_11)); }
	inline bool get_is_listening_11() const { return ___is_listening_11; }
	inline bool* get_address_of_is_listening_11() { return &___is_listening_11; }
	inline void set_is_listening_11(bool value)
	{
		___is_listening_11 = value;
	}

	inline static int32_t get_offset_of_useOverlappedIO_12() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___useOverlappedIO_12)); }
	inline bool get_useOverlappedIO_12() const { return ___useOverlappedIO_12; }
	inline bool* get_address_of_useOverlappedIO_12() { return &___useOverlappedIO_12; }
	inline void set_useOverlappedIO_12(bool value)
	{
		___useOverlappedIO_12 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_13() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___linger_timeout_13)); }
	inline int32_t get_linger_timeout_13() const { return ___linger_timeout_13; }
	inline int32_t* get_address_of_linger_timeout_13() { return &___linger_timeout_13; }
	inline void set_linger_timeout_13(int32_t value)
	{
		___linger_timeout_13 = value;
	}

	inline static int32_t get_offset_of_addressFamily_14() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___addressFamily_14)); }
	inline int32_t get_addressFamily_14() const { return ___addressFamily_14; }
	inline int32_t* get_address_of_addressFamily_14() { return &___addressFamily_14; }
	inline void set_addressFamily_14(int32_t value)
	{
		___addressFamily_14 = value;
	}

	inline static int32_t get_offset_of_socketType_15() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___socketType_15)); }
	inline int32_t get_socketType_15() const { return ___socketType_15; }
	inline int32_t* get_address_of_socketType_15() { return &___socketType_15; }
	inline void set_socketType_15(int32_t value)
	{
		___socketType_15 = value;
	}

	inline static int32_t get_offset_of_protocolType_16() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___protocolType_16)); }
	inline int32_t get_protocolType_16() const { return ___protocolType_16; }
	inline int32_t* get_address_of_protocolType_16() { return &___protocolType_16; }
	inline void set_protocolType_16(int32_t value)
	{
		___protocolType_16 = value;
	}

	inline static int32_t get_offset_of_m_Handle_17() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___m_Handle_17)); }
	inline SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A * get_m_Handle_17() const { return ___m_Handle_17; }
	inline SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A ** get_address_of_m_Handle_17() { return &___m_Handle_17; }
	inline void set_m_Handle_17(SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A * value)
	{
		___m_Handle_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Handle_17), (void*)value);
	}

	inline static int32_t get_offset_of_seed_endpoint_18() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___seed_endpoint_18)); }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * get_seed_endpoint_18() const { return ___seed_endpoint_18; }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 ** get_address_of_seed_endpoint_18() { return &___seed_endpoint_18; }
	inline void set_seed_endpoint_18(EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * value)
	{
		___seed_endpoint_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seed_endpoint_18), (void*)value);
	}

	inline static int32_t get_offset_of_ReadSem_19() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___ReadSem_19)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get_ReadSem_19() const { return ___ReadSem_19; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of_ReadSem_19() { return &___ReadSem_19; }
	inline void set_ReadSem_19(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		___ReadSem_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReadSem_19), (void*)value);
	}

	inline static int32_t get_offset_of_WriteSem_20() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___WriteSem_20)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get_WriteSem_20() const { return ___WriteSem_20; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of_WriteSem_20() { return &___WriteSem_20; }
	inline void set_WriteSem_20(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		___WriteSem_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WriteSem_20), (void*)value);
	}

	inline static int32_t get_offset_of_is_blocking_21() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_blocking_21)); }
	inline bool get_is_blocking_21() const { return ___is_blocking_21; }
	inline bool* get_address_of_is_blocking_21() { return &___is_blocking_21; }
	inline void set_is_blocking_21(bool value)
	{
		___is_blocking_21 = value;
	}

	inline static int32_t get_offset_of_is_bound_22() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_bound_22)); }
	inline bool get_is_bound_22() const { return ___is_bound_22; }
	inline bool* get_address_of_is_bound_22() { return &___is_bound_22; }
	inline void set_is_bound_22(bool value)
	{
		___is_bound_22 = value;
	}

	inline static int32_t get_offset_of_is_connected_23() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_connected_23)); }
	inline bool get_is_connected_23() const { return ___is_connected_23; }
	inline bool* get_address_of_is_connected_23() { return &___is_connected_23; }
	inline void set_is_connected_23(bool value)
	{
		___is_connected_23 = value;
	}

	inline static int32_t get_offset_of_m_IntCleanedUp_24() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___m_IntCleanedUp_24)); }
	inline int32_t get_m_IntCleanedUp_24() const { return ___m_IntCleanedUp_24; }
	inline int32_t* get_address_of_m_IntCleanedUp_24() { return &___m_IntCleanedUp_24; }
	inline void set_m_IntCleanedUp_24(int32_t value)
	{
		___m_IntCleanedUp_24 = value;
	}

	inline static int32_t get_offset_of_connect_in_progress_25() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___connect_in_progress_25)); }
	inline bool get_connect_in_progress_25() const { return ___connect_in_progress_25; }
	inline bool* get_address_of_connect_in_progress_25() { return &___connect_in_progress_25; }
	inline void set_connect_in_progress_25(bool value)
	{
		___connect_in_progress_25 = value;
	}
};

struct Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields
{
public:
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_PerfCountersEnabled
	bool ___s_PerfCountersEnabled_6;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___AcceptAsyncCallback_26;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginAcceptCallback_27;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginAcceptReceiveCallback_28;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___ConnectAsyncCallback_29;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginConnectCallback_30;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___DisconnectAsyncCallback_31;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginDisconnectCallback_32;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___ReceiveAsyncCallback_33;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginReceiveCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginReceiveGenericCallback_35;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___ReceiveFromAsyncCallback_36;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginReceiveFromCallback_37;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___SendAsyncCallback_38;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginSendGenericCallback_39;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___SendToAsyncCallback_40;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_0() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_InternalSyncObject_0)); }
	inline RuntimeObject * get_s_InternalSyncObject_0() const { return ___s_InternalSyncObject_0; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_0() { return &___s_InternalSyncObject_0; }
	inline void set_s_InternalSyncObject_0(RuntimeObject * value)
	{
		___s_InternalSyncObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_SupportsIPv4_1() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_SupportsIPv4_1)); }
	inline bool get_s_SupportsIPv4_1() const { return ___s_SupportsIPv4_1; }
	inline bool* get_address_of_s_SupportsIPv4_1() { return &___s_SupportsIPv4_1; }
	inline void set_s_SupportsIPv4_1(bool value)
	{
		___s_SupportsIPv4_1 = value;
	}

	inline static int32_t get_offset_of_s_SupportsIPv6_2() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_SupportsIPv6_2)); }
	inline bool get_s_SupportsIPv6_2() const { return ___s_SupportsIPv6_2; }
	inline bool* get_address_of_s_SupportsIPv6_2() { return &___s_SupportsIPv6_2; }
	inline void set_s_SupportsIPv6_2(bool value)
	{
		___s_SupportsIPv6_2 = value;
	}

	inline static int32_t get_offset_of_s_OSSupportsIPv6_3() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_OSSupportsIPv6_3)); }
	inline bool get_s_OSSupportsIPv6_3() const { return ___s_OSSupportsIPv6_3; }
	inline bool* get_address_of_s_OSSupportsIPv6_3() { return &___s_OSSupportsIPv6_3; }
	inline void set_s_OSSupportsIPv6_3(bool value)
	{
		___s_OSSupportsIPv6_3 = value;
	}

	inline static int32_t get_offset_of_s_Initialized_4() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_Initialized_4)); }
	inline bool get_s_Initialized_4() const { return ___s_Initialized_4; }
	inline bool* get_address_of_s_Initialized_4() { return &___s_Initialized_4; }
	inline void set_s_Initialized_4(bool value)
	{
		___s_Initialized_4 = value;
	}

	inline static int32_t get_offset_of_s_LoggingEnabled_5() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_LoggingEnabled_5)); }
	inline bool get_s_LoggingEnabled_5() const { return ___s_LoggingEnabled_5; }
	inline bool* get_address_of_s_LoggingEnabled_5() { return &___s_LoggingEnabled_5; }
	inline void set_s_LoggingEnabled_5(bool value)
	{
		___s_LoggingEnabled_5 = value;
	}

	inline static int32_t get_offset_of_s_PerfCountersEnabled_6() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_PerfCountersEnabled_6)); }
	inline bool get_s_PerfCountersEnabled_6() const { return ___s_PerfCountersEnabled_6; }
	inline bool* get_address_of_s_PerfCountersEnabled_6() { return &___s_PerfCountersEnabled_6; }
	inline void set_s_PerfCountersEnabled_6(bool value)
	{
		___s_PerfCountersEnabled_6 = value;
	}

	inline static int32_t get_offset_of_AcceptAsyncCallback_26() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___AcceptAsyncCallback_26)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_AcceptAsyncCallback_26() const { return ___AcceptAsyncCallback_26; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_AcceptAsyncCallback_26() { return &___AcceptAsyncCallback_26; }
	inline void set_AcceptAsyncCallback_26(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___AcceptAsyncCallback_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AcceptAsyncCallback_26), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptCallback_27() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginAcceptCallback_27)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginAcceptCallback_27() const { return ___BeginAcceptCallback_27; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginAcceptCallback_27() { return &___BeginAcceptCallback_27; }
	inline void set_BeginAcceptCallback_27(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginAcceptCallback_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptCallback_27), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptReceiveCallback_28() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginAcceptReceiveCallback_28)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginAcceptReceiveCallback_28() const { return ___BeginAcceptReceiveCallback_28; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginAcceptReceiveCallback_28() { return &___BeginAcceptReceiveCallback_28; }
	inline void set_BeginAcceptReceiveCallback_28(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginAcceptReceiveCallback_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptReceiveCallback_28), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectAsyncCallback_29() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___ConnectAsyncCallback_29)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_ConnectAsyncCallback_29() const { return ___ConnectAsyncCallback_29; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_ConnectAsyncCallback_29() { return &___ConnectAsyncCallback_29; }
	inline void set_ConnectAsyncCallback_29(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___ConnectAsyncCallback_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectAsyncCallback_29), (void*)value);
	}

	inline static int32_t get_offset_of_BeginConnectCallback_30() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginConnectCallback_30)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginConnectCallback_30() const { return ___BeginConnectCallback_30; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginConnectCallback_30() { return &___BeginConnectCallback_30; }
	inline void set_BeginConnectCallback_30(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginConnectCallback_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginConnectCallback_30), (void*)value);
	}

	inline static int32_t get_offset_of_DisconnectAsyncCallback_31() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___DisconnectAsyncCallback_31)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_DisconnectAsyncCallback_31() const { return ___DisconnectAsyncCallback_31; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_DisconnectAsyncCallback_31() { return &___DisconnectAsyncCallback_31; }
	inline void set_DisconnectAsyncCallback_31(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___DisconnectAsyncCallback_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisconnectAsyncCallback_31), (void*)value);
	}

	inline static int32_t get_offset_of_BeginDisconnectCallback_32() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginDisconnectCallback_32)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginDisconnectCallback_32() const { return ___BeginDisconnectCallback_32; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginDisconnectCallback_32() { return &___BeginDisconnectCallback_32; }
	inline void set_BeginDisconnectCallback_32(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginDisconnectCallback_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginDisconnectCallback_32), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveAsyncCallback_33() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___ReceiveAsyncCallback_33)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_ReceiveAsyncCallback_33() const { return ___ReceiveAsyncCallback_33; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_ReceiveAsyncCallback_33() { return &___ReceiveAsyncCallback_33; }
	inline void set_ReceiveAsyncCallback_33(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___ReceiveAsyncCallback_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveAsyncCallback_33), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveCallback_34() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginReceiveCallback_34)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginReceiveCallback_34() const { return ___BeginReceiveCallback_34; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginReceiveCallback_34() { return &___BeginReceiveCallback_34; }
	inline void set_BeginReceiveCallback_34(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginReceiveCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveGenericCallback_35() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginReceiveGenericCallback_35)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginReceiveGenericCallback_35() const { return ___BeginReceiveGenericCallback_35; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginReceiveGenericCallback_35() { return &___BeginReceiveGenericCallback_35; }
	inline void set_BeginReceiveGenericCallback_35(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginReceiveGenericCallback_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveGenericCallback_35), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveFromAsyncCallback_36() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___ReceiveFromAsyncCallback_36)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_ReceiveFromAsyncCallback_36() const { return ___ReceiveFromAsyncCallback_36; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_ReceiveFromAsyncCallback_36() { return &___ReceiveFromAsyncCallback_36; }
	inline void set_ReceiveFromAsyncCallback_36(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___ReceiveFromAsyncCallback_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveFromAsyncCallback_36), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveFromCallback_37() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginReceiveFromCallback_37)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginReceiveFromCallback_37() const { return ___BeginReceiveFromCallback_37; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginReceiveFromCallback_37() { return &___BeginReceiveFromCallback_37; }
	inline void set_BeginReceiveFromCallback_37(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginReceiveFromCallback_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveFromCallback_37), (void*)value);
	}

	inline static int32_t get_offset_of_SendAsyncCallback_38() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___SendAsyncCallback_38)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_SendAsyncCallback_38() const { return ___SendAsyncCallback_38; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_SendAsyncCallback_38() { return &___SendAsyncCallback_38; }
	inline void set_SendAsyncCallback_38(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___SendAsyncCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendAsyncCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_BeginSendGenericCallback_39() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginSendGenericCallback_39)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginSendGenericCallback_39() const { return ___BeginSendGenericCallback_39; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginSendGenericCallback_39() { return &___BeginSendGenericCallback_39; }
	inline void set_BeginSendGenericCallback_39(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginSendGenericCallback_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginSendGenericCallback_39), (void*)value);
	}

	inline static int32_t get_offset_of_SendToAsyncCallback_40() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___SendToAsyncCallback_40)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_SendToAsyncCallback_40() const { return ___SendToAsyncCallback_40; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_SendToAsyncCallback_40() { return &___SendToAsyncCallback_40; }
	inline void set_SendToAsyncCallback_40(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___SendToAsyncCallback_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendToAsyncCallback_40), (void*)value);
	}
};


// System.Net.Sockets.TcpClient
struct  TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::m_ClientSocket
	Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___m_ClientSocket_0;
	// System.Boolean System.Net.Sockets.TcpClient::m_Active
	bool ___m_Active_1;
	// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::m_DataStream
	NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * ___m_DataStream_2;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.TcpClient::m_Family
	int32_t ___m_Family_3;
	// System.Boolean System.Net.Sockets.TcpClient::m_CleanedUp
	bool ___m_CleanedUp_4;

public:
	inline static int32_t get_offset_of_m_ClientSocket_0() { return static_cast<int32_t>(offsetof(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB, ___m_ClientSocket_0)); }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * get_m_ClientSocket_0() const { return ___m_ClientSocket_0; }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 ** get_address_of_m_ClientSocket_0() { return &___m_ClientSocket_0; }
	inline void set_m_ClientSocket_0(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * value)
	{
		___m_ClientSocket_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClientSocket_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_1() { return static_cast<int32_t>(offsetof(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB, ___m_Active_1)); }
	inline bool get_m_Active_1() const { return ___m_Active_1; }
	inline bool* get_address_of_m_Active_1() { return &___m_Active_1; }
	inline void set_m_Active_1(bool value)
	{
		___m_Active_1 = value;
	}

	inline static int32_t get_offset_of_m_DataStream_2() { return static_cast<int32_t>(offsetof(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB, ___m_DataStream_2)); }
	inline NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * get_m_DataStream_2() const { return ___m_DataStream_2; }
	inline NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA ** get_address_of_m_DataStream_2() { return &___m_DataStream_2; }
	inline void set_m_DataStream_2(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * value)
	{
		___m_DataStream_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DataStream_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_3() { return static_cast<int32_t>(offsetof(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB, ___m_Family_3)); }
	inline int32_t get_m_Family_3() const { return ___m_Family_3; }
	inline int32_t* get_address_of_m_Family_3() { return &___m_Family_3; }
	inline void set_m_Family_3(int32_t value)
	{
		___m_Family_3 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_4() { return static_cast<int32_t>(offsetof(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB, ___m_CleanedUp_4)); }
	inline bool get_m_CleanedUp_4() const { return ___m_CleanedUp_4; }
	inline bool* get_address_of_m_CleanedUp_4() { return &___m_CleanedUp_4; }
	inline void set_m_CleanedUp_4(bool value)
	{
		___m_CleanedUp_4 = value;
	}
};


// Telepathy.Message
struct  Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603  : public RuntimeObject
{
public:
	// System.Int32 Telepathy.Message::connectionId
	int32_t ___connectionId_0;
	// Telepathy.EventType Telepathy.Message::eventType
	int32_t ___eventType_1;
	// System.Byte[] Telepathy.Message::data
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data_2;

public:
	inline static int32_t get_offset_of_connectionId_0() { return static_cast<int32_t>(offsetof(Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603, ___connectionId_0)); }
	inline int32_t get_connectionId_0() const { return ___connectionId_0; }
	inline int32_t* get_address_of_connectionId_0() { return &___connectionId_0; }
	inline void set_connectionId_0(int32_t value)
	{
		___connectionId_0 = value;
	}

	inline static int32_t get_offset_of_eventType_1() { return static_cast<int32_t>(offsetof(Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603, ___eventType_1)); }
	inline int32_t get_eventType_1() const { return ___eventType_1; }
	inline int32_t* get_address_of_eventType_1() { return &___eventType_1; }
	inline void set_eventType_1(int32_t value)
	{
		___eventType_1 = value;
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603, ___data_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_data_2() const { return ___data_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_2), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// Mirror.LocalClient
struct  LocalClient_tE212625B6AD521629F4E826D3AD1220DBA5A19DC  : public NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980
{
public:
	// System.Collections.Generic.Queue`1<System.Byte[]> Mirror.LocalClient::packetQueue
	Queue_1_t8562F1B190CBBD67B4F5E105ECADB5DE3B24DD7F * ___packetQueue_6;

public:
	inline static int32_t get_offset_of_packetQueue_6() { return static_cast<int32_t>(offsetof(LocalClient_tE212625B6AD521629F4E826D3AD1220DBA5A19DC, ___packetQueue_6)); }
	inline Queue_1_t8562F1B190CBBD67B4F5E105ECADB5DE3B24DD7F * get_packetQueue_6() const { return ___packetQueue_6; }
	inline Queue_1_t8562F1B190CBBD67B4F5E105ECADB5DE3B24DD7F ** get_address_of_packetQueue_6() { return &___packetQueue_6; }
	inline void set_packetQueue_6(Queue_1_t8562F1B190CBBD67B4F5E105ECADB5DE3B24DD7F * value)
	{
		___packetQueue_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___packetQueue_6), (void*)value);
	}
};


// Mirror.SpawnDelegate
struct  SpawnDelegate_tD5F09787306269E04335315D8968A7994563A2D9  : public MulticastDelegate_t
{
public:

public:
};


// Mirror.UnSpawnDelegate
struct  UnSpawnDelegate_tC3DA8AD221C58FA5C6AA3BECA2B91E4DE1BE901A  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.String>
struct  Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Mirror.NetworkIdentity
struct  NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.UInt32 Mirror.NetworkIdentity::m_SceneId
	uint32_t ___m_SceneId_4;
	// System.Boolean Mirror.NetworkIdentity::m_ServerOnly
	bool ___m_ServerOnly_5;
	// System.Boolean Mirror.NetworkIdentity::m_LocalPlayerAuthority
	bool ___m_LocalPlayerAuthority_6;
	// System.Boolean Mirror.NetworkIdentity::m_IsServer
	bool ___m_IsServer_7;
	// Mirror.NetworkBehaviour[] Mirror.NetworkIdentity::m_NetworkBehaviours
	NetworkBehaviourU5BU5D_t0D4AB6368E07D49B1283AF28C12050F32CF3C33E* ___m_NetworkBehaviours_8;
	// System.Boolean Mirror.NetworkIdentity::m_Reset
	bool ___m_Reset_9;
	// System.Boolean Mirror.NetworkIdentity::<isClient>k__BackingField
	bool ___U3CisClientU3Ek__BackingField_10;
	// System.Boolean Mirror.NetworkIdentity::<isLocalPlayer>k__BackingField
	bool ___U3CisLocalPlayerU3Ek__BackingField_11;
	// System.Boolean Mirror.NetworkIdentity::<hasAuthority>k__BackingField
	bool ___U3ChasAuthorityU3Ek__BackingField_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnection> Mirror.NetworkIdentity::observers
	Dictionary_2_t3D5D57E98A772A4E3FDBEACEAA26B4E831EC7AD4 * ___observers_13;
	// System.UInt32 Mirror.NetworkIdentity::<netId>k__BackingField
	uint32_t ___U3CnetIdU3Ek__BackingField_14;
	// Mirror.NetworkConnection Mirror.NetworkIdentity::<clientAuthorityOwner>k__BackingField
	NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___U3CclientAuthorityOwnerU3Ek__BackingField_15;
	// Mirror.NetworkConnection Mirror.NetworkIdentity::<connectionToServer>k__BackingField
	NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___U3CconnectionToServerU3Ek__BackingField_16;
	// Mirror.NetworkConnection Mirror.NetworkIdentity::<connectionToClient>k__BackingField
	NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___U3CconnectionToClientU3Ek__BackingField_17;
	// System.String Mirror.NetworkIdentity::m_AssetId
	String_t* ___m_AssetId_19;

public:
	inline static int32_t get_offset_of_m_SceneId_4() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___m_SceneId_4)); }
	inline uint32_t get_m_SceneId_4() const { return ___m_SceneId_4; }
	inline uint32_t* get_address_of_m_SceneId_4() { return &___m_SceneId_4; }
	inline void set_m_SceneId_4(uint32_t value)
	{
		___m_SceneId_4 = value;
	}

	inline static int32_t get_offset_of_m_ServerOnly_5() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___m_ServerOnly_5)); }
	inline bool get_m_ServerOnly_5() const { return ___m_ServerOnly_5; }
	inline bool* get_address_of_m_ServerOnly_5() { return &___m_ServerOnly_5; }
	inline void set_m_ServerOnly_5(bool value)
	{
		___m_ServerOnly_5 = value;
	}

	inline static int32_t get_offset_of_m_LocalPlayerAuthority_6() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___m_LocalPlayerAuthority_6)); }
	inline bool get_m_LocalPlayerAuthority_6() const { return ___m_LocalPlayerAuthority_6; }
	inline bool* get_address_of_m_LocalPlayerAuthority_6() { return &___m_LocalPlayerAuthority_6; }
	inline void set_m_LocalPlayerAuthority_6(bool value)
	{
		___m_LocalPlayerAuthority_6 = value;
	}

	inline static int32_t get_offset_of_m_IsServer_7() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___m_IsServer_7)); }
	inline bool get_m_IsServer_7() const { return ___m_IsServer_7; }
	inline bool* get_address_of_m_IsServer_7() { return &___m_IsServer_7; }
	inline void set_m_IsServer_7(bool value)
	{
		___m_IsServer_7 = value;
	}

	inline static int32_t get_offset_of_m_NetworkBehaviours_8() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___m_NetworkBehaviours_8)); }
	inline NetworkBehaviourU5BU5D_t0D4AB6368E07D49B1283AF28C12050F32CF3C33E* get_m_NetworkBehaviours_8() const { return ___m_NetworkBehaviours_8; }
	inline NetworkBehaviourU5BU5D_t0D4AB6368E07D49B1283AF28C12050F32CF3C33E** get_address_of_m_NetworkBehaviours_8() { return &___m_NetworkBehaviours_8; }
	inline void set_m_NetworkBehaviours_8(NetworkBehaviourU5BU5D_t0D4AB6368E07D49B1283AF28C12050F32CF3C33E* value)
	{
		___m_NetworkBehaviours_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NetworkBehaviours_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Reset_9() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___m_Reset_9)); }
	inline bool get_m_Reset_9() const { return ___m_Reset_9; }
	inline bool* get_address_of_m_Reset_9() { return &___m_Reset_9; }
	inline void set_m_Reset_9(bool value)
	{
		___m_Reset_9 = value;
	}

	inline static int32_t get_offset_of_U3CisClientU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___U3CisClientU3Ek__BackingField_10)); }
	inline bool get_U3CisClientU3Ek__BackingField_10() const { return ___U3CisClientU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CisClientU3Ek__BackingField_10() { return &___U3CisClientU3Ek__BackingField_10; }
	inline void set_U3CisClientU3Ek__BackingField_10(bool value)
	{
		___U3CisClientU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CisLocalPlayerU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___U3CisLocalPlayerU3Ek__BackingField_11)); }
	inline bool get_U3CisLocalPlayerU3Ek__BackingField_11() const { return ___U3CisLocalPlayerU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CisLocalPlayerU3Ek__BackingField_11() { return &___U3CisLocalPlayerU3Ek__BackingField_11; }
	inline void set_U3CisLocalPlayerU3Ek__BackingField_11(bool value)
	{
		___U3CisLocalPlayerU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3ChasAuthorityU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___U3ChasAuthorityU3Ek__BackingField_12)); }
	inline bool get_U3ChasAuthorityU3Ek__BackingField_12() const { return ___U3ChasAuthorityU3Ek__BackingField_12; }
	inline bool* get_address_of_U3ChasAuthorityU3Ek__BackingField_12() { return &___U3ChasAuthorityU3Ek__BackingField_12; }
	inline void set_U3ChasAuthorityU3Ek__BackingField_12(bool value)
	{
		___U3ChasAuthorityU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_observers_13() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___observers_13)); }
	inline Dictionary_2_t3D5D57E98A772A4E3FDBEACEAA26B4E831EC7AD4 * get_observers_13() const { return ___observers_13; }
	inline Dictionary_2_t3D5D57E98A772A4E3FDBEACEAA26B4E831EC7AD4 ** get_address_of_observers_13() { return &___observers_13; }
	inline void set_observers_13(Dictionary_2_t3D5D57E98A772A4E3FDBEACEAA26B4E831EC7AD4 * value)
	{
		___observers_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observers_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnetIdU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___U3CnetIdU3Ek__BackingField_14)); }
	inline uint32_t get_U3CnetIdU3Ek__BackingField_14() const { return ___U3CnetIdU3Ek__BackingField_14; }
	inline uint32_t* get_address_of_U3CnetIdU3Ek__BackingField_14() { return &___U3CnetIdU3Ek__BackingField_14; }
	inline void set_U3CnetIdU3Ek__BackingField_14(uint32_t value)
	{
		___U3CnetIdU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CclientAuthorityOwnerU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___U3CclientAuthorityOwnerU3Ek__BackingField_15)); }
	inline NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * get_U3CclientAuthorityOwnerU3Ek__BackingField_15() const { return ___U3CclientAuthorityOwnerU3Ek__BackingField_15; }
	inline NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 ** get_address_of_U3CclientAuthorityOwnerU3Ek__BackingField_15() { return &___U3CclientAuthorityOwnerU3Ek__BackingField_15; }
	inline void set_U3CclientAuthorityOwnerU3Ek__BackingField_15(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * value)
	{
		___U3CclientAuthorityOwnerU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CclientAuthorityOwnerU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CconnectionToServerU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___U3CconnectionToServerU3Ek__BackingField_16)); }
	inline NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * get_U3CconnectionToServerU3Ek__BackingField_16() const { return ___U3CconnectionToServerU3Ek__BackingField_16; }
	inline NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 ** get_address_of_U3CconnectionToServerU3Ek__BackingField_16() { return &___U3CconnectionToServerU3Ek__BackingField_16; }
	inline void set_U3CconnectionToServerU3Ek__BackingField_16(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * value)
	{
		___U3CconnectionToServerU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CconnectionToServerU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CconnectionToClientU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___U3CconnectionToClientU3Ek__BackingField_17)); }
	inline NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * get_U3CconnectionToClientU3Ek__BackingField_17() const { return ___U3CconnectionToClientU3Ek__BackingField_17; }
	inline NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 ** get_address_of_U3CconnectionToClientU3Ek__BackingField_17() { return &___U3CconnectionToClientU3Ek__BackingField_17; }
	inline void set_U3CconnectionToClientU3Ek__BackingField_17(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * value)
	{
		___U3CconnectionToClientU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CconnectionToClientU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_AssetId_19() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___m_AssetId_19)); }
	inline String_t* get_m_AssetId_19() const { return ___m_AssetId_19; }
	inline String_t** get_address_of_m_AssetId_19() { return &___m_AssetId_19; }
	inline void set_m_AssetId_19(String_t* value)
	{
		___m_AssetId_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AssetId_19), (void*)value);
	}
};

struct NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.UInt32,Mirror.NetworkIdentity> Mirror.NetworkIdentity::spawned
	Dictionary_2_t9788E6486FCC0EBB64606CECE92328ED9703E80E * ___spawned_18;
	// System.UInt32 Mirror.NetworkIdentity::s_NextNetworkId
	uint32_t ___s_NextNetworkId_20;
	// Mirror.NetworkIdentity_ClientAuthorityCallback Mirror.NetworkIdentity::clientAuthorityCallback
	ClientAuthorityCallback_tAEAA8B0506C32E8378FB6AA7C1EC405DEFEEC02D * ___clientAuthorityCallback_21;
	// Mirror.NetworkWriter Mirror.NetworkIdentity::onSerializeWriter
	NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___onSerializeWriter_22;
	// Mirror.UpdateVarsMessage Mirror.NetworkIdentity::varsMessage
	UpdateVarsMessage_tEE310E3D93629AB8305DDD549F8D98F0E5D8DFF1 * ___varsMessage_23;

public:
	inline static int32_t get_offset_of_spawned_18() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870_StaticFields, ___spawned_18)); }
	inline Dictionary_2_t9788E6486FCC0EBB64606CECE92328ED9703E80E * get_spawned_18() const { return ___spawned_18; }
	inline Dictionary_2_t9788E6486FCC0EBB64606CECE92328ED9703E80E ** get_address_of_spawned_18() { return &___spawned_18; }
	inline void set_spawned_18(Dictionary_2_t9788E6486FCC0EBB64606CECE92328ED9703E80E * value)
	{
		___spawned_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawned_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_NextNetworkId_20() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870_StaticFields, ___s_NextNetworkId_20)); }
	inline uint32_t get_s_NextNetworkId_20() const { return ___s_NextNetworkId_20; }
	inline uint32_t* get_address_of_s_NextNetworkId_20() { return &___s_NextNetworkId_20; }
	inline void set_s_NextNetworkId_20(uint32_t value)
	{
		___s_NextNetworkId_20 = value;
	}

	inline static int32_t get_offset_of_clientAuthorityCallback_21() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870_StaticFields, ___clientAuthorityCallback_21)); }
	inline ClientAuthorityCallback_tAEAA8B0506C32E8378FB6AA7C1EC405DEFEEC02D * get_clientAuthorityCallback_21() const { return ___clientAuthorityCallback_21; }
	inline ClientAuthorityCallback_tAEAA8B0506C32E8378FB6AA7C1EC405DEFEEC02D ** get_address_of_clientAuthorityCallback_21() { return &___clientAuthorityCallback_21; }
	inline void set_clientAuthorityCallback_21(ClientAuthorityCallback_tAEAA8B0506C32E8378FB6AA7C1EC405DEFEEC02D * value)
	{
		___clientAuthorityCallback_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientAuthorityCallback_21), (void*)value);
	}

	inline static int32_t get_offset_of_onSerializeWriter_22() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870_StaticFields, ___onSerializeWriter_22)); }
	inline NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * get_onSerializeWriter_22() const { return ___onSerializeWriter_22; }
	inline NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D ** get_address_of_onSerializeWriter_22() { return &___onSerializeWriter_22; }
	inline void set_onSerializeWriter_22(NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * value)
	{
		___onSerializeWriter_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onSerializeWriter_22), (void*)value);
	}

	inline static int32_t get_offset_of_varsMessage_23() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870_StaticFields, ___varsMessage_23)); }
	inline UpdateVarsMessage_tEE310E3D93629AB8305DDD549F8D98F0E5D8DFF1 * get_varsMessage_23() const { return ___varsMessage_23; }
	inline UpdateVarsMessage_tEE310E3D93629AB8305DDD549F8D98F0E5D8DFF1 ** get_address_of_varsMessage_23() { return &___varsMessage_23; }
	inline void set_varsMessage_23(UpdateVarsMessage_tEE310E3D93629AB8305DDD549F8D98F0E5D8DFF1 * value)
	{
		___varsMessage_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___varsMessage_23), (void*)value);
	}
};


// Mirror.NetworkStartPosition
struct  NetworkStartPosition_t1099D5268874C50B9E17E6714388AFA8E227A464  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// Mirror.Transport
struct  Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Events.UnityEvent Mirror.Transport::OnClientConnected
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___OnClientConnected_5;
	// Mirror.UnityEventByteArray Mirror.Transport::OnClientDataReceived
	UnityEventByteArray_t8F9C385E1AFA9E13C18F58FAA2CC7D062BD6E07E * ___OnClientDataReceived_6;
	// Mirror.UnityEventException Mirror.Transport::OnClientError
	UnityEventException_tC51123DDAD93C3B3E6F3C32395828A4FEA1CAC74 * ___OnClientError_7;
	// UnityEngine.Events.UnityEvent Mirror.Transport::OnClientDisconnected
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___OnClientDisconnected_8;
	// Mirror.UnityEventInt Mirror.Transport::OnServerConnected
	UnityEventInt_t25605BA0F5D789946A94CBAF118716E9FF3EE69A * ___OnServerConnected_9;
	// Mirror.UnityEventIntByteArray Mirror.Transport::OnServerDataReceived
	UnityEventIntByteArray_t5B46D154F0F9D94AB13839D6B8CA25DD9E9013CF * ___OnServerDataReceived_10;
	// Mirror.UnityEventIntException Mirror.Transport::OnServerError
	UnityEventIntException_t4C17526221B8BEEAA11C8D30DB004ACE4F1BEFF4 * ___OnServerError_11;
	// Mirror.UnityEventInt Mirror.Transport::OnServerDisconnected
	UnityEventInt_t25605BA0F5D789946A94CBAF118716E9FF3EE69A * ___OnServerDisconnected_12;

public:
	inline static int32_t get_offset_of_OnClientConnected_5() { return static_cast<int32_t>(offsetof(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195, ___OnClientConnected_5)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_OnClientConnected_5() const { return ___OnClientConnected_5; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_OnClientConnected_5() { return &___OnClientConnected_5; }
	inline void set_OnClientConnected_5(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___OnClientConnected_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientConnected_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnClientDataReceived_6() { return static_cast<int32_t>(offsetof(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195, ___OnClientDataReceived_6)); }
	inline UnityEventByteArray_t8F9C385E1AFA9E13C18F58FAA2CC7D062BD6E07E * get_OnClientDataReceived_6() const { return ___OnClientDataReceived_6; }
	inline UnityEventByteArray_t8F9C385E1AFA9E13C18F58FAA2CC7D062BD6E07E ** get_address_of_OnClientDataReceived_6() { return &___OnClientDataReceived_6; }
	inline void set_OnClientDataReceived_6(UnityEventByteArray_t8F9C385E1AFA9E13C18F58FAA2CC7D062BD6E07E * value)
	{
		___OnClientDataReceived_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientDataReceived_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnClientError_7() { return static_cast<int32_t>(offsetof(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195, ___OnClientError_7)); }
	inline UnityEventException_tC51123DDAD93C3B3E6F3C32395828A4FEA1CAC74 * get_OnClientError_7() const { return ___OnClientError_7; }
	inline UnityEventException_tC51123DDAD93C3B3E6F3C32395828A4FEA1CAC74 ** get_address_of_OnClientError_7() { return &___OnClientError_7; }
	inline void set_OnClientError_7(UnityEventException_tC51123DDAD93C3B3E6F3C32395828A4FEA1CAC74 * value)
	{
		___OnClientError_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientError_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnClientDisconnected_8() { return static_cast<int32_t>(offsetof(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195, ___OnClientDisconnected_8)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_OnClientDisconnected_8() const { return ___OnClientDisconnected_8; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_OnClientDisconnected_8() { return &___OnClientDisconnected_8; }
	inline void set_OnClientDisconnected_8(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___OnClientDisconnected_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientDisconnected_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnServerConnected_9() { return static_cast<int32_t>(offsetof(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195, ___OnServerConnected_9)); }
	inline UnityEventInt_t25605BA0F5D789946A94CBAF118716E9FF3EE69A * get_OnServerConnected_9() const { return ___OnServerConnected_9; }
	inline UnityEventInt_t25605BA0F5D789946A94CBAF118716E9FF3EE69A ** get_address_of_OnServerConnected_9() { return &___OnServerConnected_9; }
	inline void set_OnServerConnected_9(UnityEventInt_t25605BA0F5D789946A94CBAF118716E9FF3EE69A * value)
	{
		___OnServerConnected_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerConnected_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnServerDataReceived_10() { return static_cast<int32_t>(offsetof(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195, ___OnServerDataReceived_10)); }
	inline UnityEventIntByteArray_t5B46D154F0F9D94AB13839D6B8CA25DD9E9013CF * get_OnServerDataReceived_10() const { return ___OnServerDataReceived_10; }
	inline UnityEventIntByteArray_t5B46D154F0F9D94AB13839D6B8CA25DD9E9013CF ** get_address_of_OnServerDataReceived_10() { return &___OnServerDataReceived_10; }
	inline void set_OnServerDataReceived_10(UnityEventIntByteArray_t5B46D154F0F9D94AB13839D6B8CA25DD9E9013CF * value)
	{
		___OnServerDataReceived_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerDataReceived_10), (void*)value);
	}

	inline static int32_t get_offset_of_OnServerError_11() { return static_cast<int32_t>(offsetof(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195, ___OnServerError_11)); }
	inline UnityEventIntException_t4C17526221B8BEEAA11C8D30DB004ACE4F1BEFF4 * get_OnServerError_11() const { return ___OnServerError_11; }
	inline UnityEventIntException_t4C17526221B8BEEAA11C8D30DB004ACE4F1BEFF4 ** get_address_of_OnServerError_11() { return &___OnServerError_11; }
	inline void set_OnServerError_11(UnityEventIntException_t4C17526221B8BEEAA11C8D30DB004ACE4F1BEFF4 * value)
	{
		___OnServerError_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerError_11), (void*)value);
	}

	inline static int32_t get_offset_of_OnServerDisconnected_12() { return static_cast<int32_t>(offsetof(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195, ___OnServerDisconnected_12)); }
	inline UnityEventInt_t25605BA0F5D789946A94CBAF118716E9FF3EE69A * get_OnServerDisconnected_12() const { return ___OnServerDisconnected_12; }
	inline UnityEventInt_t25605BA0F5D789946A94CBAF118716E9FF3EE69A ** get_address_of_OnServerDisconnected_12() { return &___OnServerDisconnected_12; }
	inline void set_OnServerDisconnected_12(UnityEventInt_t25605BA0F5D789946A94CBAF118716E9FF3EE69A * value)
	{
		___OnServerDisconnected_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerDisconnected_12), (void*)value);
	}
};

struct Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195_StaticFields
{
public:
	// Mirror.Transport Mirror.Transport::activeTransport
	Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * ___activeTransport_4;

public:
	inline static int32_t get_offset_of_activeTransport_4() { return static_cast<int32_t>(offsetof(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195_StaticFields, ___activeTransport_4)); }
	inline Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * get_activeTransport_4() const { return ___activeTransport_4; }
	inline Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 ** get_address_of_activeTransport_4() { return &___activeTransport_4; }
	inline void set_activeTransport_4(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * value)
	{
		___activeTransport_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeTransport_4), (void*)value);
	}
};


// Mirror.TelepathyTransport
struct  TelepathyTransport_tDEC703A55ECE19175BBCDBBBFBAAF35B243F4918  : public Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195
{
public:
	// System.UInt16 Mirror.TelepathyTransport::port
	uint16_t ___port_13;
	// System.Boolean Mirror.TelepathyTransport::NoDelay
	bool ___NoDelay_14;
	// Telepathy.Client Mirror.TelepathyTransport::client
	Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * ___client_15;
	// Telepathy.Server Mirror.TelepathyTransport::server
	Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * ___server_16;

public:
	inline static int32_t get_offset_of_port_13() { return static_cast<int32_t>(offsetof(TelepathyTransport_tDEC703A55ECE19175BBCDBBBFBAAF35B243F4918, ___port_13)); }
	inline uint16_t get_port_13() const { return ___port_13; }
	inline uint16_t* get_address_of_port_13() { return &___port_13; }
	inline void set_port_13(uint16_t value)
	{
		___port_13 = value;
	}

	inline static int32_t get_offset_of_NoDelay_14() { return static_cast<int32_t>(offsetof(TelepathyTransport_tDEC703A55ECE19175BBCDBBBFBAAF35B243F4918, ___NoDelay_14)); }
	inline bool get_NoDelay_14() const { return ___NoDelay_14; }
	inline bool* get_address_of_NoDelay_14() { return &___NoDelay_14; }
	inline void set_NoDelay_14(bool value)
	{
		___NoDelay_14 = value;
	}

	inline static int32_t get_offset_of_client_15() { return static_cast<int32_t>(offsetof(TelepathyTransport_tDEC703A55ECE19175BBCDBBBFBAAF35B243F4918, ___client_15)); }
	inline Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * get_client_15() const { return ___client_15; }
	inline Client_t00748E10E80324FD9D1C491A162829231DB6A3FA ** get_address_of_client_15() { return &___client_15; }
	inline void set_client_15(Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * value)
	{
		___client_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_15), (void*)value);
	}

	inline static int32_t get_offset_of_server_16() { return static_cast<int32_t>(offsetof(TelepathyTransport_tDEC703A55ECE19175BBCDBBBFBAAF35B243F4918, ___server_16)); }
	inline Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * get_server_16() const { return ___server_16; }
	inline Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 ** get_address_of_server_16() { return &___server_16; }
	inline void set_server_16(Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * value)
	{
		___server_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___server_16), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean Mirror.NetworkClient::Send<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkClient_Send_TisRuntimeObject_m99D3FCC2A8AB8F1ACC4C548D18D970FE04A278DF_gshared (NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980 * __this, RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void Mirror.SyncList`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_mA186BD2476430CD549976685807C50C97464D3D3_gshared (SyncList_1_t033CEC0EDA490F9D66877E1293C8F60E74DCF81D * __this, const RuntimeMethod* method);
// System.Void Mirror.SyncList`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_m586A3A332EE27FFE087998AC680D1A86E847D380_gshared (SyncList_1_tF2335EDF773695C413A424569EB73B0F8B402649 * __this, const RuntimeMethod* method);
// System.Void Mirror.SyncList`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_m619B6F305570F672DBEB3B88E5E740B01D2BECBC_gshared (SyncList_1_tC1F959EAA42CFA5B7CD120EC08C2E89988981E32 * __this, const RuntimeMethod* method);
// System.Void Mirror.SyncList`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_mBE1AA9390D4E3D044539F4CCC47C171F0DEA8AA0_gshared (SyncList_1_t8EED65FE42C2CE7ACE60A04F6517E2D2C8D98B28 * __this, const RuntimeMethod* method);
// System.Void Mirror.SyncList`1<System.UInt32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_m23D944C8E6AD1D72C974724BE217994CA0A65654_gshared (SyncList_1_t958D769BAD089D33B0B7FD35E50BE7B2870AF9BE * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, RuntimeObject * ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mAC9BEEF287D58E79A447A57E28D3679F9B199D70_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, int32_t ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Int32,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_mD7759E9B44BDD5ACC4EC965321EBFF5A0833EC28_gshared (UnityEvent_2_t4FDDA2CA7DF86DE12BCFF756C8BF909C18B813F7 * __this, int32_t ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m12D1C0BBE742C2537335B7E2B71F7E42A421A6FD_gshared (Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m38CD236F782AA440F6DDB5D90B4C9DA24CDBA3A7_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m1EF01690E1F8F81E7C190F8D9610573D5E59490C_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_mAC30D6D983750F2926DB907262BAF74AEEBB4486_gshared (UnityEvent_2_t4FDDA2CA7DF86DE12BCFF756C8BF909C18B813F7 * __this, const RuntimeMethod* method);

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0 (Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkManager::RegisterStartPosition(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_RegisterStartPosition_m42DF73F529EE603EE7357CD459379773C2522422 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___start0, const RuntimeMethod* method);
// System.Void Mirror.NetworkManager::UnRegisterStartPosition(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_UnRegisterStartPosition_mCB4D63F4F4B3AE931734137C157E16D70DE0E80E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___start0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mA301E9A9D03758CBE09171E0C140CCD06BC9F860 (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Void Mirror.ExponentialMovingAverage::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExponentialMovingAverage__ctor_m94233DC926A979DB78A496A823CB75B922107DAE (ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 * __this, int32_t ___n0, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  Stopwatch_get_Elapsed_m6735B32BFB466FC4F52112AC3493D37404D184BB (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_m0F8F314166E6D1F9D36F32EB1272451EDE56B4EA (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * __this, const RuntimeMethod* method);
// System.Double Mirror.NetworkTime::LocalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTime_LocalTime_m46D72F34B4AA99EDBAA5E4E700D89222956A0E8D (const RuntimeMethod* method);
// System.Void Mirror.NetworkPingMessage::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPingMessage__ctor_m2AEA5FF630B47A4436B6AC12994B88BA365BA7BB (NetworkPingMessage_t0CD9DEB4D3F4E46C724EC1537BBE43EDE4DA18F9 * __this, double ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8 (const RuntimeMethod* method);
// Mirror.NetworkPingMessage Mirror.NetworkTime::GetPing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkPingMessage_t0CD9DEB4D3F4E46C724EC1537BBE43EDE4DA18F9 * NetworkTime_GetPing_m137613F558B9667BDCA89F84EC4D46EE12EA0B2F (const RuntimeMethod* method);
// System.Boolean Mirror.NetworkClient::Send<Mirror.NetworkPingMessage>(T)
inline bool NetworkClient_Send_TisNetworkPingMessage_t0CD9DEB4D3F4E46C724EC1537BBE43EDE4DA18F9_m3C30C129377F5631FAB3010554F37DC11E344699 (NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980 * __this, NetworkPingMessage_t0CD9DEB4D3F4E46C724EC1537BBE43EDE4DA18F9 * ___message0, const RuntimeMethod* method)
{
	return ((  bool (*) (NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980 *, NetworkPingMessage_t0CD9DEB4D3F4E46C724EC1537BBE43EDE4DA18F9 *, const RuntimeMethod*))NetworkClient_Send_TisRuntimeObject_m99D3FCC2A8AB8F1ACC4C548D18D970FE04A278DF_gshared)(__this, ___message0, method);
}
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Mirror.NetworkPongMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPongMessage__ctor_mFA78846F59B5D7B7394699AFB30FD149CC946975 (NetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB * __this, const RuntimeMethod* method);
// System.Void Mirror.ExponentialMovingAverage::Add(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExponentialMovingAverage_Add_m93C60D1E1B898CFE362304BC5FED9228A308D5D8 (ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 * __this, double ___newValue0, const RuntimeMethod* method);
// System.Double System.Math::Max(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Max_mBC1E4E7E10DF950E160FB4E2367AAE4B2158F351 (double ___val10, double ___val21, const RuntimeMethod* method);
// System.Double System.Math::Min(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Min_m18EB8E9F2EBAF3ACB521CDB9BBC4E358103F3075 (double ___val10, double ___val21, const RuntimeMethod* method);
// System.Double Mirror.ExponentialMovingAverage::get_Value()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR double ExponentialMovingAverage_get_Value_m3CA532CA169F336D8E94939A23F78BDCCCDE02F4_inline (ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 * __this, const RuntimeMethod* method);
// System.Double Mirror.ExponentialMovingAverage::get_Var()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR double ExponentialMovingAverage_get_Var_m6B5FB7D5E92B0E0AB92C70EEAF83ED5190261983_inline (ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 * __this, const RuntimeMethod* method);
// System.Double Mirror.NetworkTime::get_timeVar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTime_get_timeVar_m5A5DE65A16086AFA62272CBFB26EAC043D59597B (const RuntimeMethod* method);
// System.Double Mirror.NetworkTime::get_rttVar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTime_get_rttVar_mC0E69BE6C3FB031360A6FABCC684E9B9839AFA60 (const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriter::WritePackedUInt32(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_WritePackedUInt32_m0AA6DAF853C4EAA3357E73394772DD630A334180 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriter::WriteBytesAndSize(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_WriteBytesAndSize_m2D3F0D3F5370947CD9FB401ECF09A2ECC66A06D6 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriter::WritePackedUInt64(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_WritePackedUInt64_m3573741FFF002D411A0F41BF5D90C289B53D4B6C (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriter::Write(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriter::Write(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mFDFA74F66595FD2B8CE360183D1A92B575F0A76E (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_m31EDC3262BE39D2F6464B15397F882237E6158C3 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84 (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriter::Write(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m0191249E50303196C512C2E190FFAE6E493AEEEE (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Plane::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Plane_get_distance_m5358B80C35E1E295C0133E7DC6449BB09C456DEE (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Ray_get_direction_m9E6468CD87844B437FC4B93491E63D388322F76E (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Ray_get_origin_m3773CA7B1E2F26F6F1447652B485D86C0BEC5187 (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, const RuntimeMethod* method);
// System.Byte[] System.Guid::ToByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Guid_ToByteArray_m5E99B09A26EA3A1943CC8FE697E247DAC5465223 (Guid_t * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.UInt32 Mirror.NetworkIdentity::get_netId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint32_t NetworkIdentity_get_netId_m3CAE8990CFC9FE1389B3001802CB481389D99CD4_inline (NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Mirror.NetworkIdentity>()
inline NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * Component_GetComponent_TisNetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870_m68FD22ADF9BFAFC0FD976A554EF474B8919C8288 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Mirror.NetworkIdentity>()
inline NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * GameObject_GetComponent_TisNetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870_m73308E6CE1D9B3879BA659C6AF56071F48515F68 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m9D0F92C76EFEDA651B678A98EB693FD945286DC2 (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * __this, const RuntimeMethod* method);
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_m2E92F4E5096905E2E7487E003AB7B3CC5C5EC185 (BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___output0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Mirror.EmptyMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyMessage__ctor_m29AEA6EEACBE3394A4939DB6BBBFB73E37D9E6D7 (EmptyMessage_t50A033E9118B8078123AC2274445B7ED013612A0 * __this, const RuntimeMethod* method);
// System.UInt32 Mirror.NetworkReader::ReadPackedUInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetworkReader_ReadPackedUInt32_mE3C7CB69F241D513E8459771731B355208C81557 (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * __this, const RuntimeMethod* method);
// System.Void Mirror.MessageBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageBase__ctor_m72CD982948A637ECBEA1994ED9AF0ABE6FACC0D1 (MessageBase_t18C829EC4363E125BF1E98E367DFBE721034BDC6 * __this, const RuntimeMethod* method);
// System.Int32 Mirror.NetworkReader::ReadInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkReader_ReadInt32_m40E407FDFCF04AAE05058E5376478164071DBC92 (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * __this, const RuntimeMethod* method);
// System.Byte[] Mirror.NetworkReader::ReadBytesAndSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* NetworkReader_ReadBytesAndSize_mCBCEE12AE67150B0A9B42124921F261D30AD1467 (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriter::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_mF34AF8CDC875453287DDDD75DCF23B1A9DFC0AE9 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriter::WriteBytesAndSize(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_WriteBytesAndSize_mA5F7C6175985B068D575B010DE0DA4B1B0490FF7 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, const RuntimeMethod* method);
// System.Void Mirror.RemoteCallMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteCallMessage__ctor_mCF4F70A0F3A8D44489806422B3084B49D7A590AC (RemoteCallMessage_t8F16BC5D89C9CE3BC22D315100ABBAAE02A9D31C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m7F5C473F39D5601486C1127DA0D52F2DC293FC35 (PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54 * __this, const RuntimeMethod* method);
// System.Void Mirror.StringMessage::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringMessage__ctor_m3076CDC8CA7C76C7E1110A68D3ED17FDAB990BB5 (StringMessage_t946707773BD82A3C9839A41982482EE7278FC05C * __this, String_t* ___v0, const RuntimeMethod* method);
// System.Void Mirror.StringMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringMessage__ctor_mA6349471BE8B33641F4381B2362DF8F3DA676DF0 (StringMessage_t946707773BD82A3C9839A41982482EE7278FC05C * __this, const RuntimeMethod* method);
// System.Guid Mirror.NetworkReader::ReadGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  NetworkReader_ReadGuid_mA6558ACF08B81E023E80E25A3080AB7AAD3FF29D (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Mirror.NetworkReader::ReadVector3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NetworkReader_ReadVector3_mF0D83898BCD3108EE6740E1DB26C8E3B40197F38 (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Mirror.NetworkReader::ReadQuaternion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  NetworkReader_ReadQuaternion_m6D231F49657C021CE3D7BE2135B9B773E9C9B2F1 (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriter::Write(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m70D2BE6600CEA5981B7BFF68E94E781F58600E71 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, Guid_t  ___value0, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriter::Write(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m58096E1234ECA8ADAE261992F79996E96AA487CD (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.String Mirror.NetworkReader::ReadString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkReader_ReadString_mAA56FAB8C151A6C883975E22098B47F18C7942A5 (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m31129D04023289A55447C3D1C425C16362B71135 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriter::Write(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_mFAEACAF1EEC31E3F62DAD55B33F5E2329B3444F7 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkReader::ReadBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkReader_ReadBoolean_mA2B6207654E1FBE72A6AEF02D0AD0F7883DFABBA (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * __this, const RuntimeMethod* method);
// System.Void Mirror.SyncList`1<System.Boolean>::.ctor()
inline void SyncList_1__ctor_mA186BD2476430CD549976685807C50C97464D3D3 (SyncList_1_t033CEC0EDA490F9D66877E1293C8F60E74DCF81D * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t033CEC0EDA490F9D66877E1293C8F60E74DCF81D *, const RuntimeMethod*))SyncList_1__ctor_mA186BD2476430CD549976685807C50C97464D3D3_gshared)(__this, method);
}
// System.Single Mirror.NetworkReader::ReadSingle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetworkReader_ReadSingle_m4DB124967BCA4D355FFD74CB84BFC2346205C138 (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * __this, const RuntimeMethod* method);
// System.Void Mirror.SyncList`1<System.Single>::.ctor()
inline void SyncList_1__ctor_m586A3A332EE27FFE087998AC680D1A86E847D380 (SyncList_1_tF2335EDF773695C413A424569EB73B0F8B402649 * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_tF2335EDF773695C413A424569EB73B0F8B402649 *, const RuntimeMethod*))SyncList_1__ctor_m586A3A332EE27FFE087998AC680D1A86E847D380_gshared)(__this, method);
}
// System.Void Mirror.SyncList`1<System.Int32>::.ctor()
inline void SyncList_1__ctor_m619B6F305570F672DBEB3B88E5E740B01D2BECBC (SyncList_1_tC1F959EAA42CFA5B7CD120EC08C2E89988981E32 * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_tC1F959EAA42CFA5B7CD120EC08C2E89988981E32 *, const RuntimeMethod*))SyncList_1__ctor_m619B6F305570F672DBEB3B88E5E740B01D2BECBC_gshared)(__this, method);
}
// System.Void Mirror.SyncList`1<System.String>::.ctor()
inline void SyncList_1__ctor_m4EB638BEE0D7B9DDE3B838A50E024B2C3B81F4F3 (SyncList_1_t705325F67F4AEE9A566FF3083F0ABAD0EB90F1BD * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t705325F67F4AEE9A566FF3083F0ABAD0EB90F1BD *, const RuntimeMethod*))SyncList_1__ctor_mBE1AA9390D4E3D044539F4CCC47C171F0DEA8AA0_gshared)(__this, method);
}
// System.Void Mirror.SyncList`1<System.UInt32>::.ctor()
inline void SyncList_1__ctor_m23D944C8E6AD1D72C974724BE217994CA0A65654 (SyncList_1_t958D769BAD089D33B0B7FD35E50BE7B2870AF9BE * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t958D769BAD089D33B0B7FD35E50BE7B2870AF9BE *, const RuntimeMethod*))SyncList_1__ctor_m23D944C8E6AD1D72C974724BE217994CA0A65654_gshared)(__this, method);
}
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3 (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 Telepathy.Server::NextConnectionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Server_NextConnectionId_mA859D97AA15DA3E1C1B8AA3B15F9F0693036A2FB (const RuntimeMethod* method);
// System.Boolean Telepathy.Client::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_get_Connected_m98098892072CD1FEB5926C8F0416422DAD4702FE (Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * __this, const RuntimeMethod* method);
// System.Void Telepathy.Client::Connect(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Connect_m5A61686AC8018F73202AE1005AB4FE6889B7060A (Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * __this, String_t* ___ip0, int32_t ___port1, const RuntimeMethod* method);
// System.Boolean Telepathy.Client::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_Send_m99ADE8A1004BB6B69291E06DF4032C1C3E950B4F (Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method);
// System.Boolean Telepathy.Common::GetNextMessage(Telepathy.Message&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Common_GetNextMessage_mFF794F304B59C60898F5F6927DD8EBD063864A28 (Common_tFCC994B3A027AC464326397B2D22751359949226 * __this, Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 ** ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte[]>::Invoke(!0)
inline void UnityEvent_1_Invoke_mE94F75B7336AB64579FB710C7B62220B8EB1EF3C (UnityEvent_1_t33C4AE804E4DFCF919C354213C40AC81F6BAB1AD * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t33C4AE804E4DFCF919C354213C40AC81F6BAB1AD *, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*))UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_gshared)(__this, ___arg00, method);
}
// System.Void Telepathy.Client::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Disconnect_m4F84F228BB93B41776E6ECDBC9D3753CE88673D3 (Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// System.Boolean Mirror.TelepathyTransport::ProcessClientMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TelepathyTransport_ProcessClientMessage_mE8C5AB3AC778AE489D3C768BF928DC64ACE24DC8 (TelepathyTransport_tDEC703A55ECE19175BBCDBBBFBAAF35B243F4918 * __this, const RuntimeMethod* method);
// System.Boolean Mirror.TelepathyTransport::ProcessServerMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TelepathyTransport_ProcessServerMessage_m259C848A6086174424B1A6E5D316182EFBA17E59 (TelepathyTransport_tDEC703A55ECE19175BBCDBBBFBAAF35B243F4918 * __this, const RuntimeMethod* method);
// System.Boolean Telepathy.Server::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_get_Active_m8A88A9B4EE0F8CC542518A444874585E2C6DA23E (Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * __this, const RuntimeMethod* method);
// System.Boolean Telepathy.Server::Start(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_Start_mDC7D017C87BAF8E28C0EEF8B87B0285271FDAD26 (Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * __this, int32_t ___port0, const RuntimeMethod* method);
// System.Boolean Telepathy.Server::Send(System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_Send_m7EBF1040EBD3E98CF7207F9BEE3C9C317E8902AE (Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * __this, int32_t ___connectionId0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(!0)
inline void UnityEvent_1_Invoke_mAC9BEEF287D58E79A447A57E28D3679F9B199D70 (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 *, int32_t, const RuntimeMethod*))UnityEvent_1_Invoke_mAC9BEEF287D58E79A447A57E28D3679F9B199D70_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<System.Int32,System.Byte[]>::Invoke(!0,!1)
inline void UnityEvent_2_Invoke_m6AABD556AD11F3503B7EF7D96CC390D16E80602A (UnityEvent_2_t59961C962823467177342BFD246272B5CCD1FB9F * __this, int32_t ___arg00, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t59961C962823467177342BFD246272B5CCD1FB9F *, int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*))UnityEvent_2_Invoke_mD7759E9B44BDD5ACC4EC965321EBFF5A0833EC28_gshared)(__this, ___arg00, ___arg11, method);
}
// System.Boolean Telepathy.Server::Disconnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_Disconnect_m76A6B045DDC94883F543150B79C2186CC29FB2C6 (Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * __this, int32_t ___connectionId0, const RuntimeMethod* method);
// System.String Telepathy.Server::GetClientAddress(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Server_GetClientAddress_m3A89CB4D5CFB895D546C53492F1B1A68B32E94AC (Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * __this, int32_t ___connectionId0, const RuntimeMethod* method);
// System.Void Telepathy.Server::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server_Stop_mF5732A0EEA771924FF5D204A2EDB26C4E404BC90 (Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * __this, const RuntimeMethod* method);
// System.Net.EndPoint System.Net.Sockets.TcpListener::get_LocalEndpoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * TcpListener_get_LocalEndpoint_m9C222867109B5ECC2B4730D16655E8184FF4F656 (TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * __this, const RuntimeMethod* method);
// System.Boolean Telepathy.Client::get_Connecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_get_Connecting_m4A163551916F14C2EF31648888C19DD1BE6BEA40 (Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * __this, const RuntimeMethod* method);
// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::get_Client()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * TcpClient_get_Client_m7EE266557B305926B1A845F3C75E2532899D4395_inline (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, const RuntimeMethod* method);
// System.Net.EndPoint System.Net.Sockets.Socket::get_RemoteEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * Socket_get_RemoteEndPoint_mD926D4C2BD8A8B534D992E177D155F7EF8685D20 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, const RuntimeMethod* method);
// System.Void Telepathy.Client::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_mCA926EB641779A5A0B7FC0A0BCC17F8E7D50796B (Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * __this, const RuntimeMethod* method);
// System.Void Telepathy.Server::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server__ctor_mEC48C7169D134409ABAF240CBE9415AAF5C44A6D (Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * __this, const RuntimeMethod* method);
// System.Void Mirror.Transport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transport__ctor_m95D842812D2D1430F44F53681EB4ECEB6FBA5BBC (Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * __this, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672 (const RuntimeMethod* method);
// System.Void Mirror.NetworkConnection::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkConnection__ctor_mE0BB14874077E4D57BF32824975934E8833B90FD (NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * __this, String_t* ___networkAddress0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Byte[]>::Enqueue(!0)
inline void Queue_1_Enqueue_mEF86147DA97BC52597094D71FCC03A167B7B397D (Queue_1_t8562F1B190CBBD67B4F5E105ECADB5DE3B24DD7F * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t8562F1B190CBBD67B4F5E105ECADB5DE3B24DD7F *, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*))Queue_1_Enqueue_m12D1C0BBE742C2537335B7E2B71F7E42A421A6FD_gshared)(__this, ___item0, method);
}
// Mirror.NetworkConnection Mirror.NetworkServer::get_localConnection()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * NetworkServer_get_localConnection_mEB7460522A686E4B4CE08AA092CAA1A963F9A42D_inline (const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte[]>::.ctor()
inline void UnityEvent_1__ctor_m92F7EFB8C3F2F732F07E445BAF5647170FB88AE2 (UnityEvent_1_t33C4AE804E4DFCF919C354213C40AC81F6BAB1AD * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t33C4AE804E4DFCF919C354213C40AC81F6BAB1AD *, const RuntimeMethod*))UnityEvent_1__ctor_m38CD236F782AA440F6DDB5D90B4C9DA24CDBA3A7_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Exception>::.ctor()
inline void UnityEvent_1__ctor_m5ED407B8A717F69AF2F7C7B986784DB3840EA637 (UnityEvent_1_t19D53D50B89FEA9EC653D142280287DC5047277A * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t19D53D50B89FEA9EC653D142280287DC5047277A *, const RuntimeMethod*))UnityEvent_1__ctor_m38CD236F782AA440F6DDB5D90B4C9DA24CDBA3A7_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
inline void UnityEvent_1__ctor_m1EF01690E1F8F81E7C190F8D9610573D5E59490C (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 *, const RuntimeMethod*))UnityEvent_1__ctor_m1EF01690E1F8F81E7C190F8D9610573D5E59490C_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<System.Int32,System.Byte[]>::.ctor()
inline void UnityEvent_2__ctor_m792A3968A997E15088CFED6C9C07F2343D4BB362 (UnityEvent_2_t59961C962823467177342BFD246272B5CCD1FB9F * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t59961C962823467177342BFD246272B5CCD1FB9F *, const RuntimeMethod*))UnityEvent_2__ctor_mAC30D6D983750F2926DB907262BAF74AEEBB4486_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<System.Int32,System.Exception>::.ctor()
inline void UnityEvent_2__ctor_m58212C267C1FC0ABDB1C3E6563369065892758D0 (UnityEvent_2_t9B9B1083EAE21A118772ECD9896B4EEA7D204675 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t9B9B1083EAE21A118772ECD9896B4EEA7D204675 *, const RuntimeMethod*))UnityEvent_2__ctor_mAC30D6D983750F2926DB907262BAF74AEEBB4486_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.NetworkSettingsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSettingsAttribute__ctor_mE000004126028ECCB2FB7C3127FB6BC9065083D9 (NetworkSettingsAttribute_t70DA30B0FB5638EA017F9C536EE5E6321E104E8E * __this, const RuntimeMethod* method)
{
	{
		__this->set_sendInterval_0((0.1f));
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.NetworkStartPosition::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStartPosition_Awake_m137AAB9D071F182D6E236D9FE1F455CD8BE25171 (NetworkStartPosition_t1099D5268874C50B9E17E6714388AFA8E227A464 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkStartPosition_Awake_m137AAB9D071F182D6E236D9FE1F455CD8BE25171_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE_il2cpp_TypeInfo_var);
		NetworkManager_RegisterStartPosition_m42DF73F529EE603EE7357CD459379773C2522422(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.NetworkStartPosition::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStartPosition_OnDestroy_m0B556CDDC1EC6898D42710671B5EB8780A5F2D28 (NetworkStartPosition_t1099D5268874C50B9E17E6714388AFA8E227A464 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkStartPosition_OnDestroy_m0B556CDDC1EC6898D42710671B5EB8780A5F2D28_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE_il2cpp_TypeInfo_var);
		NetworkManager_UnRegisterStartPosition_mCB4D63F4F4B3AE931734137C157E16D70DE0E80E(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.NetworkStartPosition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStartPosition__ctor_m919BCCB64779F2770552EF8E2A8E47945B7D8977 (NetworkStartPosition_t1099D5268874C50B9E17E6714388AFA8E227A464 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.NetworkTime::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTime__cctor_m07D953E704842F502A7AB2E5508504B87900580C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTime__cctor_m07D953E704842F502A7AB2E5508504B87900580C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->set_PingFrequency_0((2.0f));
		((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->set_PingWindowSize_1(((int32_t)10));
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_0 = (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 *)il2cpp_codegen_object_new(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mA301E9A9D03758CBE09171E0C140CCD06BC9F860(L_0, /*hidden argument*/NULL);
		((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->set_stopwatch_3(L_0);
		ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 * L_1 = (ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 *)il2cpp_codegen_object_new(ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943_il2cpp_TypeInfo_var);
		ExponentialMovingAverage__ctor_m94233DC926A979DB78A496A823CB75B922107DAE(L_1, ((int32_t)10), /*hidden argument*/NULL);
		((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->set__rtt_4(L_1);
		ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 * L_2 = (ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 *)il2cpp_codegen_object_new(ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943_il2cpp_TypeInfo_var);
		ExponentialMovingAverage__ctor_m94233DC926A979DB78A496A823CB75B922107DAE(L_2, ((int32_t)10), /*hidden argument*/NULL);
		((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->set__offset_5(L_2);
		((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->set_offsetMin_6((-1.7976931348623157E+308));
		((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->set_offsetMax_7((1.7976931348623157E+308));
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_3 = ((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->get_stopwatch_3();
		NullCheck(L_3);
		Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Double Mirror.NetworkTime::LocalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTime_LocalTime_m46D72F34B4AA99EDBAA5E4E700D89222956A0E8D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTime_LocalTime_m46D72F34B4AA99EDBAA5E4E700D89222956A0E8D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var);
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_0 = ((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->get_stopwatch_3();
		NullCheck(L_0);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = Stopwatch_get_Elapsed_m6735B32BFB466FC4F52112AC3493D37404D184BB(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		double L_2 = TimeSpan_get_TotalSeconds_m0F8F314166E6D1F9D36F32EB1272451EDE56B4EA((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Mirror.NetworkTime::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTime_Reset_m441A6AD7B673E76F8F22B104387E262B703FC76E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTime_Reset_m441A6AD7B673E76F8F22B104387E262B703FC76E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var);
		int32_t L_0 = ((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->get_PingWindowSize_1();
		ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 * L_1 = (ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 *)il2cpp_codegen_object_new(ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943_il2cpp_TypeInfo_var);
		ExponentialMovingAverage__ctor_m94233DC926A979DB78A496A823CB75B922107DAE(L_1, L_0, /*hidden argument*/NULL);
		((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->set__rtt_4(L_1);
		int32_t L_2 = ((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->get_PingWindowSize_1();
		ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 * L_3 = (ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 *)il2cpp_codegen_object_new(ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943_il2cpp_TypeInfo_var);
		ExponentialMovingAverage__ctor_m94233DC926A979DB78A496A823CB75B922107DAE(L_3, L_2, /*hidden argument*/NULL);
		((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->set__offset_5(L_3);
		((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->set_offsetMin_6((-1.7976931348623157E+308));
		((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->set_offsetMax_7((1.7976931348623157E+308));
		return;
	}
}
// Mirror.NetworkPingMessage Mirror.NetworkTime::GetPing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkPingMessage_t0CD9DEB4D3F4E46C724EC1537BBE43EDE4DA18F9 * NetworkTime_GetPing_m137613F558B9667BDCA89F84EC4D46EE12EA0B2F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTime_GetPing_m137613F558B9667BDCA89F84EC4D46EE12EA0B2F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var);
		double L_0 = NetworkTime_LocalTime_m46D72F34B4AA99EDBAA5E4E700D89222956A0E8D(/*hidden argument*/NULL);
		NetworkPingMessage_t0CD9DEB4D3F4E46C724EC1537BBE43EDE4DA18F9 * L_1 = (NetworkPingMessage_t0CD9DEB4D3F4E46C724EC1537BBE43EDE4DA18F9 *)il2cpp_codegen_object_new(NetworkPingMessage_t0CD9DEB4D3F4E46C724EC1537BBE43EDE4DA18F9_il2cpp_TypeInfo_var);
		NetworkPingMessage__ctor_m2AEA5FF630B47A4436B6AC12994B88BA365BA7BB(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Mirror.NetworkTime::UpdateClient(Mirror.NetworkClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTime_UpdateClient_mCB8823E5EA4E8B7BF185046CF9BCBAA91B427475 (NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980 * ___networkClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTime_UpdateClient_mCB8823E5EA4E8B7BF185046CF9BCBAA91B427475_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkPingMessage_t0CD9DEB4D3F4E46C724EC1537BBE43EDE4DA18F9 * V_0 = NULL;
	{
		float L_0 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var);
		double L_1 = ((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->get_lastPingTime_2();
		float L_2 = ((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->get_PingFrequency_0();
		if ((!(((double)((double)il2cpp_codegen_subtract((double)(((double)((double)L_0))), (double)L_1))) >= ((double)(((double)((double)L_2)))))))
		{
			goto IL_002d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var);
		NetworkPingMessage_t0CD9DEB4D3F4E46C724EC1537BBE43EDE4DA18F9 * L_3 = NetworkTime_GetPing_m137613F558B9667BDCA89F84EC4D46EE12EA0B2F(/*hidden argument*/NULL);
		V_0 = L_3;
		NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980 * L_4 = ___networkClient0;
		NetworkPingMessage_t0CD9DEB4D3F4E46C724EC1537BBE43EDE4DA18F9 * L_5 = V_0;
		NullCheck(L_4);
		NetworkClient_Send_TisNetworkPingMessage_t0CD9DEB4D3F4E46C724EC1537BBE43EDE4DA18F9_m3C30C129377F5631FAB3010554F37DC11E344699(L_4, L_5, /*hidden argument*/NetworkClient_Send_TisNetworkPingMessage_t0CD9DEB4D3F4E46C724EC1537BBE43EDE4DA18F9_m3C30C129377F5631FAB3010554F37DC11E344699_RuntimeMethod_var);
		float L_6 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->set_lastPingTime_2((((double)((double)L_6))));
	}

IL_002d:
	{
		return;
	}
}
// System.Void Mirror.NetworkTime::OnServerPing(Mirror.NetworkConnection,Mirror.NetworkPingMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTime_OnServerPing_m49D0C1C1424739F5CCB53B32790070206BE604AF (NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___conn0, NetworkPingMessage_t0CD9DEB4D3F4E46C724EC1537BBE43EDE4DA18F9 * ___msg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTime_OnServerPing_m49D0C1C1424739F5CCB53B32790070206BE604AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_tDDEE59742B3785AE4012E6097B8194A665059013_il2cpp_TypeInfo_var);
		bool L_0 = ((LogFilter_tDDEE59742B3785AE4012E6097B8194A665059013_StaticFields*)il2cpp_codegen_static_fields_for(LogFilter_tDDEE59742B3785AE4012E6097B8194A665059013_il2cpp_TypeInfo_var))->get_Debug_0();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_1 = ___conn0;
		String_t* L_2 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral9EB54FF1C0C96C2FE9047FAB9EAFA80A5E126E1C, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		NetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB * L_3 = (NetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB *)il2cpp_codegen_object_new(NetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB_il2cpp_TypeInfo_var);
		NetworkPongMessage__ctor_mFA78846F59B5D7B7394699AFB30FD149CC946975(L_3, /*hidden argument*/NULL);
		NetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB * L_4 = L_3;
		NetworkPingMessage_t0CD9DEB4D3F4E46C724EC1537BBE43EDE4DA18F9 * L_5 = ___msg1;
		NullCheck(L_5);
		double L_6 = ((DoubleMessage_t352EACB856C49375DF7876D6F621E097E6AA8F46 *)L_5)->get_value_0();
		NullCheck(L_4);
		L_4->set_clientTime_0(L_6);
		NetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB * L_7 = L_4;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var);
		double L_8 = NetworkTime_LocalTime_m46D72F34B4AA99EDBAA5E4E700D89222956A0E8D(/*hidden argument*/NULL);
		NullCheck(L_7);
		L_7->set_serverTime_1(L_8);
		V_0 = L_7;
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_9 = ___conn0;
		NetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB * L_10 = V_0;
		NullCheck(L_9);
		GenericVirtFuncInvoker2< bool, NetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB *, int32_t >::Invoke(NetworkConnection_Send_TisNetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB_mA2510EF59C4AA4DE981FA9482C841AA7DC749D86_RuntimeMethod_var, L_9, L_10, 0);
		return;
	}
}
// System.Void Mirror.NetworkTime::OnClientPong(Mirror.NetworkConnection,Mirror.NetworkPongMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTime_OnClientPong_mA993A35731EB0BAB69000E702B0E6DDC693723D7 (NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___conn0, NetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB * ___msg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTime_OnClientPong_mA993A35731EB0BAB69000E702B0E6DDC693723D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var);
		double L_0 = NetworkTime_LocalTime_m46D72F34B4AA99EDBAA5E4E700D89222956A0E8D(/*hidden argument*/NULL);
		double L_1 = L_0;
		NetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB * L_2 = ___msg1;
		NullCheck(L_2);
		double L_3 = L_2->get_clientTime_0();
		V_0 = ((double)il2cpp_codegen_subtract((double)L_1, (double)L_3));
		ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 * L_4 = ((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->get__rtt_4();
		double L_5 = V_0;
		NullCheck(L_4);
		ExponentialMovingAverage_Add_m93C60D1E1B898CFE362304BC5FED9228A308D5D8(L_4, L_5, /*hidden argument*/NULL);
		double L_6 = L_1;
		double L_7 = V_0;
		NetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB * L_8 = ___msg1;
		NullCheck(L_8);
		double L_9 = L_8->get_serverTime_1();
		V_1 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_subtract((double)L_6, (double)((double)il2cpp_codegen_multiply((double)L_7, (double)(0.5))))), (double)L_9));
		double L_10 = L_6;
		double L_11 = V_0;
		NetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB * L_12 = ___msg1;
		NullCheck(L_12);
		double L_13 = L_12->get_serverTime_1();
		V_2 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_subtract((double)L_10, (double)L_11)), (double)L_13));
		NetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB * L_14 = ___msg1;
		NullCheck(L_14);
		double L_15 = L_14->get_serverTime_1();
		V_3 = ((double)il2cpp_codegen_subtract((double)L_10, (double)L_15));
		double L_16 = ((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->get_offsetMin_6();
		double L_17 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_18 = Math_Max_mBC1E4E7E10DF950E160FB4E2367AAE4B2158F351(L_16, L_17, /*hidden argument*/NULL);
		((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->set_offsetMin_6(L_18);
		double L_19 = ((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->get_offsetMax_7();
		double L_20 = V_3;
		double L_21 = Math_Min_m18EB8E9F2EBAF3ACB521CDB9BBC4E358103F3075(L_19, L_20, /*hidden argument*/NULL);
		((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->set_offsetMax_7(L_21);
		ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 * L_22 = ((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->get__offset_5();
		NullCheck(L_22);
		double L_23 = ExponentialMovingAverage_get_Value_m3CA532CA169F336D8E94939A23F78BDCCCDE02F4_inline(L_22, /*hidden argument*/NULL);
		double L_24 = ((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->get_offsetMin_6();
		if ((((double)L_23) < ((double)L_24)))
		{
			goto IL_0083;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var);
		ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 * L_25 = ((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->get__offset_5();
		NullCheck(L_25);
		double L_26 = ExponentialMovingAverage_get_Value_m3CA532CA169F336D8E94939A23F78BDCCCDE02F4_inline(L_25, /*hidden argument*/NULL);
		double L_27 = ((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->get_offsetMax_7();
		if ((!(((double)L_26) > ((double)L_27))))
		{
			goto IL_009e;
		}
	}

IL_0083:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var);
		int32_t L_28 = ((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->get_PingWindowSize_1();
		ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 * L_29 = (ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 *)il2cpp_codegen_object_new(ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943_il2cpp_TypeInfo_var);
		ExponentialMovingAverage__ctor_m94233DC926A979DB78A496A823CB75B922107DAE(L_29, L_28, /*hidden argument*/NULL);
		((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->set__offset_5(L_29);
		ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 * L_30 = ((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->get__offset_5();
		double L_31 = V_1;
		NullCheck(L_30);
		ExponentialMovingAverage_Add_m93C60D1E1B898CFE362304BC5FED9228A308D5D8(L_30, L_31, /*hidden argument*/NULL);
		return;
	}

IL_009e:
	{
		double L_32 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var);
		double L_33 = ((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->get_offsetMin_6();
		if ((((double)L_32) >= ((double)L_33)))
		{
			goto IL_00ae;
		}
	}
	{
		double L_34 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var);
		double L_35 = ((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->get_offsetMax_7();
		if ((!(((double)L_34) <= ((double)L_35))))
		{
			goto IL_00b9;
		}
	}

IL_00ae:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var);
		ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 * L_36 = ((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->get__offset_5();
		double L_37 = V_1;
		NullCheck(L_36);
		ExponentialMovingAverage_Add_m93C60D1E1B898CFE362304BC5FED9228A308D5D8(L_36, L_37, /*hidden argument*/NULL);
	}

IL_00b9:
	{
		return;
	}
}
// System.Double Mirror.NetworkTime::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTime_get_time_m2B13720A2E1A06BBF8D1F1F2DC84545C23FDE698 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTime_get_time_m2B13720A2E1A06BBF8D1F1F2DC84545C23FDE698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var);
		double L_0 = NetworkTime_LocalTime_m46D72F34B4AA99EDBAA5E4E700D89222956A0E8D(/*hidden argument*/NULL);
		ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 * L_1 = ((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->get__offset_5();
		NullCheck(L_1);
		double L_2 = ExponentialMovingAverage_get_Value_m3CA532CA169F336D8E94939A23F78BDCCCDE02F4_inline(L_1, /*hidden argument*/NULL);
		return ((double)il2cpp_codegen_subtract((double)L_0, (double)L_2));
	}
}
// System.Double Mirror.NetworkTime::get_timeVar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTime_get_timeVar_m5A5DE65A16086AFA62272CBFB26EAC043D59597B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTime_get_timeVar_m5A5DE65A16086AFA62272CBFB26EAC043D59597B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var);
		ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 * L_0 = ((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->get__offset_5();
		NullCheck(L_0);
		double L_1 = ExponentialMovingAverage_get_Var_m6B5FB7D5E92B0E0AB92C70EEAF83ED5190261983_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Double Mirror.NetworkTime::get_timeSd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTime_get_timeSd_m4889493FEFC9504D0A75F9CEB37C278648EC72EF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTime_get_timeSd_m4889493FEFC9504D0A75F9CEB37C278648EC72EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var);
		double L_0 = NetworkTime_get_timeVar_m5A5DE65A16086AFA62272CBFB26EAC043D59597B(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_1 = sqrt(L_0);
		return L_1;
	}
}
// System.Double Mirror.NetworkTime::get_offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTime_get_offset_m8D0C18F218003E6CF12F1C560BFE2D31958670CA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTime_get_offset_m8D0C18F218003E6CF12F1C560BFE2D31958670CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var);
		ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 * L_0 = ((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->get__offset_5();
		NullCheck(L_0);
		double L_1 = ExponentialMovingAverage_get_Value_m3CA532CA169F336D8E94939A23F78BDCCCDE02F4_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Double Mirror.NetworkTime::get_rtt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTime_get_rtt_m7916F6430A962DBC6903B014F58DEF4F4A6BD94D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTime_get_rtt_m7916F6430A962DBC6903B014F58DEF4F4A6BD94D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var);
		ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 * L_0 = ((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->get__rtt_4();
		NullCheck(L_0);
		double L_1 = ExponentialMovingAverage_get_Value_m3CA532CA169F336D8E94939A23F78BDCCCDE02F4_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Double Mirror.NetworkTime::get_rttVar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTime_get_rttVar_mC0E69BE6C3FB031360A6FABCC684E9B9839AFA60 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTime_get_rttVar_mC0E69BE6C3FB031360A6FABCC684E9B9839AFA60_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var);
		ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 * L_0 = ((NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var))->get__rtt_4();
		NullCheck(L_0);
		double L_1 = ExponentialMovingAverage_get_Var_m6B5FB7D5E92B0E0AB92C70EEAF83ED5190261983_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Double Mirror.NetworkTime::get_rttSd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTime_get_rttSd_m4CD038BB1E21E8C39F414BA3D01B017968DBC818 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTime_get_rttSd_m4CD038BB1E21E8C39F414BA3D01B017968DBC818_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var);
		double L_0 = NetworkTime_get_rttVar_mC0E69BE6C3FB031360A6FABCC684E9B9839AFA60(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_1 = sqrt(L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Mirror.NetworkWriter::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkWriter_get_Position_m665966E1F06C8DB2CBCA1EC499F0098D33FFA1B7 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, const RuntimeMethod* method)
{
	{
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = __this->get_writer_0();
		NullCheck(L_0);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_1 = VirtFuncInvoker0< Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * >::Invoke(6 /* System.IO.Stream System.IO.BinaryWriter::get_BaseStream() */, L_0);
		NullCheck(L_1);
		int64_t L_2 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_1);
		return (((int32_t)((int32_t)L_2)));
	}
}
// System.Void Mirror.NetworkWriter::set_Position(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_set_Position_m6059122C511F634F25E50186752BDD45F26D59A7 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = __this->get_writer_0();
		NullCheck(L_0);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_1 = VirtFuncInvoker0< Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * >::Invoke(6 /* System.IO.Stream System.IO.BinaryWriter::get_BaseStream() */, L_0);
		int32_t L_2 = ___value0;
		NullCheck(L_1);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_1, (((int64_t)((int64_t)L_2))));
		return;
	}
}
// System.Byte[] Mirror.NetworkWriter::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* NetworkWriter_ToArray_m71F31476076F8B82ED22E10E6A9091212702D06F (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter_ToArray_m71F31476076F8B82ED22E10E6A9091212702D06F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = __this->get_writer_0();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.BinaryWriter::Flush() */, L_0);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_1 = __this->get_writer_0();
		NullCheck(L_1);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_2 = VirtFuncInvoker0< Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * >::Invoke(6 /* System.IO.Stream System.IO.BinaryWriter::get_BaseStream() */, L_1);
		NullCheck(((MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)CastclassClass((RuntimeObject*)L_2, MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = VirtFuncInvoker0< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(34 /* System.Byte[] System.IO.MemoryStream::ToArray() */, ((MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)CastclassClass((RuntimeObject*)L_2, MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var)));
		return L_3;
	}
}
// System.Void Mirror.NetworkWriter::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_SetLength_m4324EA8B370A61F54F51D7CEE7E323DD7F98A46D (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter_SetLength_m4324EA8B370A61F54F51D7CEE7E323DD7F98A46D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = __this->get_writer_0();
		NullCheck(L_0);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_1 = VirtFuncInvoker0< Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * >::Invoke(6 /* System.IO.Stream System.IO.BinaryWriter::get_BaseStream() */, L_0);
		int64_t L_2 = ___value0;
		NullCheck(((MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)CastclassClass((RuntimeObject*)L_1, MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var)));
		VirtActionInvoker1< int64_t >::Invoke(26 /* System.Void System.IO.Stream::SetLength(System.Int64) */, ((MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)CastclassClass((RuntimeObject*)L_1, MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var)), L_2);
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = __this->get_writer_0();
		uint8_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_0, L_1);
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m14A7159FF87CE9E182C0BDCBA1E12E41E926944C (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, int8_t ___value0, const RuntimeMethod* method)
{
	{
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = __this->get_writer_0();
		int8_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< int8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.SByte) */, L_0, L_1);
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_mEA913AE47691EA828C6B7D51EA452B246C7BB869 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = __this->get_writer_0();
		Il2CppChar L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< Il2CppChar >::Invoke(13 /* System.Void System.IO.BinaryWriter::Write(System.Char) */, L_0, L_1);
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_mFAEACAF1EEC31E3F62DAD55B33F5E2329B3444F7 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = __this->get_writer_0();
		bool L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< bool >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Boolean) */, L_0, L_1);
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_mB931B5332177FEA065D86FFD4A2DADA464C517C4 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, int16_t ___value0, const RuntimeMethod* method)
{
	{
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = __this->get_writer_0();
		int16_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< int16_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_0, L_1);
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m7A641378DE73FF5572D46EFEF05E2E20ED05BC12 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = __this->get_writer_0();
		uint16_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< uint16_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.UInt16) */, L_0, L_1);
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_mF34AF8CDC875453287DDDD75DCF23B1A9DFC0AE9 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = __this->get_writer_0();
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(19 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_0, L_1);
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m3887FB6A1FEF11F4E83489B9216B4D6F827176C1 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = __this->get_writer_0();
		uint32_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< uint32_t >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.UInt32) */, L_0, L_1);
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_mD50969B3601539B413A335D084ABD3F5A8692F3E (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = __this->get_writer_0();
		int64_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< int64_t >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.Int64) */, L_0, L_1);
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_mF56223EB11432EDF3321A4B8DCA6C700D8AC8F79 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = __this->get_writer_0();
		uint64_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< uint64_t >::Invoke(22 /* System.Void System.IO.BinaryWriter::Write(System.UInt64) */, L_0, L_1);
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, float ___value0, const RuntimeMethod* method)
{
	{
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = __this->get_writer_0();
		float L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< float >::Invoke(23 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_0, L_1);
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m309BF014E2CB4B2CBCF54F29CC5C3BB1E6B91E67 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, double ___value0, const RuntimeMethod* method)
{
	{
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = __this->get_writer_0();
		double L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< double >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_0, L_1);
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m3E3A16BEDEF1A0227E1CD58A70C4604D1ED346DC (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	{
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = __this->get_writer_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Decimal) */, L_0, L_1);
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m31129D04023289A55447C3D1C425C16362B71135 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = __this->get_writer_0();
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< bool >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Boolean) */, L_0, (bool)((!(((RuntimeObject*)(String_t*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0));
		String_t* L_2 = ___value0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_3 = __this->get_writer_0();
		String_t* L_4 = ___value0;
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(24 /* System.Void System.IO.BinaryWriter::Write(System.String) */, L_3, L_4);
	}

IL_001e:
	{
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m291BCB5321957FC734EEBC579A9BF4EA8E0A7609 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = __this->get_writer_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___buffer0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(12 /* System.Void System.IO.BinaryWriter::Write(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void Mirror.NetworkWriter::WriteBytesAndSize(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_WriteBytesAndSize_m2D3F0D3F5370947CD9FB401ECF09A2ECC66A06D6 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter_WriteBytesAndSize_m2D3F0D3F5370947CD9FB401ECF09A2ECC66A06D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___buffer0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_1 = __this->get_writer_0();
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Boolean) */, L_1, (bool)0);
		return;
	}

IL_0010:
	{
		int32_t L_2 = ___count2;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_3 = ___count2;
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteralE6FA13BCDE0CC98F8DC35C1856122BE15C1F8595, L_5, _stringLiteral96A2D7AC2AA2C373862D1665EAAB572FBF11FEF4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_6, /*hidden argument*/NULL);
		return;
	}

IL_002f:
	{
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_7 = __this->get_writer_0();
		NullCheck(L_7);
		VirtActionInvoker1< bool >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Boolean) */, L_7, (bool)1);
		int32_t L_8 = ___count2;
		NetworkWriter_WritePackedUInt32_m0AA6DAF853C4EAA3357E73394772DD630A334180(__this, L_8, /*hidden argument*/NULL);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_9 = __this->get_writer_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = ___buffer0;
		int32_t L_11 = ___offset1;
		int32_t L_12 = ___count2;
		NullCheck(L_9);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(12 /* System.Void System.IO.BinaryWriter::Write(System.Byte[],System.Int32,System.Int32) */, L_9, L_10, L_11, L_12);
		return;
	}
}
// System.Void Mirror.NetworkWriter::WriteBytesAndSize(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_WriteBytesAndSize_mA5F7C6175985B068D575B010DE0DA4B1B0490FF7 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, const RuntimeMethod* method)
{
	int32_t G_B2_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B2_1 = NULL;
	NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B1_1 = NULL;
	NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * G_B1_2 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B3_2 = NULL;
	NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * G_B3_3 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___buffer0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___buffer0;
		G_B1_0 = 0;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		if (L_1)
		{
			G_B2_0 = 0;
			G_B2_1 = L_0;
			G_B2_2 = __this;
			goto IL_0009;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_000c;
	}

IL_0009:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___buffer0;
		NullCheck(L_2);
		G_B3_0 = (((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_000c:
	{
		NullCheck(G_B3_3);
		NetworkWriter_WriteBytesAndSize_m2D3F0D3F5370947CD9FB401ECF09A2ECC66A06D6(G_B3_3, G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.NetworkWriter::WritePackedUInt32(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_WritePackedUInt32_m0AA6DAF853C4EAA3357E73394772DD630A334180 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		NetworkWriter_WritePackedUInt64_m3573741FFF002D411A0F41BF5D90C289B53D4B6C(__this, (((int64_t)((uint64_t)L_0))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.NetworkWriter::WritePackedUInt64(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_WritePackedUInt64_m3573741FFF002D411A0F41BF5D90C289B53D4B6C (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		if ((!(((uint64_t)L_0) <= ((uint64_t)(((int64_t)((int64_t)((int32_t)240))))))))
		{
			goto IL_0012;
		}
	}
	{
		uint64_t L_1 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)L_1))), /*hidden argument*/NULL);
		return;
	}

IL_0012:
	{
		uint64_t L_2 = ___value0;
		if ((!(((uint64_t)L_2) <= ((uint64_t)(((int64_t)((int64_t)((int32_t)2287))))))))
		{
			goto IL_004f;
		}
	}
	{
		uint64_t L_3 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((uint64_t)(int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_3, (int64_t)(((int64_t)((int64_t)((int32_t)240))))))/(uint64_t)(int64_t)(((int64_t)((int64_t)((int32_t)256)))))), (int64_t)(((int64_t)((int64_t)((int32_t)241))))))))), /*hidden argument*/NULL);
		uint64_t L_4 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((uint64_t)(int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_4, (int64_t)(((int64_t)((int64_t)((int32_t)240))))))%(uint64_t)(int64_t)(((int64_t)((int64_t)((int32_t)256))))))))), /*hidden argument*/NULL);
		return;
	}

IL_004f:
	{
		uint64_t L_5 = ___value0;
		if ((!(((uint64_t)L_5) <= ((uint64_t)(((int64_t)((int64_t)((int32_t)67823))))))))
		{
			goto IL_0090;
		}
	}
	{
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)((int32_t)249), /*hidden argument*/NULL);
		uint64_t L_6 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((uint64_t)(int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_6, (int64_t)(((int64_t)((int64_t)((int32_t)2288))))))/(uint64_t)(int64_t)(((int64_t)((int64_t)((int32_t)256))))))))), /*hidden argument*/NULL);
		uint64_t L_7 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((uint64_t)(int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_7, (int64_t)(((int64_t)((int64_t)((int32_t)2288))))))%(uint64_t)(int64_t)(((int64_t)((int64_t)((int32_t)256))))))))), /*hidden argument*/NULL);
		return;
	}

IL_0090:
	{
		uint64_t L_8 = ___value0;
		if ((!(((uint64_t)L_8) <= ((uint64_t)(((int64_t)((int64_t)((int32_t)16777215))))))))
		{
			goto IL_00d7;
		}
	}
	{
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)((int32_t)250), /*hidden argument*/NULL);
		uint64_t L_9 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)L_9&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_10 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_10>>8))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_11 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_11>>((int32_t)16)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		return;
	}

IL_00d7:
	{
		uint64_t L_12 = ___value0;
		if ((!(((uint64_t)L_12) <= ((uint64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1)))))))))))
		{
			goto IL_012c;
		}
	}
	{
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)((int32_t)251), /*hidden argument*/NULL);
		uint64_t L_13 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)L_13&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_14 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_14>>8))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_15 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_15>>((int32_t)16)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_16 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_16>>((int32_t)24)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		return;
	}

IL_012c:
	{
		uint64_t L_17 = ___value0;
		if ((!(((uint64_t)L_17) <= ((uint64_t)((int64_t)1099511627775LL)))))
		{
			goto IL_019a;
		}
	}
	{
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)((int32_t)252), /*hidden argument*/NULL);
		uint64_t L_18 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)L_18&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_19 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_19>>8))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_20 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_20>>((int32_t)16)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_21 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_21>>((int32_t)24)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_22 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_22>>((int32_t)32)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		return;
	}

IL_019a:
	{
		uint64_t L_23 = ___value0;
		if ((!(((uint64_t)L_23) <= ((uint64_t)((int64_t)281474976710655LL)))))
		{
			goto IL_021a;
		}
	}
	{
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)((int32_t)253), /*hidden argument*/NULL);
		uint64_t L_24 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)L_24&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_25 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_25>>8))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_26 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_26>>((int32_t)16)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_27 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_27>>((int32_t)24)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_28 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_28>>((int32_t)32)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_29 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_29>>((int32_t)40)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		return;
	}

IL_021a:
	{
		uint64_t L_30 = ___value0;
		if ((!(((uint64_t)L_30) <= ((uint64_t)((int64_t)72057594037927935LL)))))
		{
			goto IL_02af;
		}
	}
	{
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)((int32_t)254), /*hidden argument*/NULL);
		uint64_t L_31 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)L_31&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_32 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_32>>8))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_33 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_33>>((int32_t)16)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_34 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_34>>((int32_t)24)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_35 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_35>>((int32_t)32)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_36 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_36>>((int32_t)40)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_37 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_37>>((int32_t)48)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		return;
	}

IL_02af:
	{
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		uint64_t L_38 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)L_38&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_39 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_39>>8))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_40 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_40>>((int32_t)16)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_41 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_41>>((int32_t)24)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_42 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_42>>((int32_t)32)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_43 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_43>>((int32_t)40)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_44 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_44>>((int32_t)48)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_45 = ___value0;
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_45>>((int32_t)56)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m3E5CE2FEADE080B0E012C35A6BE71D8A58FD5DEB (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		float L_1 = L_0.get_x_0();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_1, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = ___value0;
		float L_3 = L_2.get_y_1();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m0191249E50303196C512C2E190FFAE6E493AEEEE (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		float L_1 = L_0.get_x_2();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_1, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___value0;
		float L_3 = L_2.get_y_3();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_3, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___value0;
		float L_5 = L_4.get_z_4();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m898AE1A637D5137E8887758BFC2271422EBBE157 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___value0, const RuntimeMethod* method)
{
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = ___value0;
		float L_1 = L_0.get_x_1();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_1, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = ___value0;
		float L_3 = L_2.get_y_2();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_3, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_4 = ___value0;
		float L_5 = L_4.get_z_3();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_5, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_6 = ___value0;
		float L_7 = L_6.get_w_4();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m26216D8DF26B7A440CB91D1A02484CA5ACAD9B9C (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method)
{
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = ___value0;
		float L_1 = L_0.get_r_0();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_1, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = ___value0;
		float L_3 = L_2.get_g_1();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_3, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_4 = ___value0;
		float L_5 = L_4.get_b_2();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_5, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_6 = ___value0;
		float L_7 = L_6.get_a_3();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_mB548DFC4824DF99BA671AEA43B768B3417BAF945 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___value0, const RuntimeMethod* method)
{
	{
		Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  L_0 = ___value0;
		uint8_t L_1 = L_0.get_r_1();
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, L_1, /*hidden argument*/NULL);
		Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  L_2 = ___value0;
		uint8_t L_3 = L_2.get_g_2();
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, L_3, /*hidden argument*/NULL);
		Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  L_4 = ___value0;
		uint8_t L_5 = L_4.get_b_3();
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, L_5, /*hidden argument*/NULL);
		Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  L_6 = ___value0;
		uint8_t L_7 = L_6.get_a_4();
		NetworkWriter_Write_mDE534E929520A724E8A848C3D8F607181BBF79DF(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m58096E1234ECA8ADAE261992F79996E96AA487CD (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___value0;
		float L_1 = L_0.get_x_0();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_1, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = ___value0;
		float L_3 = L_2.get_y_1();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_3, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ___value0;
		float L_5 = L_4.get_z_2();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_5, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = ___value0;
		float L_7 = L_6.get_w_3();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m0ED40AFB10DDC55BF10F8EB2AE0F395C99431515 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = Rect_get_xMin_mFDFA74F66595FD2B8CE360183D1A92B575F0A76E((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___value0), /*hidden argument*/NULL);
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_0, /*hidden argument*/NULL);
		float L_1 = Rect_get_yMin_m31EDC3262BE39D2F6464B15397F882237E6158C3((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___value0), /*hidden argument*/NULL);
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_1, /*hidden argument*/NULL);
		float L_2 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___value0), /*hidden argument*/NULL);
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_2, /*hidden argument*/NULL);
		float L_3 = Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___value0), /*hidden argument*/NULL);
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(UnityEngine.Plane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_mA49BD092D3C71A750E493D28BE3031268B6047AE (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&___value0), /*hidden argument*/NULL);
		NetworkWriter_Write_m0191249E50303196C512C2E190FFAE6E493AEEEE(__this, L_0, /*hidden argument*/NULL);
		float L_1 = Plane_get_distance_m5358B80C35E1E295C0133E7DC6449BB09C456DEE((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&___value0), /*hidden argument*/NULL);
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m12FD9757027C8CA4796AB45D00201496AD298851 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Ray_get_direction_m9E6468CD87844B437FC4B93491E63D388322F76E((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&___value0), /*hidden argument*/NULL);
		NetworkWriter_Write_m0191249E50303196C512C2E190FFAE6E493AEEEE(__this, L_0, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Ray_get_origin_m3773CA7B1E2F26F6F1447652B485D86C0BEC5187((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&___value0), /*hidden argument*/NULL);
		NetworkWriter_Write_m0191249E50303196C512C2E190FFAE6E493AEEEE(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m47072681D6988AE781D6B9B41A20124C47ECF754 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___value0, const RuntimeMethod* method)
{
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_0 = ___value0;
		float L_1 = L_0.get_m00_0();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_1, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_2 = ___value0;
		float L_3 = L_2.get_m01_4();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_3, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_4 = ___value0;
		float L_5 = L_4.get_m02_8();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_5, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_6 = ___value0;
		float L_7 = L_6.get_m03_12();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_7, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_8 = ___value0;
		float L_9 = L_8.get_m10_1();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_9, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_10 = ___value0;
		float L_11 = L_10.get_m11_5();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_11, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_12 = ___value0;
		float L_13 = L_12.get_m12_9();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_13, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_14 = ___value0;
		float L_15 = L_14.get_m13_13();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_15, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_16 = ___value0;
		float L_17 = L_16.get_m20_2();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_17, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_18 = ___value0;
		float L_19 = L_18.get_m21_6();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_19, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_20 = ___value0;
		float L_21 = L_20.get_m22_10();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_21, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_22 = ___value0;
		float L_23 = L_22.get_m23_14();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_23, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_24 = ___value0;
		float L_25 = L_24.get_m30_3();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_25, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_26 = ___value0;
		float L_27 = L_26.get_m31_7();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_27, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_28 = ___value0;
		float L_29 = L_28.get_m32_11();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_29, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_30 = ___value0;
		float L_31 = L_30.get_m33_15();
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(__this, L_31, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m70D2BE6600CEA5981B7BFF68E94E781F58600E71 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = __this->get_writer_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = Guid_ToByteArray_m5E99B09A26EA3A1943CC8FE697E247DAC5465223((Guid_t *)(&___value0), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(11 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_0, L_1);
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(Mirror.NetworkIdentity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m7F36C9904F2D714441C2671D6B88DEABDD8295FA (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter_Write_m7F36C9904F2D714441C2671D6B88DEABDD8295FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		NetworkWriter_WritePackedUInt32_m0AA6DAF853C4EAA3357E73394772DD630A334180(__this, 0, /*hidden argument*/NULL);
		return;
	}

IL_0011:
	{
		NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * L_2 = ___value0;
		NullCheck(L_2);
		uint32_t L_3 = NetworkIdentity_get_netId_m3CAE8990CFC9FE1389B3001802CB481389D99CD4_inline(L_2, /*hidden argument*/NULL);
		NetworkWriter_WritePackedUInt32_m0AA6DAF853C4EAA3357E73394772DD630A334180(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m08082864DE52D9F401B9420E1ABA683A969A1E17 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter_Write_m08082864DE52D9F401B9420E1ABA683A969A1E17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * V_0 = NULL;
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ___value0;
		NullCheck(L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001f;
		}
	}

IL_0017:
	{
		NetworkWriter_WritePackedUInt32_m0AA6DAF853C4EAA3357E73394772DD630A334180(__this, 0, /*hidden argument*/NULL);
		return;
	}

IL_001f:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = ___value0;
		NullCheck(L_5);
		NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * L_6 = Component_GetComponent_TisNetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870_m68FD22ADF9BFAFC0FD976A554EF474B8919C8288(L_5, /*hidden argument*/Component_GetComponent_TisNetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870_m68FD22ADF9BFAFC0FD976A554EF474B8919C8288_RuntimeMethod_var);
		V_0 = L_6;
		NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * L_9 = V_0;
		NullCheck(L_9);
		uint32_t L_10 = NetworkIdentity_get_netId_m3CAE8990CFC9FE1389B3001802CB481389D99CD4_inline(L_9, /*hidden argument*/NULL);
		NetworkWriter_WritePackedUInt32_m0AA6DAF853C4EAA3357E73394772DD630A334180(__this, L_10, /*hidden argument*/NULL);
		return;
	}

IL_003c:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = ___value0;
		String_t* L_12 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteralA45E7DA12B87A6DBEDA68DC73471E87E66E9C2E1, L_11, _stringLiteral1CDFEAB29C4AD9DAC96B9B86A0440B7DCCACBA06, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_12, /*hidden argument*/NULL);
		NetworkWriter_WritePackedUInt32_m0AA6DAF853C4EAA3357E73394772DD630A334180(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m93D2783E0D615825096EE2782CF7E69721C52BD7 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter_Write_m93D2783E0D615825096EE2782CF7E69721C52BD7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * V_0 = NULL;
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		NetworkWriter_WritePackedUInt32_m0AA6DAF853C4EAA3357E73394772DD630A334180(__this, 0, /*hidden argument*/NULL);
		return;
	}

IL_0011:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = ___value0;
		NullCheck(L_2);
		NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * L_3 = GameObject_GetComponent_TisNetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870_m73308E6CE1D9B3879BA659C6AF56071F48515F68(L_2, /*hidden argument*/GameObject_GetComponent_TisNetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870_m73308E6CE1D9B3879BA659C6AF56071F48515F68_RuntimeMethod_var);
		V_0 = L_3;
		NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * L_6 = V_0;
		NullCheck(L_6);
		uint32_t L_7 = NetworkIdentity_get_netId_m3CAE8990CFC9FE1389B3001802CB481389D99CD4_inline(L_6, /*hidden argument*/NULL);
		NetworkWriter_WritePackedUInt32_m0AA6DAF853C4EAA3357E73394772DD630A334180(__this, L_7, /*hidden argument*/NULL);
		return;
	}

IL_002e:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = ___value0;
		String_t* L_9 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteralA45E7DA12B87A6DBEDA68DC73471E87E66E9C2E1, L_8, _stringLiteral1CDFEAB29C4AD9DAC96B9B86A0440B7DCCACBA06, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_9, /*hidden argument*/NULL);
		NetworkWriter_WritePackedUInt32_m0AA6DAF853C4EAA3357E73394772DD630A334180(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.NetworkWriter::Write(Mirror.MessageBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_mA94643930386227D73DD00F5713948451A815F18 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, MessageBase_t18C829EC4363E125BF1E98E367DFBE721034BDC6 * ___msg0, const RuntimeMethod* method)
{
	{
		MessageBase_t18C829EC4363E125BF1E98E367DFBE721034BDC6 * L_0 = ___msg0;
		NullCheck(L_0);
		VirtActionInvoker1< NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * >::Invoke(5 /* System.Void Mirror.MessageBase::Serialize(Mirror.NetworkWriter) */, L_0, __this);
		return;
	}
}
// System.Void Mirror.NetworkWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter__ctor_m5F3AFE4F6091311F99C14E553C03DCB5F9E412BD (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter__ctor_m5F3AFE4F6091311F99C14E553C03DCB5F9E412BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_0 = (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)il2cpp_codegen_object_new(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m9D0F92C76EFEDA651B678A98EB693FD945286DC2(L_0, /*hidden argument*/NULL);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_1 = (BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 *)il2cpp_codegen_object_new(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_il2cpp_TypeInfo_var);
		BinaryWriter__ctor_m2E92F4E5096905E2E7487E003AB7B3CC5C5EC185(L_1, L_0, /*hidden argument*/NULL);
		__this->set_writer_0(L_1);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.NotReadyMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotReadyMessage__ctor_m0188CC9192EB036E02C03BF42761CF9C7CDED06F (NotReadyMessage_t8CDB885248D3D910295CC051F67D03D977ED212B * __this, const RuntimeMethod* method)
{
	{
		EmptyMessage__ctor_m29AEA6EEACBE3394A4939DB6BBBFB73E37D9E6D7(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.ObjectDestroyMessage::Deserialize(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDestroyMessage_Deserialize_mE83061BD3CDD125409C01443E56F3BB6A33A7D2C (ObjectDestroyMessage_tCAEDA7F85120CC950BE64733931F0B95552A9053 * __this, NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1 = NetworkReader_ReadPackedUInt32_mE3C7CB69F241D513E8459771731B355208C81557(L_0, /*hidden argument*/NULL);
		__this->set_netId_0(L_1);
		return;
	}
}
// System.Void Mirror.ObjectDestroyMessage::Serialize(Mirror.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDestroyMessage_Serialize_mD7CD514BCE23B18A89A007D58F19D260E3F7248E (ObjectDestroyMessage_tCAEDA7F85120CC950BE64733931F0B95552A9053 * __this, NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, const RuntimeMethod* method)
{
	{
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_0 = ___writer0;
		uint32_t L_1 = __this->get_netId_0();
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_m0AA6DAF853C4EAA3357E73394772DD630A334180(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.ObjectDestroyMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDestroyMessage__ctor_m0BDF7E8A89F52E5E6BCCFDC721950CF059528C64 (ObjectDestroyMessage_tCAEDA7F85120CC950BE64733931F0B95552A9053 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m72CD982948A637ECBEA1994ED9AF0ABE6FACC0D1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.ObjectHideMessage::Deserialize(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectHideMessage_Deserialize_mFB49CC7D2354B6EC2E5735EAE5671C2A60816906 (ObjectHideMessage_tF0EF2C045B3BFF5A6C7533FE65251757D209B26F * __this, NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1 = NetworkReader_ReadPackedUInt32_mE3C7CB69F241D513E8459771731B355208C81557(L_0, /*hidden argument*/NULL);
		__this->set_netId_0(L_1);
		return;
	}
}
// System.Void Mirror.ObjectHideMessage::Serialize(Mirror.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectHideMessage_Serialize_mC50CAFB61AFF32C0BD785AC8DC37F493BB45C8A6 (ObjectHideMessage_tF0EF2C045B3BFF5A6C7533FE65251757D209B26F * __this, NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, const RuntimeMethod* method)
{
	{
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_0 = ___writer0;
		uint32_t L_1 = __this->get_netId_0();
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_m0AA6DAF853C4EAA3357E73394772DD630A334180(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.ObjectHideMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectHideMessage__ctor_m25BCE6D9C3FA3CCBB2B4C6EBFCBC9F684F64FA77 (ObjectHideMessage_tF0EF2C045B3BFF5A6C7533FE65251757D209B26F * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m72CD982948A637ECBEA1994ED9AF0ABE6FACC0D1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.ObjectSpawnFinishedMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawnFinishedMessage__ctor_m83BAF01FE1E0773EB46DBF99D58BDC3DB574FB5D (ObjectSpawnFinishedMessage_t057B2DB67056306906BE06484E88D209BCA34553 * __this, const RuntimeMethod* method)
{
	{
		EmptyMessage__ctor_m29AEA6EEACBE3394A4939DB6BBBFB73E37D9E6D7(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.ObjectSpawnStartedMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawnStartedMessage__ctor_m535B2B1DBE0424B5C2B25EA133BAFAF81F04A482 (ObjectSpawnStartedMessage_tF1FF4F4EF9BBB083C4A6FC2998AAD0165A822D83 * __this, const RuntimeMethod* method)
{
	{
		EmptyMessage__ctor_m29AEA6EEACBE3394A4939DB6BBBFB73E37D9E6D7(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.OwnerMessage::Deserialize(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OwnerMessage_Deserialize_mF288CAD2FA36DC344CF68C369E988BBA4C89D5F7 (OwnerMessage_t5B9F3813FF57F5C44F7453E0B12423409D1AD3D9 * __this, NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1 = NetworkReader_ReadPackedUInt32_mE3C7CB69F241D513E8459771731B355208C81557(L_0, /*hidden argument*/NULL);
		__this->set_netId_0(L_1);
		return;
	}
}
// System.Void Mirror.OwnerMessage::Serialize(Mirror.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OwnerMessage_Serialize_m1B54AEEA133F0D7EDB65A6099F6ECBE876CC2486 (OwnerMessage_t5B9F3813FF57F5C44F7453E0B12423409D1AD3D9 * __this, NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, const RuntimeMethod* method)
{
	{
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_0 = ___writer0;
		uint32_t L_1 = __this->get_netId_0();
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_m0AA6DAF853C4EAA3357E73394772DD630A334180(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.OwnerMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OwnerMessage__ctor_m5359647107CD534425C142B5B2861AFFF19B09C3 (OwnerMessage_t5B9F3813FF57F5C44F7453E0B12423409D1AD3D9 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m72CD982948A637ECBEA1994ED9AF0ABE6FACC0D1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.ReadyMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadyMessage__ctor_m4D4675CFC0998DE920D12990DA5B832F73CCAABD (ReadyMessage_t7781C3EA6ED346684B704E4D5D169572B4A98632 * __this, const RuntimeMethod* method)
{
	{
		EmptyMessage__ctor_m29AEA6EEACBE3394A4939DB6BBBFB73E37D9E6D7(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.RemoteCallMessage::Deserialize(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteCallMessage_Deserialize_mE292B8BBB7CFFB09C8E3720B60897A1536BDD638 (RemoteCallMessage_t8F16BC5D89C9CE3BC22D315100ABBAAE02A9D31C * __this, NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1 = NetworkReader_ReadPackedUInt32_mE3C7CB69F241D513E8459771731B355208C81557(L_0, /*hidden argument*/NULL);
		__this->set_netId_0(L_1);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_2 = ___reader0;
		NullCheck(L_2);
		uint32_t L_3 = NetworkReader_ReadPackedUInt32_mE3C7CB69F241D513E8459771731B355208C81557(L_2, /*hidden argument*/NULL);
		__this->set_componentIndex_1(L_3);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_4 = ___reader0;
		NullCheck(L_4);
		int32_t L_5 = NetworkReader_ReadInt32_m40E407FDFCF04AAE05058E5376478164071DBC92(L_4, /*hidden argument*/NULL);
		__this->set_functionHash_2(L_5);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_6 = ___reader0;
		NullCheck(L_6);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = NetworkReader_ReadBytesAndSize_mCBCEE12AE67150B0A9B42124921F261D30AD1467(L_6, /*hidden argument*/NULL);
		__this->set_payload_3(L_7);
		return;
	}
}
// System.Void Mirror.RemoteCallMessage::Serialize(Mirror.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteCallMessage_Serialize_mFEC7DE6A9F5A73A83075EC3F2B1F9F9505ED0F18 (RemoteCallMessage_t8F16BC5D89C9CE3BC22D315100ABBAAE02A9D31C * __this, NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, const RuntimeMethod* method)
{
	{
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_0 = ___writer0;
		uint32_t L_1 = __this->get_netId_0();
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_m0AA6DAF853C4EAA3357E73394772DD630A334180(L_0, L_1, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_2 = ___writer0;
		int32_t L_3 = __this->get_componentIndex_1();
		NullCheck(L_2);
		NetworkWriter_WritePackedUInt32_m0AA6DAF853C4EAA3357E73394772DD630A334180(L_2, L_3, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_4 = ___writer0;
		int32_t L_5 = __this->get_functionHash_2();
		NullCheck(L_4);
		NetworkWriter_Write_mF34AF8CDC875453287DDDD75DCF23B1A9DFC0AE9(L_4, L_5, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_6 = ___writer0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = __this->get_payload_3();
		NullCheck(L_6);
		NetworkWriter_WriteBytesAndSize_mA5F7C6175985B068D575B010DE0DA4B1B0490FF7(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.RemoteCallMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteCallMessage__ctor_mCF4F70A0F3A8D44489806422B3084B49D7A590AC (RemoteCallMessage_t8F16BC5D89C9CE3BC22D315100ABBAAE02A9D31C * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m72CD982948A637ECBEA1994ED9AF0ABE6FACC0D1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.RemovePlayerMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemovePlayerMessage__ctor_mE44CAEA1FA0E2B17150957F4CA223A01359D0EED (RemovePlayerMessage_t97BE9115FC1584404F127225B2CDE04E3EBEF359 * __this, const RuntimeMethod* method)
{
	{
		EmptyMessage__ctor_m29AEA6EEACBE3394A4939DB6BBBFB73E37D9E6D7(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.RpcMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcMessage__ctor_mAF8835F5B37FDED5D14BB4D9791429BFA484DB62 (RpcMessage_t654DE7A93F2C632C3014F7EC3455AB319F3AA4E8 * __this, const RuntimeMethod* method)
{
	{
		RemoteCallMessage__ctor_mCF4F70A0F3A8D44489806422B3084B49D7A590AC(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.SceneAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneAttribute__ctor_m8FACB16C88071509806D660E25499AA7E986225B (SceneAttribute_t2484BD4457BA974898E687A2554EE60E1351B423 * __this, const RuntimeMethod* method)
{
	{
		PropertyAttribute__ctor_m7F5C473F39D5601486C1127DA0D52F2DC293FC35(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.SceneMessage::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMessage__ctor_mEA9A287BF8C51CC0525C614AF6CE178ADDD610D0 (SceneMessage_t41D769BE66DAABD69C0E576AA8B945AC5F2BDF47 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		StringMessage__ctor_m3076CDC8CA7C76C7E1110A68D3ED17FDAB990BB5(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.SceneMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMessage__ctor_m86D1DC3320B49675A6E7620B061C888D3E2FB9FC (SceneMessage_t41D769BE66DAABD69C0E576AA8B945AC5F2BDF47 * __this, const RuntimeMethod* method)
{
	{
		StringMessage__ctor_mA6349471BE8B33641F4381B2362DF8F3DA676DF0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.ServerAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerAttribute__ctor_m3E1E759ACB70C217965C2E0BE25D9266D88D0B0C (ServerAttribute_t2FDCCEE489BE4E816E963AB2C0F5CBF333D23FF9 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.ServerCallbackAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerCallbackAttribute__ctor_mE0EDAABC4F85E1679BCB1284452CB7EC8207FD7F (ServerCallbackAttribute_t9FB75A0CE615ADC5DA4CC32EFC8FBD13012A0532 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.SpawnDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnDelegate__ctor_m3FCF723235B753A4D44F90140A160379FEC5B96F (SpawnDelegate_tD5F09787306269E04335315D8968A7994563A2D9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.GameObject Mirror.SpawnDelegate::Invoke(UnityEngine.Vector3,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * SpawnDelegate_Invoke_m5DA197B34DA02A420BEE44A7FDDA79D7F10DE7F1 (SpawnDelegate_tD5F09787306269E04335315D8968A7994563A2D9 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Guid_t  ___assetId1, const RuntimeMethod* method)
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * result = NULL;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*FunctionPointerType) (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Guid_t , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___position0, ___assetId1, targetMethod);
			}
			else
			{
				// closed
				typedef GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*FunctionPointerType) (void*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Guid_t , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, ___assetId1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*FunctionPointerType) (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Guid_t , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___position0, ___assetId1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Guid_t  >::Invoke(targetMethod, targetThis, ___position0, ___assetId1);
					else
						result = GenericVirtFuncInvoker2< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Guid_t  >::Invoke(targetMethod, targetThis, ___position0, ___assetId1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Guid_t  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___position0, ___assetId1);
					else
						result = VirtFuncInvoker2< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Guid_t  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___position0, ___assetId1);
				}
			}
			else
			{
				typedef GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*FunctionPointerType) (void*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Guid_t , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, ___assetId1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Mirror.SpawnDelegate::BeginInvoke(UnityEngine.Vector3,System.Guid,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnDelegate_BeginInvoke_mF69B619CD0C76C08F73A2192FBB9ED2CF880E06D (SpawnDelegate_tD5F09787306269E04335315D8968A7994563A2D9 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Guid_t  ___assetId1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpawnDelegate_BeginInvoke_mF69B619CD0C76C08F73A2192FBB9ED2CF880E06D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___position0);
	__d_args[1] = Box(Guid_t_il2cpp_TypeInfo_var, &___assetId1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// UnityEngine.GameObject Mirror.SpawnDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * SpawnDelegate_EndInvoke_m974061E9FC6897150FC23BBDD198A2C315FFE013 (SpawnDelegate_tD5F09787306269E04335315D8968A7994563A2D9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.SpawnPrefabMessage::Deserialize(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnPrefabMessage_Deserialize_m887621A132D6E3F785512B3389BAD47BE515901D (SpawnPrefabMessage_tAABE6655EBD053D60779ECE2AEB1009063B9AB08 * __this, NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1 = NetworkReader_ReadPackedUInt32_mE3C7CB69F241D513E8459771731B355208C81557(L_0, /*hidden argument*/NULL);
		__this->set_netId_0(L_1);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_2 = ___reader0;
		NullCheck(L_2);
		Guid_t  L_3 = NetworkReader_ReadGuid_mA6558ACF08B81E023E80E25A3080AB7AAD3FF29D(L_2, /*hidden argument*/NULL);
		__this->set_assetId_1(L_3);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_4 = ___reader0;
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = NetworkReader_ReadVector3_mF0D83898BCD3108EE6740E1DB26C8E3B40197F38(L_4, /*hidden argument*/NULL);
		__this->set_position_2(L_5);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_6 = ___reader0;
		NullCheck(L_6);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = NetworkReader_ReadQuaternion_m6D231F49657C021CE3D7BE2135B9B773E9C9B2F1(L_6, /*hidden argument*/NULL);
		__this->set_rotation_3(L_7);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_8 = ___reader0;
		NullCheck(L_8);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = NetworkReader_ReadBytesAndSize_mCBCEE12AE67150B0A9B42124921F261D30AD1467(L_8, /*hidden argument*/NULL);
		__this->set_payload_4(L_9);
		return;
	}
}
// System.Void Mirror.SpawnPrefabMessage::Serialize(Mirror.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnPrefabMessage_Serialize_m4A35FBDA3DC323F94328CDBCBC57589FDFD90AB7 (SpawnPrefabMessage_tAABE6655EBD053D60779ECE2AEB1009063B9AB08 * __this, NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, const RuntimeMethod* method)
{
	{
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_0 = ___writer0;
		uint32_t L_1 = __this->get_netId_0();
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_m0AA6DAF853C4EAA3357E73394772DD630A334180(L_0, L_1, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_2 = ___writer0;
		Guid_t  L_3 = __this->get_assetId_1();
		NullCheck(L_2);
		NetworkWriter_Write_m70D2BE6600CEA5981B7BFF68E94E781F58600E71(L_2, L_3, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_4 = ___writer0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = __this->get_position_2();
		NullCheck(L_4);
		NetworkWriter_Write_m0191249E50303196C512C2E190FFAE6E493AEEEE(L_4, L_5, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_6 = ___writer0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = __this->get_rotation_3();
		NullCheck(L_6);
		NetworkWriter_Write_m58096E1234ECA8ADAE261992F79996E96AA487CD(L_6, L_7, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_8 = ___writer0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = __this->get_payload_4();
		NullCheck(L_8);
		NetworkWriter_WriteBytesAndSize_mA5F7C6175985B068D575B010DE0DA4B1B0490FF7(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.SpawnPrefabMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnPrefabMessage__ctor_m7CC79290CAFDCF591CF4FF8E2D502C7F16065230 (SpawnPrefabMessage_tAABE6655EBD053D60779ECE2AEB1009063B9AB08 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m72CD982948A637ECBEA1994ED9AF0ABE6FACC0D1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.SpawnSceneObjectMessage::Deserialize(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnSceneObjectMessage_Deserialize_mCA66961DE6523B3E38BF930079E41222999A9538 (SpawnSceneObjectMessage_t756AE7AB9D828C08339571AC4B899AA95C5FDE99 * __this, NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1 = NetworkReader_ReadPackedUInt32_mE3C7CB69F241D513E8459771731B355208C81557(L_0, /*hidden argument*/NULL);
		__this->set_netId_0(L_1);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_2 = ___reader0;
		NullCheck(L_2);
		uint32_t L_3 = NetworkReader_ReadPackedUInt32_mE3C7CB69F241D513E8459771731B355208C81557(L_2, /*hidden argument*/NULL);
		__this->set_sceneId_1(L_3);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_4 = ___reader0;
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = NetworkReader_ReadVector3_mF0D83898BCD3108EE6740E1DB26C8E3B40197F38(L_4, /*hidden argument*/NULL);
		__this->set_position_2(L_5);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_6 = ___reader0;
		NullCheck(L_6);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = NetworkReader_ReadQuaternion_m6D231F49657C021CE3D7BE2135B9B773E9C9B2F1(L_6, /*hidden argument*/NULL);
		__this->set_rotation_3(L_7);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_8 = ___reader0;
		NullCheck(L_8);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = NetworkReader_ReadBytesAndSize_mCBCEE12AE67150B0A9B42124921F261D30AD1467(L_8, /*hidden argument*/NULL);
		__this->set_payload_4(L_9);
		return;
	}
}
// System.Void Mirror.SpawnSceneObjectMessage::Serialize(Mirror.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnSceneObjectMessage_Serialize_m2B9777164F5BF6CD2428A217B5260EA1D3FBB344 (SpawnSceneObjectMessage_t756AE7AB9D828C08339571AC4B899AA95C5FDE99 * __this, NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, const RuntimeMethod* method)
{
	{
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_0 = ___writer0;
		uint32_t L_1 = __this->get_netId_0();
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_m0AA6DAF853C4EAA3357E73394772DD630A334180(L_0, L_1, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_2 = ___writer0;
		uint32_t L_3 = __this->get_sceneId_1();
		NullCheck(L_2);
		NetworkWriter_WritePackedUInt32_m0AA6DAF853C4EAA3357E73394772DD630A334180(L_2, L_3, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_4 = ___writer0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = __this->get_position_2();
		NullCheck(L_4);
		NetworkWriter_Write_m0191249E50303196C512C2E190FFAE6E493AEEEE(L_4, L_5, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_6 = ___writer0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = __this->get_rotation_3();
		NullCheck(L_6);
		NetworkWriter_Write_m58096E1234ECA8ADAE261992F79996E96AA487CD(L_6, L_7, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_8 = ___writer0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = __this->get_payload_4();
		NullCheck(L_8);
		NetworkWriter_WriteBytesAndSize_mA5F7C6175985B068D575B010DE0DA4B1B0490FF7(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.SpawnSceneObjectMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnSceneObjectMessage__ctor_mC1494157FA9333F0175904767423C0DCCEE97F10 (SpawnSceneObjectMessage_t756AE7AB9D828C08339571AC4B899AA95C5FDE99 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m72CD982948A637ECBEA1994ED9AF0ABE6FACC0D1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Mirror.StringHash::GetStableHashCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringHash_GetStableHashCode_mC6FA5402D6E132BBE301049D04DC2601C2F7369A (String_t* ___text0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		V_0 = ((int32_t)23);
		String_t* L_0 = ___text0;
		V_1 = L_0;
		V_2 = 0;
		goto IL_001c;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		Il2CppChar L_3 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_1, L_2, /*hidden argument*/NULL);
		V_3 = L_3;
		int32_t L_4 = V_0;
		Il2CppChar L_5 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)((int32_t)31))), (int32_t)L_5));
		int32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001c:
	{
		int32_t L_7 = V_2;
		String_t* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.StringMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringMessage__ctor_mA6349471BE8B33641F4381B2362DF8F3DA676DF0 (StringMessage_t946707773BD82A3C9839A41982482EE7278FC05C * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m72CD982948A637ECBEA1994ED9AF0ABE6FACC0D1(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.StringMessage::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringMessage__ctor_m3076CDC8CA7C76C7E1110A68D3ED17FDAB990BB5 (StringMessage_t946707773BD82A3C9839A41982482EE7278FC05C * __this, String_t* ___v0, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m72CD982948A637ECBEA1994ED9AF0ABE6FACC0D1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___v0;
		__this->set_value_0(L_0);
		return;
	}
}
// System.Void Mirror.StringMessage::Deserialize(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringMessage_Deserialize_m5119A99E43B47EF15D34BED7DFA22680AF9F65CC (StringMessage_t946707773BD82A3C9839A41982482EE7278FC05C * __this, NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_0 = ___reader0;
		NullCheck(L_0);
		String_t* L_1 = NetworkReader_ReadString_mAA56FAB8C151A6C883975E22098B47F18C7942A5(L_0, /*hidden argument*/NULL);
		__this->set_value_0(L_1);
		return;
	}
}
// System.Void Mirror.StringMessage::Serialize(Mirror.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringMessage_Serialize_m6064A1A60AA017578C10573F61F3B2309CE356EA (StringMessage_t946707773BD82A3C9839A41982482EE7278FC05C * __this, NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, const RuntimeMethod* method)
{
	{
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_0 = ___writer0;
		String_t* L_1 = __this->get_value_0();
		NullCheck(L_0);
		NetworkWriter_Write_m31129D04023289A55447C3D1C425C16362B71135(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.SyncEventAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncEventAttribute__ctor_mD7279780BAD26128DA570DC77DE410910E7D7B81 (SyncEventAttribute_tA98B3F53D2AE69B5A453769D09C637BACB870F19 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.SyncEventMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncEventMessage__ctor_m2FB0AD7F62FD6BD54E9EDC7FE0861387E027CFF7 (SyncEventMessage_tA7316BF890CA1EEDAC3EDF870DDF809A91B53E77 * __this, const RuntimeMethod* method)
{
	{
		RemoteCallMessage__ctor_mCF4F70A0F3A8D44489806422B3084B49D7A590AC(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.SyncListBool::SerializeItem(Mirror.NetworkWriter,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListBool_SerializeItem_m355F37539E99B1CB30BF13518B4763B6C902538A (SyncListBool_t54569B1E7DFF857F92C9E39BF59124D83187493E * __this, NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, bool ___item1, const RuntimeMethod* method)
{
	{
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_0 = ___writer0;
		bool L_1 = ___item1;
		NullCheck(L_0);
		NetworkWriter_Write_mFAEACAF1EEC31E3F62DAD55B33F5E2329B3444F7(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mirror.SyncListBool::DeserializeItem(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncListBool_DeserializeItem_m09F0664488888F282EF248CA8BFE7FD4343FD7ED (SyncListBool_t54569B1E7DFF857F92C9E39BF59124D83187493E * __this, NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_0 = ___reader0;
		NullCheck(L_0);
		bool L_1 = NetworkReader_ReadBoolean_mA2B6207654E1FBE72A6AEF02D0AD0F7883DFABBA(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Mirror.SyncListBool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListBool__ctor_mD7682B095CF65B60BEE4A1E7108B5129EA3524E6 (SyncListBool_t54569B1E7DFF857F92C9E39BF59124D83187493E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListBool__ctor_mD7682B095CF65B60BEE4A1E7108B5129EA3524E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SyncList_1__ctor_mA186BD2476430CD549976685807C50C97464D3D3(__this, /*hidden argument*/SyncList_1__ctor_mA186BD2476430CD549976685807C50C97464D3D3_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.SyncListFloat::SerializeItem(Mirror.NetworkWriter,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListFloat_SerializeItem_m07766A1D8FE6FF3BF80BB4C1A31463BDE0067350 (SyncListFloat_t09BF4B3E58761DE4E452A57417B119AEFE1A3B88 * __this, NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, float ___item1, const RuntimeMethod* method)
{
	{
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_0 = ___writer0;
		float L_1 = ___item1;
		NullCheck(L_0);
		NetworkWriter_Write_m0004C18BD589955699C8A7CF62BDF75E281CC8D0(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Mirror.SyncListFloat::DeserializeItem(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SyncListFloat_DeserializeItem_mE4625E5B49F7ADBCC5143B8410A47A5627513291 (SyncListFloat_t09BF4B3E58761DE4E452A57417B119AEFE1A3B88 * __this, NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_0 = ___reader0;
		NullCheck(L_0);
		float L_1 = NetworkReader_ReadSingle_m4DB124967BCA4D355FFD74CB84BFC2346205C138(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Mirror.SyncListFloat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListFloat__ctor_m32E01DFBF689B8972A3E2D5FFCCF6A9BA640F896 (SyncListFloat_t09BF4B3E58761DE4E452A57417B119AEFE1A3B88 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListFloat__ctor_m32E01DFBF689B8972A3E2D5FFCCF6A9BA640F896_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SyncList_1__ctor_m586A3A332EE27FFE087998AC680D1A86E847D380(__this, /*hidden argument*/SyncList_1__ctor_m586A3A332EE27FFE087998AC680D1A86E847D380_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.SyncListInt::SerializeItem(Mirror.NetworkWriter,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListInt_SerializeItem_m8FEB2F0956D625A94747C5F7BB08F3A7A8FD886C (SyncListInt_t5C20EECACEE550DAED46A2DE6E39E0B99E3BB404 * __this, NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, int32_t ___item1, const RuntimeMethod* method)
{
	{
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_0 = ___writer0;
		int32_t L_1 = ___item1;
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_m0AA6DAF853C4EAA3357E73394772DD630A334180(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Mirror.SyncListInt::DeserializeItem(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncListInt_DeserializeItem_m53CB2D13FDBDDC2B0E482B2B4003FBB071EBC945 (SyncListInt_t5C20EECACEE550DAED46A2DE6E39E0B99E3BB404 * __this, NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1 = NetworkReader_ReadPackedUInt32_mE3C7CB69F241D513E8459771731B355208C81557(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Mirror.SyncListInt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListInt__ctor_mC66FD76F1BF4E80751A9F67AF7C699FB1AD9E32B (SyncListInt_t5C20EECACEE550DAED46A2DE6E39E0B99E3BB404 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListInt__ctor_mC66FD76F1BF4E80751A9F67AF7C699FB1AD9E32B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SyncList_1__ctor_m619B6F305570F672DBEB3B88E5E740B01D2BECBC(__this, /*hidden argument*/SyncList_1__ctor_m619B6F305570F672DBEB3B88E5E740B01D2BECBC_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.SyncListString::SerializeItem(Mirror.NetworkWriter,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListString_SerializeItem_m36B744F661F7F8966CAFB248905E9C0C4FD6C785 (SyncListString_t69366AD8A01F0912BC568BE682FB9549A99D0382 * __this, NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, String_t* ___item1, const RuntimeMethod* method)
{
	{
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_0 = ___writer0;
		String_t* L_1 = ___item1;
		NullCheck(L_0);
		NetworkWriter_Write_m31129D04023289A55447C3D1C425C16362B71135(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String Mirror.SyncListString::DeserializeItem(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SyncListString_DeserializeItem_m52C65BD9443EE9A202B7D13322DE42A39C9A9975 (SyncListString_t69366AD8A01F0912BC568BE682FB9549A99D0382 * __this, NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_0 = ___reader0;
		NullCheck(L_0);
		String_t* L_1 = NetworkReader_ReadString_mAA56FAB8C151A6C883975E22098B47F18C7942A5(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Mirror.SyncListString::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListString__ctor_m6C999729B8811D8D58413C3887B747A47C7427CF (SyncListString_t69366AD8A01F0912BC568BE682FB9549A99D0382 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListString__ctor_m6C999729B8811D8D58413C3887B747A47C7427CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SyncList_1__ctor_m4EB638BEE0D7B9DDE3B838A50E024B2C3B81F4F3(__this, /*hidden argument*/SyncList_1__ctor_m4EB638BEE0D7B9DDE3B838A50E024B2C3B81F4F3_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.SyncListUInt::SerializeItem(Mirror.NetworkWriter,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListUInt_SerializeItem_m0AC93958452D3A75E52DD2FA4EC9E78D3A230C72 (SyncListUInt_tEF4E598A708B22DAB55C04F092CD12DD0C383D9D * __this, NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, uint32_t ___item1, const RuntimeMethod* method)
{
	{
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_0 = ___writer0;
		uint32_t L_1 = ___item1;
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_m0AA6DAF853C4EAA3357E73394772DD630A334180(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.UInt32 Mirror.SyncListUInt::DeserializeItem(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SyncListUInt_DeserializeItem_m50C652EBA57661E04281213B66E76190E4100512 (SyncListUInt_tEF4E598A708B22DAB55C04F092CD12DD0C383D9D * __this, NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1 = NetworkReader_ReadPackedUInt32_mE3C7CB69F241D513E8459771731B355208C81557(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Mirror.SyncListUInt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListUInt__ctor_mC63CA21551A6276CFC96200320D776FB934B4F2B (SyncListUInt_tEF4E598A708B22DAB55C04F092CD12DD0C383D9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListUInt__ctor_mC63CA21551A6276CFC96200320D776FB934B4F2B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SyncList_1__ctor_m23D944C8E6AD1D72C974724BE217994CA0A65654(__this, /*hidden argument*/SyncList_1__ctor_m23D944C8E6AD1D72C974724BE217994CA0A65654_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.SyncVarAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncVarAttribute__ctor_mB9379B65799B6F617032C7DF95B75088C7194701 (SyncVarAttribute_tA9753A7344FD1634277628C93CB8A85D0BB21436 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.TargetRpcAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetRpcAttribute__ctor_mE73EB62C48F73848171BEC773814FB03171F83FD (TargetRpcAttribute_tBD6E81F8BAED840414BA159DDC00A9A8ED8CAAA7 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.TelepathyTransport::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_Awake_m12EE825A644042E6CC700A936318F7DD93BF19F9 (TelepathyTransport_tDEC703A55ECE19175BBCDBBBFBAAF35B243F4918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TelepathyTransport_Awake_m12EE825A644042E6CC700A936318F7DD93BF19F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_0 = (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)il2cpp_codegen_object_new(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var);
		Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3(L_0, NULL, (intptr_t)((intptr_t)Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var);
		((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->set_Log_0(L_0);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_1 = (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)il2cpp_codegen_object_new(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var);
		Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3(L_1, NULL, (intptr_t)((intptr_t)Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3_RuntimeMethod_var);
		((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->set_LogWarning_1(L_1);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_2 = (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)il2cpp_codegen_object_new(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var);
		Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3(L_2, NULL, (intptr_t)((intptr_t)Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3_RuntimeMethod_var);
		((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->set_LogError_2(L_2);
		Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * L_3 = __this->get_client_15();
		bool L_4 = __this->get_NoDelay_14();
		NullCheck(L_3);
		((Common_tFCC994B3A027AC464326397B2D22751359949226 *)L_3)->set_NoDelay_2(L_4);
		Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * L_5 = __this->get_server_16();
		bool L_6 = __this->get_NoDelay_14();
		NullCheck(L_5);
		((Common_tFCC994B3A027AC464326397B2D22751359949226 *)L_5)->set_NoDelay_2(L_6);
		Server_NextConnectionId_mA859D97AA15DA3E1C1B8AA3B15F9F0693036A2FB(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral47316692AA00E6249A8B62B17F0571A6C6B0E787, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mirror.TelepathyTransport::ClientConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TelepathyTransport_ClientConnected_mE40B71C8C9491C858213DFB7B00C5182A5B2156E (TelepathyTransport_tDEC703A55ECE19175BBCDBBBFBAAF35B243F4918 * __this, const RuntimeMethod* method)
{
	{
		Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * L_0 = __this->get_client_15();
		NullCheck(L_0);
		bool L_1 = Client_get_Connected_m98098892072CD1FEB5926C8F0416422DAD4702FE(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Mirror.TelepathyTransport::ClientConnect(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ClientConnect_mAE705AF23570989C59BCBE38B29F5949955EAB56 (TelepathyTransport_tDEC703A55ECE19175BBCDBBBFBAAF35B243F4918 * __this, String_t* ___address0, const RuntimeMethod* method)
{
	{
		Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * L_0 = __this->get_client_15();
		String_t* L_1 = ___address0;
		uint16_t L_2 = __this->get_port_13();
		NullCheck(L_0);
		Client_Connect_m5A61686AC8018F73202AE1005AB4FE6889B7060A(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mirror.TelepathyTransport::ClientSend(System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TelepathyTransport_ClientSend_m5926AAFBFBF68B15143CD889800211EB31E30219 (TelepathyTransport_tDEC703A55ECE19175BBCDBBBFBAAF35B243F4918 * __this, int32_t ___channelId0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data1, const RuntimeMethod* method)
{
	{
		Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * L_0 = __this->get_client_15();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___data1;
		NullCheck(L_0);
		bool L_2 = Client_Send_m99ADE8A1004BB6B69291E06DF4032C1C3E950B4F(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Mirror.TelepathyTransport::ProcessClientMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TelepathyTransport_ProcessClientMessage_mE8C5AB3AC778AE489D3C768BF928DC64ACE24DC8 (TelepathyTransport_tDEC703A55ECE19175BBCDBBBFBAAF35B243F4918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TelepathyTransport_ProcessClientMessage_mE8C5AB3AC778AE489D3C768BF928DC64ACE24DC8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * L_0 = __this->get_client_15();
		NullCheck(L_0);
		bool L_1 = Common_GetNextMessage_mFF794F304B59C60898F5F6927DD8EBD063864A28(L_0, (Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 **)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0064;
		}
	}
	{
		Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_eventType_1();
		V_1 = L_3;
		int32_t L_4 = V_1;
		switch (L_4)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_0037;
			}
			case 2:
			{
				goto IL_004a;
			}
		}
	}
	{
		goto IL_0057;
	}

IL_002a:
	{
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_5 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnClientConnected_5();
		NullCheck(L_5);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(L_5, /*hidden argument*/NULL);
		goto IL_0062;
	}

IL_0037:
	{
		UnityEventByteArray_t8F9C385E1AFA9E13C18F58FAA2CC7D062BD6E07E * L_6 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnClientDataReceived_6();
		Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 * L_7 = V_0;
		NullCheck(L_7);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = L_7->get_data_2();
		NullCheck(L_6);
		UnityEvent_1_Invoke_mE94F75B7336AB64579FB710C7B62220B8EB1EF3C(L_6, L_8, /*hidden argument*/UnityEvent_1_Invoke_mE94F75B7336AB64579FB710C7B62220B8EB1EF3C_RuntimeMethod_var);
		goto IL_0062;
	}

IL_004a:
	{
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_9 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnClientDisconnected_8();
		NullCheck(L_9);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(L_9, /*hidden argument*/NULL);
		goto IL_0062;
	}

IL_0057:
	{
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_10 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnClientDisconnected_8();
		NullCheck(L_10);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(L_10, /*hidden argument*/NULL);
	}

IL_0062:
	{
		return (bool)1;
	}

IL_0064:
	{
		return (bool)0;
	}
}
// System.Void Mirror.TelepathyTransport::ClientDisconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ClientDisconnect_m3C75BFB755C25C2217331FDB8895B0269057C243 (TelepathyTransport_tDEC703A55ECE19175BBCDBBBFBAAF35B243F4918 * __this, const RuntimeMethod* method)
{
	{
		Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * L_0 = __this->get_client_15();
		NullCheck(L_0);
		Client_Disconnect_m4F84F228BB93B41776E6ECDBC9D3753CE88673D3(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.TelepathyTransport::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_LateUpdate_mCE285B95F66151C60752BBD56E0D36F5A7F5274D (TelepathyTransport_tDEC703A55ECE19175BBCDBBBFBAAF35B243F4918 * __this, const RuntimeMethod* method)
{

IL_0000:
	{
		bool L_0 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = TelepathyTransport_ProcessClientMessage_mE8C5AB3AC778AE489D3C768BF928DC64ACE24DC8(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0000;
		}
	}

IL_0010:
	{
		bool L_2 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		bool L_3 = TelepathyTransport_ProcessServerMessage_m259C848A6086174424B1A6E5D316182EFBA17E59(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0010;
		}
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean Mirror.TelepathyTransport::ServerActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TelepathyTransport_ServerActive_m3D185FDE2B60EEF61B5E2B179DCA9C23DD250CFA (TelepathyTransport_tDEC703A55ECE19175BBCDBBBFBAAF35B243F4918 * __this, const RuntimeMethod* method)
{
	{
		Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * L_0 = __this->get_server_16();
		NullCheck(L_0);
		bool L_1 = Server_get_Active_m8A88A9B4EE0F8CC542518A444874585E2C6DA23E(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Mirror.TelepathyTransport::ServerStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ServerStart_m42838B00EBBDAB7756A1D252985AE392806CD72D (TelepathyTransport_tDEC703A55ECE19175BBCDBBBFBAAF35B243F4918 * __this, const RuntimeMethod* method)
{
	{
		Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * L_0 = __this->get_server_16();
		uint16_t L_1 = __this->get_port_13();
		NullCheck(L_0);
		Server_Start_mDC7D017C87BAF8E28C0EEF8B87B0285271FDAD26(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mirror.TelepathyTransport::ServerSend(System.Int32,System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TelepathyTransport_ServerSend_m00B7CAD0C06121742BF1281516DDE51C4EFDDD2C (TelepathyTransport_tDEC703A55ECE19175BBCDBBBFBAAF35B243F4918 * __this, int32_t ___connectionId0, int32_t ___channelId1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data2, const RuntimeMethod* method)
{
	{
		Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * L_0 = __this->get_server_16();
		int32_t L_1 = ___connectionId0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___data2;
		NullCheck(L_0);
		bool L_3 = Server_Send_m7EBF1040EBD3E98CF7207F9BEE3C9C317E8902AE(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Mirror.TelepathyTransport::ProcessServerMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TelepathyTransport_ProcessServerMessage_m259C848A6086174424B1A6E5D316182EFBA17E59 (TelepathyTransport_tDEC703A55ECE19175BBCDBBBFBAAF35B243F4918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TelepathyTransport_ProcessServerMessage_m259C848A6086174424B1A6E5D316182EFBA17E59_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * L_0 = __this->get_server_16();
		NullCheck(L_0);
		bool L_1 = Common_GetNextMessage_mFF794F304B59C60898F5F6927DD8EBD063864A28(L_0, (Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 **)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_eventType_1();
		V_1 = L_3;
		int32_t L_4 = V_1;
		switch (L_4)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_0056;
			}
		}
	}
	{
		goto IL_0069;
	}

IL_002a:
	{
		UnityEventInt_t25605BA0F5D789946A94CBAF118716E9FF3EE69A * L_5 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnServerConnected_9();
		Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_connectionId_0();
		NullCheck(L_5);
		UnityEvent_1_Invoke_mAC9BEEF287D58E79A447A57E28D3679F9B199D70(L_5, L_7, /*hidden argument*/UnityEvent_1_Invoke_mAC9BEEF287D58E79A447A57E28D3679F9B199D70_RuntimeMethod_var);
		goto IL_007a;
	}

IL_003d:
	{
		UnityEventIntByteArray_t5B46D154F0F9D94AB13839D6B8CA25DD9E9013CF * L_8 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnServerDataReceived_10();
		Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_connectionId_0();
		Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 * L_11 = V_0;
		NullCheck(L_11);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = L_11->get_data_2();
		NullCheck(L_8);
		UnityEvent_2_Invoke_m6AABD556AD11F3503B7EF7D96CC390D16E80602A(L_8, L_10, L_12, /*hidden argument*/UnityEvent_2_Invoke_m6AABD556AD11F3503B7EF7D96CC390D16E80602A_RuntimeMethod_var);
		goto IL_007a;
	}

IL_0056:
	{
		UnityEventInt_t25605BA0F5D789946A94CBAF118716E9FF3EE69A * L_13 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnServerDisconnected_12();
		Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 * L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = L_14->get_connectionId_0();
		NullCheck(L_13);
		UnityEvent_1_Invoke_mAC9BEEF287D58E79A447A57E28D3679F9B199D70(L_13, L_15, /*hidden argument*/UnityEvent_1_Invoke_mAC9BEEF287D58E79A447A57E28D3679F9B199D70_RuntimeMethod_var);
		goto IL_007a;
	}

IL_0069:
	{
		UnityEventInt_t25605BA0F5D789946A94CBAF118716E9FF3EE69A * L_16 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnServerDisconnected_12();
		Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 * L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = L_17->get_connectionId_0();
		NullCheck(L_16);
		UnityEvent_1_Invoke_mAC9BEEF287D58E79A447A57E28D3679F9B199D70(L_16, L_18, /*hidden argument*/UnityEvent_1_Invoke_mAC9BEEF287D58E79A447A57E28D3679F9B199D70_RuntimeMethod_var);
	}

IL_007a:
	{
		return (bool)1;
	}

IL_007c:
	{
		return (bool)0;
	}
}
// System.Boolean Mirror.TelepathyTransport::ServerDisconnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TelepathyTransport_ServerDisconnect_m1115ED824BFA5D37C608D0C370F5E353768CBDAF (TelepathyTransport_tDEC703A55ECE19175BBCDBBBFBAAF35B243F4918 * __this, int32_t ___connectionId0, const RuntimeMethod* method)
{
	{
		Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * L_0 = __this->get_server_16();
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		bool L_2 = Server_Disconnect_m76A6B045DDC94883F543150B79C2186CC29FB2C6(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Mirror.TelepathyTransport::ServerGetClientAddress(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TelepathyTransport_ServerGetClientAddress_m6F399F0A3D0E5379929DE060C9411C2BD0AF67FC (TelepathyTransport_tDEC703A55ECE19175BBCDBBBFBAAF35B243F4918 * __this, int32_t ___connectionId0, const RuntimeMethod* method)
{
	{
		Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * L_0 = __this->get_server_16();
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		String_t* L_2 = Server_GetClientAddress_m3A89CB4D5CFB895D546C53492F1B1A68B32E94AC(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Mirror.TelepathyTransport::ServerStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ServerStop_m1CAF132EDD03AB5A67E20C5E038A83B0B39A99F7 (TelepathyTransport_tDEC703A55ECE19175BBCDBBBFBAAF35B243F4918 * __this, const RuntimeMethod* method)
{
	{
		Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * L_0 = __this->get_server_16();
		NullCheck(L_0);
		Server_Stop_mF5732A0EEA771924FF5D204A2EDB26C4E404BC90(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.TelepathyTransport::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_Shutdown_m56D0FF3942B9BDBE1CD083C5378650B5FFEEBBF9 (TelepathyTransport_tDEC703A55ECE19175BBCDBBBFBAAF35B243F4918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TelepathyTransport_Shutdown_m56D0FF3942B9BDBE1CD083C5378650B5FFEEBBF9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral6D43417A541E53961F3CDDB47B5C0ABAF518DBD2, /*hidden argument*/NULL);
		Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * L_0 = __this->get_client_15();
		NullCheck(L_0);
		Client_Disconnect_m4F84F228BB93B41776E6ECDBC9D3753CE88673D3(L_0, /*hidden argument*/NULL);
		Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * L_1 = __this->get_server_16();
		NullCheck(L_1);
		Server_Stop_mF5732A0EEA771924FF5D204A2EDB26C4E404BC90(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Mirror.TelepathyTransport::GetMaxPacketSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TelepathyTransport_GetMaxPacketSize_mA1DB7E4CB7B868577B080DCA5AE3A93B40A70150 (TelepathyTransport_tDEC703A55ECE19175BBCDBBBFBAAF35B243F4918 * __this, int32_t ___channelId0, const RuntimeMethod* method)
{
	{
		return ((int32_t)2147483647LL);
	}
}
// System.String Mirror.TelepathyTransport::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TelepathyTransport_ToString_m8EE2E92DFCC7BBA99670FC5A656F47E2836FE631 (TelepathyTransport_tDEC703A55ECE19175BBCDBBBFBAAF35B243F4918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TelepathyTransport_ToString_m8EE2E92DFCC7BBA99670FC5A656F47E2836FE631_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * L_0 = __this->get_server_16();
		NullCheck(L_0);
		bool L_1 = Server_get_Active_m8A88A9B4EE0F8CC542518A444874585E2C6DA23E(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * L_2 = __this->get_server_16();
		NullCheck(L_2);
		TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * L_3 = L_2->get_listener_4();
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * L_4 = __this->get_server_16();
		NullCheck(L_4);
		TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * L_5 = L_4->get_listener_4();
		NullCheck(L_5);
		EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * L_6 = TcpListener_get_LocalEndpoint_m9C222867109B5ECC2B4730D16655E8184FF4F656(L_5, /*hidden argument*/NULL);
		String_t* L_7 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralBF86AE9241F89FAE8E186A310192333CF4111E0F, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0035:
	{
		Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * L_8 = __this->get_client_15();
		NullCheck(L_8);
		bool L_9 = Client_get_Connecting_m4A163551916F14C2EF31648888C19DD1BE6BEA40(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_004f;
		}
	}
	{
		Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * L_10 = __this->get_client_15();
		NullCheck(L_10);
		bool L_11 = Client_get_Connected_m98098892072CD1FEB5926C8F0416422DAD4702FE(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_006f;
		}
	}

IL_004f:
	{
		Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * L_12 = __this->get_client_15();
		NullCheck(L_12);
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_13 = L_12->get_client_4();
		NullCheck(L_13);
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_14 = TcpClient_get_Client_m7EE266557B305926B1A845F3C75E2532899D4395_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * L_15 = Socket_get_RemoteEndPoint_mD926D4C2BD8A8B534D992E177D155F7EF8685D20(L_14, /*hidden argument*/NULL);
		String_t* L_16 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral3CF39F219504612F15FBAED90694EBBB76684AD6, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_006f:
	{
		return _stringLiteral737B4762E8BFE4D539AD3DC9D5353A05908A7018;
	}
}
// System.Void Mirror.TelepathyTransport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport__ctor_m70EEDBB02E6E30521C64ECA4547A29ECE021F560 (TelepathyTransport_tDEC703A55ECE19175BBCDBBBFBAAF35B243F4918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TelepathyTransport__ctor_m70EEDBB02E6E30521C64ECA4547A29ECE021F560_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_port_13((uint16_t)((int32_t)7777));
		__this->set_NoDelay_14((bool)1);
		Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * L_0 = (Client_t00748E10E80324FD9D1C491A162829231DB6A3FA *)il2cpp_codegen_object_new(Client_t00748E10E80324FD9D1C491A162829231DB6A3FA_il2cpp_TypeInfo_var);
		Client__ctor_mCA926EB641779A5A0B7FC0A0BCC17F8E7D50796B(L_0, /*hidden argument*/NULL);
		__this->set_client_15(L_0);
		Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * L_1 = (Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 *)il2cpp_codegen_object_new(Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818_il2cpp_TypeInfo_var);
		Server__ctor_mEC48C7169D134409ABAF240CBE9415AAF5C44A6D(L_1, /*hidden argument*/NULL);
		__this->set_server_16(L_1);
		Transport__ctor_m95D842812D2D1430F44F53681EB4ECEB6FBA5BBC(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Mirror.Transport::Available()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transport_Available_m9DF8E37814EA54E1F57F2A41E7C8CAAAB9F73AFE (Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)((int32_t)17)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Mirror.Transport::GetConnectionInfo(System.Int32,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transport_GetConnectionInfo_m33D52EDD0DB2F47BE69B0FC548538710DB2A5E82 (Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * __this, int32_t ___connectionId0, String_t** ___address1, const RuntimeMethod* method)
{
	{
		String_t** L_0 = ___address1;
		int32_t L_1 = ___connectionId0;
		String_t* L_2 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(14 /* System.String Mirror.Transport::ServerGetClientAddress(System.Int32) */, __this, L_1);
		*((RuntimeObject **)L_0) = (RuntimeObject *)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)L_2);
		return (bool)1;
	}
}
// System.Void Mirror.Transport::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transport_Update_m6CA326C1766E987D68EA447D0AC44BE7B362988C (Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Mirror.Transport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transport__ctor_m95D842812D2D1430F44F53681EB4ECEB6FBA5BBC (Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.ULocalConnectionToClient::.ctor(Mirror.LocalClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ULocalConnectionToClient__ctor_mA3575A759C821A3886CDF1911110CF9C564AF3CF (ULocalConnectionToClient_tD46D83EA5610993710B35F9585058E7269225304 * __this, LocalClient_tE212625B6AD521629F4E826D3AD1220DBA5A19DC * ___localClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ULocalConnectionToClient__ctor_mA3575A759C821A3886CDF1911110CF9C564AF3CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkConnection__ctor_mE0BB14874077E4D57BF32824975934E8833B90FD(__this, _stringLiteral0C84AC39FC120C1E579C09FEAA062CA04994E08F, /*hidden argument*/NULL);
		LocalClient_tE212625B6AD521629F4E826D3AD1220DBA5A19DC * L_0 = ___localClient0;
		__this->set_localClient_11(L_0);
		return;
	}
}
// System.Boolean Mirror.ULocalConnectionToClient::SendBytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ULocalConnectionToClient_SendBytes_mCEFCAD4A728E824B1E58EA253E7EE3BD9E0B3533 (ULocalConnectionToClient_tD46D83EA5610993710B35F9585058E7269225304 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___channelId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ULocalConnectionToClient_SendBytes_mCEFCAD4A728E824B1E58EA253E7EE3BD9E0B3533_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		LocalClient_tE212625B6AD521629F4E826D3AD1220DBA5A19DC * L_0 = __this->get_localClient_11();
		NullCheck(L_0);
		Queue_1_t8562F1B190CBBD67B4F5E105ECADB5DE3B24DD7F * L_1 = L_0->get_packetQueue_6();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___bytes0;
		NullCheck(L_1);
		Queue_1_Enqueue_mEF86147DA97BC52597094D71FCC03A167B7B397D(L_1, L_2, /*hidden argument*/Queue_1_Enqueue_mEF86147DA97BC52597094D71FCC03A167B7B397D_RuntimeMethod_var);
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.ULocalConnectionToServer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ULocalConnectionToServer__ctor_m8C1772A9FB32FC3883B5248F12D0911E0859CA15 (ULocalConnectionToServer_tF9453DCD038DA1326F5A2EFD601668BF5C488890 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ULocalConnectionToServer__ctor_m8C1772A9FB32FC3883B5248F12D0911E0859CA15_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkConnection__ctor_mE0BB14874077E4D57BF32824975934E8833B90FD(__this, _stringLiteral8A90E4187AA462FD7BCD9E2521B1C4F09372DBAF, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mirror.ULocalConnectionToServer::SendBytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ULocalConnectionToServer_SendBytes_mBECAED11180EF824D4C838538C66E7CCEB7C3AF4 (ULocalConnectionToServer_tF9453DCD038DA1326F5A2EFD601668BF5C488890 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___channelId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ULocalConnectionToServer_SendBytes_mBECAED11180EF824D4C838538C66E7CCEB7C3AF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___bytes0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralFC82D79CC725F459BB30E979E27631B67E33B7F6, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_il2cpp_TypeInfo_var);
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_1 = NetworkServer_get_localConnection_mEB7460522A686E4B4CE08AA092CAA1A963F9A42D_inline(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___bytes0;
		NullCheck(L_1);
		VirtActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(9 /* System.Void Mirror.NetworkConnection::TransportReceive(System.Byte[]) */, L_1, L_2);
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.UnSpawnDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnSpawnDelegate__ctor_m81C85143D94C2796F0E364697C3F639FA9CD4203 (UnSpawnDelegate_tC3DA8AD221C58FA5C6AA3BECA2B91E4DE1BE901A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mirror.UnSpawnDelegate::Invoke(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnSpawnDelegate_Invoke_m959C93BDD3E49DFC8EA8D3F8D67471D7E45C2A72 (UnSpawnDelegate_tC3DA8AD221C58FA5C6AA3BECA2B91E4DE1BE901A * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___spawned0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___spawned0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___spawned0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___spawned0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___spawned0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___spawned0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___spawned0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___spawned0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___spawned0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(targetMethod, targetThis, ___spawned0);
					else
						GenericVirtActionInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(targetMethod, targetThis, ___spawned0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___spawned0);
					else
						VirtActionInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___spawned0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___spawned0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Mirror.UnSpawnDelegate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnSpawnDelegate_BeginInvoke_m8E1D66338AEA51EC52C39E5C5A914CFDABA83BB6 (UnSpawnDelegate_tC3DA8AD221C58FA5C6AA3BECA2B91E4DE1BE901A * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___spawned0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___spawned0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Mirror.UnSpawnDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnSpawnDelegate_EndInvoke_mF677B15CC6415973B3B15BE90E765788FB7D749E (UnSpawnDelegate_tC3DA8AD221C58FA5C6AA3BECA2B91E4DE1BE901A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.UnityEventByteArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventByteArray__ctor_mB6116F7B49AF9F6792A30DD4ECF17AD45E8CC995 (UnityEventByteArray_t8F9C385E1AFA9E13C18F58FAA2CC7D062BD6E07E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEventByteArray__ctor_mB6116F7B49AF9F6792A30DD4ECF17AD45E8CC995_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m92F7EFB8C3F2F732F07E445BAF5647170FB88AE2(__this, /*hidden argument*/UnityEvent_1__ctor_m92F7EFB8C3F2F732F07E445BAF5647170FB88AE2_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.UnityEventException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventException__ctor_m164CDC4DD4E65EFBB230D54D36684183477F6949 (UnityEventException_tC51123DDAD93C3B3E6F3C32395828A4FEA1CAC74 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEventException__ctor_m164CDC4DD4E65EFBB230D54D36684183477F6949_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m5ED407B8A717F69AF2F7C7B986784DB3840EA637(__this, /*hidden argument*/UnityEvent_1__ctor_m5ED407B8A717F69AF2F7C7B986784DB3840EA637_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.UnityEventInt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventInt__ctor_mD19E65D8F5DBDD3688C607A1707E6E79964955C6 (UnityEventInt_t25605BA0F5D789946A94CBAF118716E9FF3EE69A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEventInt__ctor_mD19E65D8F5DBDD3688C607A1707E6E79964955C6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m1EF01690E1F8F81E7C190F8D9610573D5E59490C(__this, /*hidden argument*/UnityEvent_1__ctor_m1EF01690E1F8F81E7C190F8D9610573D5E59490C_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.UnityEventIntByteArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventIntByteArray__ctor_m821FADE9DB4A4780E020DAFBD4FC0F15AB1E6AE9 (UnityEventIntByteArray_t5B46D154F0F9D94AB13839D6B8CA25DD9E9013CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEventIntByteArray__ctor_m821FADE9DB4A4780E020DAFBD4FC0F15AB1E6AE9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m792A3968A997E15088CFED6C9C07F2343D4BB362(__this, /*hidden argument*/UnityEvent_2__ctor_m792A3968A997E15088CFED6C9C07F2343D4BB362_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.UnityEventIntException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventIntException__ctor_m861C1070F6F6C5CF3AE516BF3EE3197E788397D2 (UnityEventIntException_t4C17526221B8BEEAA11C8D30DB004ACE4F1BEFF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEventIntException__ctor_m861C1070F6F6C5CF3AE516BF3EE3197E788397D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m58212C267C1FC0ABDB1C3E6563369065892758D0(__this, /*hidden argument*/UnityEvent_2__ctor_m58212C267C1FC0ABDB1C3E6563369065892758D0_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.UpdateVarsMessage::Deserialize(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateVarsMessage_Deserialize_m001B2BCB4E9883BC3A10ACA63C0BE8D7F6A5BBAA (UpdateVarsMessage_tEE310E3D93629AB8305DDD549F8D98F0E5D8DFF1 * __this, NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1 = NetworkReader_ReadPackedUInt32_mE3C7CB69F241D513E8459771731B355208C81557(L_0, /*hidden argument*/NULL);
		__this->set_netId_0(L_1);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_2 = ___reader0;
		NullCheck(L_2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = NetworkReader_ReadBytesAndSize_mCBCEE12AE67150B0A9B42124921F261D30AD1467(L_2, /*hidden argument*/NULL);
		__this->set_payload_1(L_3);
		return;
	}
}
// System.Void Mirror.UpdateVarsMessage::Serialize(Mirror.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateVarsMessage_Serialize_mC37BB0D30B6BD0E5A7F1F189749B4DE4A74AEC7A (UpdateVarsMessage_tEE310E3D93629AB8305DDD549F8D98F0E5D8DFF1 * __this, NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, const RuntimeMethod* method)
{
	{
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_0 = ___writer0;
		uint32_t L_1 = __this->get_netId_0();
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_m0AA6DAF853C4EAA3357E73394772DD630A334180(L_0, L_1, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_2 = ___writer0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = __this->get_payload_1();
		NullCheck(L_2);
		NetworkWriter_WriteBytesAndSize_mA5F7C6175985B068D575B010DE0DA4B1B0490FF7(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.UpdateVarsMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateVarsMessage__ctor_m2AC47F9AA5ADB758B167BCC3D05E5DBC90A7E67F (UpdateVarsMessage_tEE310E3D93629AB8305DDD549F8D98F0E5D8DFF1 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m72CD982948A637ECBEA1994ED9AF0ABE6FACC0D1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR double ExponentialMovingAverage_get_Value_m3CA532CA169F336D8E94939A23F78BDCCCDE02F4_inline (ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get_U3CValueU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR double ExponentialMovingAverage_get_Var_m6B5FB7D5E92B0E0AB92C70EEAF83ED5190261983_inline (ExponentialMovingAverage_t0A6F6499D3A6569CA2DD601DB9F89DEE6EB55943 * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get_U3CVarU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint32_t NetworkIdentity_get_netId_m3CAE8990CFC9FE1389B3001802CB481389D99CD4_inline (NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_U3CnetIdU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * TcpClient_get_Client_m7EE266557B305926B1A845F3C75E2532899D4395_inline (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, const RuntimeMethod* method)
{
	{
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_m_ClientSocket_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * NetworkServer_get_localConnection_mEB7460522A686E4B4CE08AA092CAA1A963F9A42D_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkServer_get_localConnection_mEB7460522A686E4B4CE08AA092CAA1A963F9A42DMirror3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_il2cpp_TypeInfo_var);
		ULocalConnectionToClient_tD46D83EA5610993710B35F9585058E7269225304 * L_0 = ((NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_StaticFields*)il2cpp_codegen_static_fields_for(NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_il2cpp_TypeInfo_var))->get_s_LocalConnection_0();
		return L_0;
	}
}
