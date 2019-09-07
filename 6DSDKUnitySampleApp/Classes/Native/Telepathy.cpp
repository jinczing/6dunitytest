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

template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<System.String>
struct Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Int32,Telepathy.Server/ClientToken>
struct Tables_tCC402AD0CEB467D74C289FFC165ADDB04BA8EEDF;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,System.Object>
struct ConcurrentDictionary_2_tE1C69177490F46445DFE2487E4CCDC475ABA4A57;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.Server/ClientToken>
struct ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B;
// System.Collections.Concurrent.ConcurrentQueue`1/Segment<Telepathy.Message>
struct Segment_t931D93A8E56584FDB5DDC90FF01782FBAB800294;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Object>
struct ConcurrentQueue_1_t67678F282291EEDA513E491252D5B81D7288AE29;
// System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>
struct ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_tCCFC72A59ECFB2EC77FA0D65CCBFA69097497D0A;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Telepathy.Server/ClientToken>>
struct IEnumerator_1_t508525B64491AF47B5A1088519688F29FD61FF2B;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t7B82AA0F8B96BAAA21E36DDF7A1FE4348BDDBE95;
// System.Collections.Generic.Queue`1<System.Byte[]>
struct Queue_1_t8562F1B190CBBD67B4F5E105ECADB5DE3B24DD7F;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Console/InternalCancelHandler
struct InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A;
// System.ConsoleCancelEventHandler
struct ConsoleCancelEventHandler_t6F3B5D9C55C25FF6B53EFEDA9150EFE807311EB4;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.IO.TextReader
struct TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A;
// System.IO.TextWriter
struct TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0;
// System.IOAsyncCallback
struct IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Net.EndPoint
struct EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980;
// System.Net.IPAddress
struct IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE;
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
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Principal.IPrincipal
struct IPrincipal_t63FD7F58FBBE134C8FE4D31710AAEA00B000F0BF;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98;
// System.Threading.ExecutionContext
struct ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70;
// System.Threading.InternalThread
struct InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192;
// System.Threading.ManualResetEvent
struct ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.Thread
struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7;
// System.Threading.ThreadStart
struct ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF;
// System.UInt16[]
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Telepathy.Client
struct Client_t00748E10E80324FD9D1C491A162829231DB6A3FA;
// Telepathy.Client/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A;
// Telepathy.Common
struct Common_tFCC994B3A027AC464326397B2D22751359949226;
// Telepathy.Message
struct Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603;
// Telepathy.SafeQueue`1<System.Byte[]>
struct SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10;
// Telepathy.SafeQueue`1<System.Object>
struct SafeQueue_1_t73CF4A8B82A998628569E4E7DB947BC37AF48F8D;
// Telepathy.Server
struct Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818;
// Telepathy.Server/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t435D804CCD2D8FDFDFC19ED930ACC19F130DED35;
// Telepathy.Server/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t0538B57D079BC105BEA75B525EAD92ACF0215212;
// Telepathy.Server/ClientToken
struct ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t508525B64491AF47B5A1088519688F29FD61FF2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadAbortException_t0B7CFB34B2901B695FBCFF84E0A1EBDFC8177468_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadInterruptedException_t40D8296AA9D9E8B74E29BFAE1089CFACC5F03751_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_t435D804CCD2D8FDFDFC19ED930ACC19F130DED35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_t0538B57D079BC105BEA75B525EAD92ACF0215212_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07C2A556387E3B1C144A340F4608E87E198E43E3;
IL2CPP_EXTERN_C String_t* _stringLiteral1619BAA13AB771AF07557F27C1908E8741D4EB10;
IL2CPP_EXTERN_C String_t* _stringLiteral2F6AB31A42C4C7E46DC0749EA2BFD13700474A55;
IL2CPP_EXTERN_C String_t* _stringLiteral3118EE4F680A68045ACAF0DA59222F14B2B82D03;
IL2CPP_EXTERN_C String_t* _stringLiteral323840433491887C80933D471B6D60A7DA8FA3AD;
IL2CPP_EXTERN_C String_t* _stringLiteral3AFBB7D02FD452639C5A0C67A1F100237541A3D2;
IL2CPP_EXTERN_C String_t* _stringLiteral4C6EA14AE90A81F87AE5B46E129FC9723656FCB4;
IL2CPP_EXTERN_C String_t* _stringLiteral66543C5BE27E9FC762E6F61A6DE92E339B2A8B9F;
IL2CPP_EXTERN_C String_t* _stringLiteral6AB159501C3B6F7C716A8800C00D53A2072E3760;
IL2CPP_EXTERN_C String_t* _stringLiteral74265ECE03804A284CADB382A1C43A65A3BED1D6;
IL2CPP_EXTERN_C String_t* _stringLiteral76F1F10EB368D6EE8D808B40444B229BD727601E;
IL2CPP_EXTERN_C String_t* _stringLiteral802964DAE1D452A4275C8C5317E3A2E9CA7B6001;
IL2CPP_EXTERN_C String_t* _stringLiteral836E14BE15578F4F7EC14937830E3FFF06AC407C;
IL2CPP_EXTERN_C String_t* _stringLiteral83A8FCE6863DF8B32EB30DA9374E5F50B9032EF0;
IL2CPP_EXTERN_C String_t* _stringLiteral9A9D4FB8F6DD38303AC06055F285E03378D0ED1E;
IL2CPP_EXTERN_C String_t* _stringLiteralC0ED0BCDBF619BA36EFC50F01E50D7CE7AD7621D;
IL2CPP_EXTERN_C String_t* _stringLiteralC31C331DD77C27DDAEB5B67E6102EAE823BFE03E;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE8DF8A178D45C37CCBA3FBF4BD8950103C51ADC3;
IL2CPP_EXTERN_C String_t* _stringLiteralEDADE908567D0ACA7CEC59214C41F139A3A4FDEB;
IL2CPP_EXTERN_C String_t* _stringLiteralF92BB9CA6048A4C6E366FCC3EC400177841151FF;
IL2CPP_EXTERN_C String_t* _stringLiteralFA8F63962667C303B6561E946EBE125E942D715A;
IL2CPP_EXTERN_C String_t* _stringLiteralFF0B2412DB663B29233C65450608AE6CF9A39980;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Client_U3CReceiveThreadFunctionU3Eb__10_0_m332AE09FEA6BED9159EACABA907653889E42EB0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_Clear_m6A23CE975E89E2159E0FB0A9F6C0467A9BC5B498_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_GetEnumerator_mC8CCB554D71818FC87797CA6A729FE21C6A6D586_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryGetValue_m59346F5E5BE9EA778692883C58EF477723B6F816_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryRemove_mD767D432660C563BFDCCDAC2CACBF3C2B2FB6EAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2__ctor_m37E2237A4B10477387B79E541E5B63D66D61FB77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_set_Item_m5212345FD34A8EB642E9495AF7E914E9C04B7B2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_Enqueue_m6125CF593F2A8706CB4BF556C3061D60B897ED59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_TryDequeue_m6EC4EDDD91C401F34806DE32DC3158C849C1B5A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1__ctor_mE0C98FA8DF17628759165E71ABA079F43E138238_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_get_Count_mE8D982D8EEBBD40AB4C45785A2A6B2D10B60D882_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Console_WriteLine_mA5F7E391799514350980A0DE16983383542CA820_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m324E1CA07A85129724ECAFC8CFDA2061567118E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeQueue_1_Clear_mFD3440BCB58F0F84F0F4BEC9CF69128C9E3B231B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeQueue_1_Enqueue_m82A8D4FE1BA7C08B7D64FBA7338B4EC69356EF47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeQueue_1_TryDequeueAll_m25C99C52B06FCD69F34DF4AA87DB4AAC0A465595_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeQueue_1__ctor_m460E7015E13028426B10F3C99C741A9648354C33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Server_NextConnectionId_mA859D97AA15DA3E1C1B8AA3B15F9F0693036A2FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_0_U3CConnectU3Eb__0_mD5CB6F36326250CDC99D015E0E3F1DE60E353A38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CListenU3Eb__0_mD73080BA15F0C53E985EF0565CBEB860DB8F7653_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CListenU3Eb__1_m7D05331B6C6E61D0DA81B3CD2929F4AF1F3269E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CStartU3Eb__0_mF2A6633F6082F6B14E0441F60090AE0B27D353D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ClientToken__ctor_mC1B5F7E20739789586D05CD6D419828E561FCF89_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Client_Connect_m5A61686AC8018F73202AE1005AB4FE6889B7060A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Client_Disconnect_m4F84F228BB93B41776E6ECDBC9D3753CE88673D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Client_ReceiveThreadFunction_mC2BD6BAFB0F0AFAFB27A2A1575CC5F641A2EA166_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Client_Send_m99ADE8A1004BB6B69291E06DF4032C1C3E950B4F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Client_U3CReceiveThreadFunctionU3Eb__10_0_m332AE09FEA6BED9159EACABA907653889E42EB0E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Client__ctor_mCA926EB641779A5A0B7FC0A0BCC17F8E7D50796B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Common_GetNextMessage_mFF794F304B59C60898F5F6927DD8EBD063864A28_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Common_ReadMessageBlocking_mBF47BC63B12AB301DA1C8635C5CEAEF5B8205FD4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Common_ReceiveLoop_mC03AB28AA2993A62A1ECF6714E82F95CE26D3A6F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Common_SendLoop_m557A26F5F590B71B7AD5E999C10278C91D7FD780_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Common_SendMessagesBlocking_m5066E8D1C091012F7D4A3354EFB65FE95C7C5C33_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Common__cctor_m57448D04D9AAFEBAE67A1C82D4ECA233221736D9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Common__ctor_m13F2E5C6F6BF201A417C3D2F7EEF1068D6C3F963_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Console_get_Error_mE1078EFC5C7C133964838D2A72B8FB9567E4C98ATelepathy_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Logger__cctor_m41F7B2E8747B6E5497190A1B4BAAC9482FA83D11_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkStreamExtensions_ReadSafely_m17A66ABB843CA8587B397C910210A4728808FCCD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Server_Disconnect_m76A6B045DDC94883F543150B79C2186CC29FB2C6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Server_GetClientAddress_m3A89CB4D5CFB895D546C53492F1B1A68B32E94AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Server_Listen_mE133896EBF2A4DE641361060F8C987DD9A73E4C7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Server_NextConnectionId_mA859D97AA15DA3E1C1B8AA3B15F9F0693036A2FB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Server_Send_m7EBF1040EBD3E98CF7207F9BEE3C9C317E8902AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Server_Start_mDC7D017C87BAF8E28C0EEF8B87B0285271FDAD26_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Server_Stop_mF5732A0EEA771924FF5D204A2EDB26C4E404BC90_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Server__ctor_mEC48C7169D134409ABAF240CBE9415AAF5C44A6D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass8_0_U3CListenU3Eb__0_mD73080BA15F0C53E985EF0565CBEB860DB8F7653_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass8_0_U3CListenU3Eb__1_m7D05331B6C6E61D0DA81B3CD2929F4AF1F3269E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utils_IntToBytesBigEndian_m758E1D164DEBC4CCDFD6820F6D596C90099A1A9E_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tA17699993644A33091DD0C3FB25A70E390E832B4 
{
public:

public:
};


// System.Object


// NetworkStreamExtensions
struct  NetworkStreamExtensions_t590B96A8C6342D214F5207948B8B5B67C757E161  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.Server_ClientToken>
struct  ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2_Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tCC402AD0CEB467D74C289FFC165ADDB04BA8EEDF * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B, ____tables_0)); }
	inline Tables_tCC402AD0CEB467D74C289FFC165ADDB04BA8EEDF * get__tables_0() const { return ____tables_0; }
	inline Tables_tCC402AD0CEB467D74C289FFC165ADDB04BA8EEDF ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_tCC402AD0CEB467D74C289FFC165ADDB04BA8EEDF * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_6;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_6() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B_StaticFields, ___s_isValueWriteAtomic_6)); }
	inline bool get_s_isValueWriteAtomic_6() const { return ___s_isValueWriteAtomic_6; }
	inline bool* get_address_of_s_isValueWriteAtomic_6() { return &___s_isValueWriteAtomic_6; }
	inline void set_s_isValueWriteAtomic_6(bool value)
	{
		___s_isValueWriteAtomic_6 = value;
	}
};


// System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>
struct  ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88  : public RuntimeObject
{
public:
	// System.Object System.Collections.Concurrent.ConcurrentQueue`1::_crossSegmentLock
	RuntimeObject * ____crossSegmentLock_2;
	// System.Collections.Concurrent.ConcurrentQueue`1_Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_tail
	Segment_t931D93A8E56584FDB5DDC90FF01782FBAB800294 * ____tail_3;
	// System.Collections.Concurrent.ConcurrentQueue`1_Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_head
	Segment_t931D93A8E56584FDB5DDC90FF01782FBAB800294 * ____head_4;

public:
	inline static int32_t get_offset_of__crossSegmentLock_2() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88, ____crossSegmentLock_2)); }
	inline RuntimeObject * get__crossSegmentLock_2() const { return ____crossSegmentLock_2; }
	inline RuntimeObject ** get_address_of__crossSegmentLock_2() { return &____crossSegmentLock_2; }
	inline void set__crossSegmentLock_2(RuntimeObject * value)
	{
		____crossSegmentLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____crossSegmentLock_2), (void*)value);
	}

	inline static int32_t get_offset_of__tail_3() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88, ____tail_3)); }
	inline Segment_t931D93A8E56584FDB5DDC90FF01782FBAB800294 * get__tail_3() const { return ____tail_3; }
	inline Segment_t931D93A8E56584FDB5DDC90FF01782FBAB800294 ** get_address_of__tail_3() { return &____tail_3; }
	inline void set__tail_3(Segment_t931D93A8E56584FDB5DDC90FF01782FBAB800294 * value)
	{
		____tail_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tail_3), (void*)value);
	}

	inline static int32_t get_offset_of__head_4() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88, ____head_4)); }
	inline Segment_t931D93A8E56584FDB5DDC90FF01782FBAB800294 * get__head_4() const { return ____head_4; }
	inline Segment_t931D93A8E56584FDB5DDC90FF01782FBAB800294 ** get_address_of__head_4() { return &____head_4; }
	inline void set__head_4(Segment_t931D93A8E56584FDB5DDC90FF01782FBAB800294 * value)
	{
		____head_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____head_4), (void*)value);
	}
};


// System.Console
struct  Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D  : public RuntimeObject
{
public:

public:
};

struct Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields
{
public:
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___outputEncoding_4;
	// System.ConsoleCancelEventHandler System.Console::cancel_event
	ConsoleCancelEventHandler_t6F3B5D9C55C25FF6B53EFEDA9150EFE807311EB4 * ___cancel_event_5;
	// System.Console_InternalCancelHandler System.Console::cancel_handler
	InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A * ___cancel_handler_6;

public:
	inline static int32_t get_offset_of_stdout_0() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___stdout_0)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_stdout_0() const { return ___stdout_0; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_stdout_0() { return &___stdout_0; }
	inline void set_stdout_0(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___stdout_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stdout_0), (void*)value);
	}

	inline static int32_t get_offset_of_stderr_1() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___stderr_1)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_stderr_1() const { return ___stderr_1; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_stderr_1() { return &___stderr_1; }
	inline void set_stderr_1(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___stderr_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stderr_1), (void*)value);
	}

	inline static int32_t get_offset_of_stdin_2() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___stdin_2)); }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * get_stdin_2() const { return ___stdin_2; }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A ** get_address_of_stdin_2() { return &___stdin_2; }
	inline void set_stdin_2(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * value)
	{
		___stdin_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stdin_2), (void*)value);
	}

	inline static int32_t get_offset_of_inputEncoding_3() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___inputEncoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_inputEncoding_3() const { return ___inputEncoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_inputEncoding_3() { return &___inputEncoding_3; }
	inline void set_inputEncoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___inputEncoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputEncoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_outputEncoding_4() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___outputEncoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_outputEncoding_4() const { return ___outputEncoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_outputEncoding_4() { return &___outputEncoding_4; }
	inline void set_outputEncoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___outputEncoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputEncoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_event_5() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___cancel_event_5)); }
	inline ConsoleCancelEventHandler_t6F3B5D9C55C25FF6B53EFEDA9150EFE807311EB4 * get_cancel_event_5() const { return ___cancel_event_5; }
	inline ConsoleCancelEventHandler_t6F3B5D9C55C25FF6B53EFEDA9150EFE807311EB4 ** get_address_of_cancel_event_5() { return &___cancel_event_5; }
	inline void set_cancel_event_5(ConsoleCancelEventHandler_t6F3B5D9C55C25FF6B53EFEDA9150EFE807311EB4 * value)
	{
		___cancel_event_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancel_event_5), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_handler_6() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___cancel_handler_6)); }
	inline InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A * get_cancel_handler_6() const { return ___cancel_handler_6; }
	inline InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A ** get_address_of_cancel_handler_6() { return &___cancel_handler_6; }
	inline void set_cancel_handler_6(InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A * value)
	{
		___cancel_handler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancel_handler_6), (void*)value);
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


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9  : public RuntimeObject
{
public:

public:
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

// Telepathy.Client_<>c__DisplayClass11_0
struct  U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A  : public RuntimeObject
{
public:
	// Telepathy.Client Telepathy.Client_<>c__DisplayClass11_0::<>4__this
	Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * ___U3CU3E4__this_0;
	// System.String Telepathy.Client_<>c__DisplayClass11_0::ip
	String_t* ___ip_1;
	// System.Int32 Telepathy.Client_<>c__DisplayClass11_0::port
	int32_t ___port_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A, ___U3CU3E4__this_0)); }
	inline Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline Client_t00748E10E80324FD9D1C491A162829231DB6A3FA ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_ip_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A, ___ip_1)); }
	inline String_t* get_ip_1() const { return ___ip_1; }
	inline String_t** get_address_of_ip_1() { return &___ip_1; }
	inline void set_ip_1(String_t* value)
	{
		___ip_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ip_1), (void*)value);
	}

	inline static int32_t get_offset_of_port_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A, ___port_2)); }
	inline int32_t get_port_2() const { return ___port_2; }
	inline int32_t* get_address_of_port_2() { return &___port_2; }
	inline void set_port_2(int32_t value)
	{
		___port_2 = value;
	}
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


// Telepathy.SafeQueue`1<System.Byte[]>
struct  SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10  : public RuntimeObject
{
public:
	// System.Collections.Generic.Queue`1<T> Telepathy.SafeQueue`1::queue
	Queue_1_t8562F1B190CBBD67B4F5E105ECADB5DE3B24DD7F * ___queue_0;

public:
	inline static int32_t get_offset_of_queue_0() { return static_cast<int32_t>(offsetof(SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10, ___queue_0)); }
	inline Queue_1_t8562F1B190CBBD67B4F5E105ECADB5DE3B24DD7F * get_queue_0() const { return ___queue_0; }
	inline Queue_1_t8562F1B190CBBD67B4F5E105ECADB5DE3B24DD7F ** get_address_of_queue_0() { return &___queue_0; }
	inline void set_queue_0(Queue_1_t8562F1B190CBBD67B4F5E105ECADB5DE3B24DD7F * value)
	{
		___queue_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queue_0), (void*)value);
	}
};


// Telepathy.Server_<>c__DisplayClass8_0
struct  U3CU3Ec__DisplayClass8_0_t435D804CCD2D8FDFDFC19ED930ACC19F130DED35  : public RuntimeObject
{
public:
	// System.Int32 Telepathy.Server_<>c__DisplayClass8_0::connectionId
	int32_t ___connectionId_0;
	// System.Net.Sockets.TcpClient Telepathy.Server_<>c__DisplayClass8_0::client
	TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * ___client_1;
	// Telepathy.Server_ClientToken Telepathy.Server_<>c__DisplayClass8_0::token
	ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A * ___token_2;
	// System.Threading.Thread Telepathy.Server_<>c__DisplayClass8_0::sendThread
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ___sendThread_3;
	// Telepathy.Server Telepathy.Server_<>c__DisplayClass8_0::<>4__this
	Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * ___U3CU3E4__this_4;

public:
	inline static int32_t get_offset_of_connectionId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_t435D804CCD2D8FDFDFC19ED930ACC19F130DED35, ___connectionId_0)); }
	inline int32_t get_connectionId_0() const { return ___connectionId_0; }
	inline int32_t* get_address_of_connectionId_0() { return &___connectionId_0; }
	inline void set_connectionId_0(int32_t value)
	{
		___connectionId_0 = value;
	}

	inline static int32_t get_offset_of_client_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_t435D804CCD2D8FDFDFC19ED930ACC19F130DED35, ___client_1)); }
	inline TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * get_client_1() const { return ___client_1; }
	inline TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB ** get_address_of_client_1() { return &___client_1; }
	inline void set_client_1(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * value)
	{
		___client_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_1), (void*)value);
	}

	inline static int32_t get_offset_of_token_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_t435D804CCD2D8FDFDFC19ED930ACC19F130DED35, ___token_2)); }
	inline ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A * get_token_2() const { return ___token_2; }
	inline ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A ** get_address_of_token_2() { return &___token_2; }
	inline void set_token_2(ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A * value)
	{
		___token_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___token_2), (void*)value);
	}

	inline static int32_t get_offset_of_sendThread_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_t435D804CCD2D8FDFDFC19ED930ACC19F130DED35, ___sendThread_3)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get_sendThread_3() const { return ___sendThread_3; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of_sendThread_3() { return &___sendThread_3; }
	inline void set_sendThread_3(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		___sendThread_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendThread_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_t435D804CCD2D8FDFDFC19ED930ACC19F130DED35, ___U3CU3E4__this_4)); }
	inline Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}
};


// Telepathy.Server_<>c__DisplayClass9_0
struct  U3CU3Ec__DisplayClass9_0_t0538B57D079BC105BEA75B525EAD92ACF0215212  : public RuntimeObject
{
public:
	// Telepathy.Server Telepathy.Server_<>c__DisplayClass9_0::<>4__this
	Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * ___U3CU3E4__this_0;
	// System.Int32 Telepathy.Server_<>c__DisplayClass9_0::port
	int32_t ___port_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_t0538B57D079BC105BEA75B525EAD92ACF0215212, ___U3CU3E4__this_0)); }
	inline Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_port_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_t0538B57D079BC105BEA75B525EAD92ACF0215212, ___port_1)); }
	inline int32_t get_port_1() const { return ___port_1; }
	inline int32_t* get_address_of_port_1() { return &___port_1; }
	inline void set_port_1(int32_t value)
	{
		___port_1 = value;
	}
};


// Telepathy.Server_ClientToken
struct  ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A  : public RuntimeObject
{
public:
	// System.Net.Sockets.TcpClient Telepathy.Server_ClientToken::client
	TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * ___client_0;
	// Telepathy.SafeQueue`1<System.Byte[]> Telepathy.Server_ClientToken::sendQueue
	SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * ___sendQueue_1;
	// System.Threading.ManualResetEvent Telepathy.Server_ClientToken::sendPending
	ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * ___sendPending_2;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A, ___client_0)); }
	inline TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * get_client_0() const { return ___client_0; }
	inline TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB ** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}

	inline static int32_t get_offset_of_sendQueue_1() { return static_cast<int32_t>(offsetof(ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A, ___sendQueue_1)); }
	inline SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * get_sendQueue_1() const { return ___sendQueue_1; }
	inline SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 ** get_address_of_sendQueue_1() { return &___sendQueue_1; }
	inline void set_sendQueue_1(SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * value)
	{
		___sendQueue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendQueue_1), (void*)value);
	}

	inline static int32_t get_offset_of_sendPending_2() { return static_cast<int32_t>(offsetof(ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A, ___sendPending_2)); }
	inline ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * get_sendPending_2() const { return ___sendPending_2; }
	inline ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 ** get_address_of_sendPending_2() { return &___sendPending_2; }
	inline void set_sendPending_2(ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * value)
	{
		___sendPending_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendPending_2), (void*)value);
	}
};


// Telepathy.Utils
struct  Utils_tA3393C3425EEF65407FEDF107262C468D55B54D0  : public RuntimeObject
{
public:

public:
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


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,Telepathy.Server_ClientToken>
struct  KeyValuePair_2_t0911B99C3D535F2034E2A23A9E155B8B5D350DE6 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t0911B99C3D535F2034E2A23A9E155B8B5D350DE6, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t0911B99C3D535F2034E2A23A9E155B8B5D350DE6, ___value_1)); }
	inline ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A * get_value_1() const { return ___value_1; }
	inline ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
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


// System.IO.TextWriter
struct  TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0, ___CoreNewLine_9)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ___Null_1)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
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


// System.Net.IPEndPoint
struct  IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F  : public EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980
{
public:
	// System.Net.IPAddress System.Net.IPEndPoint::m_Address
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___m_Address_2;
	// System.Int32 System.Net.IPEndPoint::m_Port
	int32_t ___m_Port_3;

public:
	inline static int32_t get_offset_of_m_Address_2() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F, ___m_Address_2)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_m_Address_2() const { return ___m_Address_2; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_m_Address_2() { return &___m_Address_2; }
	inline void set_m_Address_2(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___m_Address_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Address_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Port_3() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F, ___m_Port_3)); }
	inline int32_t get_m_Port_3() const { return ___m_Port_3; }
	inline int32_t* get_address_of_m_Port_3() { return &___m_Port_3; }
	inline void set_m_Port_3(int32_t value)
	{
		___m_Port_3 = value;
	}
};

struct IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields
{
public:
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___Any_5;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___IPv6Any_6;

public:
	inline static int32_t get_offset_of_Any_5() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields, ___Any_5)); }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * get_Any_5() const { return ___Any_5; }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** get_address_of_Any_5() { return &___Any_5; }
	inline void set_Any_5(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * value)
	{
		___Any_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_5), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_6() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields, ___IPv6Any_6)); }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * get_IPv6Any_6() const { return ___IPv6Any_6; }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** get_address_of_IPv6Any_6() { return &___IPv6Any_6; }
	inline void set_IPv6Any_6(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * value)
	{
		___IPv6Any_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_6), (void*)value);
	}
};


// System.Threading.Thread
struct  Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7  : public CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___internal_thread_6)); }
	inline InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
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

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*INT*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*INT*/* ___native_trace_ips_15;
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


// System.Net.Sockets.NetworkStream
struct  NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::m_StreamSocket
	Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___m_StreamSocket_5;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Readable
	bool ___m_Readable_6;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Writeable
	bool ___m_Writeable_7;
	// System.Boolean System.Net.Sockets.NetworkStream::m_OwnsSocket
	bool ___m_OwnsSocket_8;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CloseTimeout
	int32_t ___m_CloseTimeout_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.NetworkStream::m_CleanedUp
	bool ___m_CleanedUp_10;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentReadTimeout
	int32_t ___m_CurrentReadTimeout_11;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentWriteTimeout
	int32_t ___m_CurrentWriteTimeout_12;

public:
	inline static int32_t get_offset_of_m_StreamSocket_5() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_StreamSocket_5)); }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * get_m_StreamSocket_5() const { return ___m_StreamSocket_5; }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 ** get_address_of_m_StreamSocket_5() { return &___m_StreamSocket_5; }
	inline void set_m_StreamSocket_5(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * value)
	{
		___m_StreamSocket_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StreamSocket_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Readable_6() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_Readable_6)); }
	inline bool get_m_Readable_6() const { return ___m_Readable_6; }
	inline bool* get_address_of_m_Readable_6() { return &___m_Readable_6; }
	inline void set_m_Readable_6(bool value)
	{
		___m_Readable_6 = value;
	}

	inline static int32_t get_offset_of_m_Writeable_7() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_Writeable_7)); }
	inline bool get_m_Writeable_7() const { return ___m_Writeable_7; }
	inline bool* get_address_of_m_Writeable_7() { return &___m_Writeable_7; }
	inline void set_m_Writeable_7(bool value)
	{
		___m_Writeable_7 = value;
	}

	inline static int32_t get_offset_of_m_OwnsSocket_8() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_OwnsSocket_8)); }
	inline bool get_m_OwnsSocket_8() const { return ___m_OwnsSocket_8; }
	inline bool* get_address_of_m_OwnsSocket_8() { return &___m_OwnsSocket_8; }
	inline void set_m_OwnsSocket_8(bool value)
	{
		___m_OwnsSocket_8 = value;
	}

	inline static int32_t get_offset_of_m_CloseTimeout_9() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_CloseTimeout_9)); }
	inline int32_t get_m_CloseTimeout_9() const { return ___m_CloseTimeout_9; }
	inline int32_t* get_address_of_m_CloseTimeout_9() { return &___m_CloseTimeout_9; }
	inline void set_m_CloseTimeout_9(int32_t value)
	{
		___m_CloseTimeout_9 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_10() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_CleanedUp_10)); }
	inline bool get_m_CleanedUp_10() const { return ___m_CleanedUp_10; }
	inline bool* get_address_of_m_CleanedUp_10() { return &___m_CleanedUp_10; }
	inline void set_m_CleanedUp_10(bool value)
	{
		___m_CleanedUp_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentReadTimeout_11() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_CurrentReadTimeout_11)); }
	inline int32_t get_m_CurrentReadTimeout_11() const { return ___m_CurrentReadTimeout_11; }
	inline int32_t* get_address_of_m_CurrentReadTimeout_11() { return &___m_CurrentReadTimeout_11; }
	inline void set_m_CurrentReadTimeout_11(int32_t value)
	{
		___m_CurrentReadTimeout_11 = value;
	}

	inline static int32_t get_offset_of_m_CurrentWriteTimeout_12() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_CurrentWriteTimeout_12)); }
	inline int32_t get_m_CurrentWriteTimeout_12() const { return ___m_CurrentWriteTimeout_12; }
	inline int32_t* get_address_of_m_CurrentWriteTimeout_12() { return &___m_CurrentWriteTimeout_12; }
	inline void set_m_CurrentWriteTimeout_12(int32_t value)
	{
		___m_CurrentWriteTimeout_12 = value;
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


// System.Threading.ThreadPriority
struct  ThreadPriority_tA18DA7C04EFC2F3A9C97A1F52B9AC531692B2762 
{
public:
	// System.Int32 System.Threading.ThreadPriority::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ThreadPriority_tA18DA7C04EFC2F3A9C97A1F52B9AC531692B2762, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.WaitHandle
struct  WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshaled_pinvoke : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshaled_com : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
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

// System.Net.IPAddress
struct  IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_5;
	// System.String System.Net.IPAddress::m_ToString
	String_t* ___m_ToString_6;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_10;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* ___m_Numbers_11;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_12;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_13;

public:
	inline static int32_t get_offset_of_m_Address_5() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Address_5)); }
	inline int64_t get_m_Address_5() const { return ___m_Address_5; }
	inline int64_t* get_address_of_m_Address_5() { return &___m_Address_5; }
	inline void set_m_Address_5(int64_t value)
	{
		___m_Address_5 = value;
	}

	inline static int32_t get_offset_of_m_ToString_6() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_ToString_6)); }
	inline String_t* get_m_ToString_6() const { return ___m_ToString_6; }
	inline String_t** get_address_of_m_ToString_6() { return &___m_ToString_6; }
	inline void set_m_ToString_6(String_t* value)
	{
		___m_ToString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToString_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_10() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Family_10)); }
	inline int32_t get_m_Family_10() const { return ___m_Family_10; }
	inline int32_t* get_address_of_m_Family_10() { return &___m_Family_10; }
	inline void set_m_Family_10(int32_t value)
	{
		___m_Family_10 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_11() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Numbers_11)); }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* get_m_Numbers_11() const { return ___m_Numbers_11; }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E** get_address_of_m_Numbers_11() { return &___m_Numbers_11; }
	inline void set_m_Numbers_11(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* value)
	{
		___m_Numbers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Numbers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScopeId_12() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_ScopeId_12)); }
	inline int64_t get_m_ScopeId_12() const { return ___m_ScopeId_12; }
	inline int64_t* get_address_of_m_ScopeId_12() { return &___m_ScopeId_12; }
	inline void set_m_ScopeId_12(int64_t value)
	{
		___m_ScopeId_12 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_13() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_HashCode_13)); }
	inline int32_t get_m_HashCode_13() const { return ___m_HashCode_13; }
	inline int32_t* get_address_of_m_HashCode_13() { return &___m_HashCode_13; }
	inline void set_m_HashCode_13(int32_t value)
	{
		___m_HashCode_13 = value;
	}
};

struct IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6Any_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6Loopback_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6None_9;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Any_0)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Any_0() const { return ___Any_0; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Any_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_0), (void*)value);
	}

	inline static int32_t get_offset_of_Loopback_1() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Loopback_1)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Loopback_1() const { return ___Loopback_1; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Loopback_1() { return &___Loopback_1; }
	inline void set_Loopback_1(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Loopback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Loopback_1), (void*)value);
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Broadcast_2)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Broadcast_2() const { return ___Broadcast_2; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Broadcast_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Broadcast_2), (void*)value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___None_3)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_None_3() const { return ___None_3; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_3), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_7() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6Any_7)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6Any_7() const { return ___IPv6Any_7; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6Any_7() { return &___IPv6Any_7; }
	inline void set_IPv6Any_7(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6Any_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_7), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_8() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6Loopback_8)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6Loopback_8() const { return ___IPv6Loopback_8; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6Loopback_8() { return &___IPv6Loopback_8; }
	inline void set_IPv6Loopback_8(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6Loopback_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Loopback_8), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6None_9() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6None_9)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6None_9() const { return ___IPv6None_9; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6None_9() { return &___IPv6None_9; }
	inline void set_IPv6None_9(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6None_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6None_9), (void*)value);
	}
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


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Threading.EventWaitHandle
struct  EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98  : public WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6
{
public:

public:
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


// System.Action`1<System.String>
struct  Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.IOException
struct  IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t68841FD169C0CB00CC950EDA7E2A59540D65B1CE  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Threading.ManualResetEvent
struct  ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408  : public EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98
{
public:

public:
};


// System.Threading.ThreadAbortException
struct  ThreadAbortException_t0B7CFB34B2901B695FBCFF84E0A1EBDFC8177468  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Threading.ThreadInterruptedException
struct  ThreadInterruptedException_t40D8296AA9D9E8B74E29BFAE1089CFACC5F03751  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Threading.ThreadStart
struct  ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF  : public MulticastDelegate_t
{
public:

public:
};


// System.ComponentModel.Win32Exception
struct  Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668  : public ExternalException_t68841FD169C0CB00CC950EDA7E2A59540D65B1CE
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_17;

public:
	inline static int32_t get_offset_of_nativeErrorCode_17() { return static_cast<int32_t>(offsetof(Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668, ___nativeErrorCode_17)); }
	inline int32_t get_nativeErrorCode_17() const { return ___nativeErrorCode_17; }
	inline int32_t* get_address_of_nativeErrorCode_17() { return &___nativeErrorCode_17; }
	inline void set_nativeErrorCode_17(int32_t value)
	{
		___nativeErrorCode_17 = value;
	}
};

struct Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668_StaticFields
{
public:
	// System.Boolean System.ComponentModel.Win32Exception::s_ErrorMessagesInitialized
	bool ___s_ErrorMessagesInitialized_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> System.ComponentModel.Win32Exception::s_ErrorMessage
	Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * ___s_ErrorMessage_19;

public:
	inline static int32_t get_offset_of_s_ErrorMessagesInitialized_18() { return static_cast<int32_t>(offsetof(Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668_StaticFields, ___s_ErrorMessagesInitialized_18)); }
	inline bool get_s_ErrorMessagesInitialized_18() const { return ___s_ErrorMessagesInitialized_18; }
	inline bool* get_address_of_s_ErrorMessagesInitialized_18() { return &___s_ErrorMessagesInitialized_18; }
	inline void set_s_ErrorMessagesInitialized_18(bool value)
	{
		___s_ErrorMessagesInitialized_18 = value;
	}

	inline static int32_t get_offset_of_s_ErrorMessage_19() { return static_cast<int32_t>(offsetof(Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668_StaticFields, ___s_ErrorMessage_19)); }
	inline Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * get_s_ErrorMessage_19() const { return ___s_ErrorMessage_19; }
	inline Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C ** get_address_of_s_ErrorMessage_19() { return &___s_ErrorMessage_19; }
	inline void set_s_ErrorMessage_19(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * value)
	{
		___s_ErrorMessage_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ErrorMessage_19), (void*)value);
	}
};


// System.Net.Sockets.SocketException
struct  SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5  : public Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668
{
public:
	// System.Net.EndPoint System.Net.Sockets.SocketException::m_EndPoint
	EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * ___m_EndPoint_20;

public:
	inline static int32_t get_offset_of_m_EndPoint_20() { return static_cast<int32_t>(offsetof(SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5, ___m_EndPoint_20)); }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * get_m_EndPoint_20() const { return ___m_EndPoint_20; }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 ** get_address_of_m_EndPoint_20() { return &___m_EndPoint_20; }
	inline void set_m_EndPoint_20(EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * value)
	{
		___m_EndPoint_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EndPoint_20), (void*)value);
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
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[][]
struct ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* m_Items[1];

public:
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentQueue_1_Enqueue_m899622010605DF8B427AF5A101EA13C980D7D0E4_gshared (ConcurrentQueue_1_t67678F282291EEDA513E491252D5B81D7288AE29 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentQueue_1__ctor_m49487296EB0D23745A2FCF9FC0C2CDCA92E0777E_gshared (ConcurrentQueue_1_t67678F282291EEDA513E491252D5B81D7288AE29 * __this, const RuntimeMethod* method);
// System.Void Telepathy.SafeQueue`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeQueue_1_Clear_m178E43D7574D6A9FD1B84ADD1FFBAF9BF0688586_gshared (SafeQueue_1_t73CF4A8B82A998628569E4E7DB947BC37AF48F8D * __this, const RuntimeMethod* method);
// System.Void Telepathy.SafeQueue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeQueue_1_Enqueue_m08E80A73FE1A01A5A4AD47F19925A1C357FA1272_gshared (SafeQueue_1_t73CF4A8B82A998628569E4E7DB947BC37AF48F8D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void Telepathy.SafeQueue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeQueue_1__ctor_mF744F2CCAFC6B253ACC98000817C52DF3B127299_gshared (SafeQueue_1_t73CF4A8B82A998628569E4E7DB947BC37AF48F8D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::TryDequeue(!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentQueue_1_TryDequeue_m7513EDF2418458A808044E5BB9927A14D7E66F8E_gshared (ConcurrentQueue_1_t67678F282291EEDA513E491252D5B81D7288AE29 * __this, RuntimeObject ** ___result0, const RuntimeMethod* method);
// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentQueue_1_get_Count_m3DCBA1914513A1C61B5A741FCD2E04DE61A9B77B_gshared (ConcurrentQueue_1_t67678F282291EEDA513E491252D5B81D7288AE29 * __this, const RuntimeMethod* method);
// System.Boolean Telepathy.SafeQueue`1<System.Object>::TryDequeueAll(T[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeQueue_1_TryDequeueAll_m94EF3FBBB606A38C4D5E1083B5E1DE2876FB98AE_gshared (SafeQueue_1_t73CF4A8B82A998628569E4E7DB947BC37AF48F8D * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** ___result0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_set_Item_mD5172FDDDECB3F27BDC156B1BE711BDDB12EF3FF_gshared (ConcurrentDictionary_2_tE1C69177490F46445DFE2487E4CCDC475ABA4A57 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<!0,!1>> System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_GetEnumerator_mC86329CB7F506B23B9FF7791DFBB6AC82A797F95_gshared (ConcurrentDictionary_2_tE1C69177490F46445DFE2487E4CCDC475ABA4A57 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m6111F7FFB9F9E80C559084882040115B4F3DFF8E_gshared_inline (KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_Clear_mE215F1FF42F307A8A75059AAE5D97C851F9E7D24_gshared (ConcurrentDictionary_2_tE1C69177490F46445DFE2487E4CCDC475ABA4A57 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryGetValue_m97F44F7890889BC5C2EF0C8524F150544C863C0C_gshared (ConcurrentDictionary_2_tE1C69177490F46445DFE2487E4CCDC475ABA4A57 * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_mEBD30ED34CCFEDE415A5BFC672E79EFB834C9AD9_gshared (ConcurrentDictionary_2_tE1C69177490F46445DFE2487E4CCDC475ABA4A57 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,System.Object>::TryRemove(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryRemove_m26B0154925C075D7EA1C1E57C058B00A8DAEA052_gshared (ConcurrentDictionary_2_tE1C69177490F46445DFE2487E4CCDC475ABA4A57 * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);

// System.Int32 NetworkStreamExtensions::ReadSafely(System.Net.Sockets.NetworkStream,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkStreamExtensions_ReadSafely_m17A66ABB843CA8587B397C910210A4728808FCCD (NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * ___stream0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer1, int32_t ___offset2, int32_t ___size3, const RuntimeMethod* method);
// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::get_Client()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * TcpClient_get_Client_m7EE266557B305926B1A845F3C75E2532899D4395_inline (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.Socket::get_Connected()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Socket_get_Connected_mB757B01CF081289D443081672D65CDF8AD76D3DE_inline (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::Connect(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_Connect_m6E8AD9DC60C1B44FCFB27223E88F21AC78ABCC23 (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, String_t* ___hostname0, int32_t ___port1, const RuntimeMethod* method);
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m692348FEAEBAF381D62984EE95B217CC024A77D5 (ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m36A33B990160C4499E991D288341CA325AE66DDD (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * ___start0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_IsBackground_mF62551A195DCB09D44E512F52916145E39362D39 (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_mE2AC4744AFD147FDC84E8D9317B4E3AB890BC2D6 (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, const RuntimeMethod* method);
// System.Void Telepathy.Common::ReceiveLoop(System.Int32,System.Net.Sockets.TcpClient,System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Common_ReceiveLoop_mC03AB28AA2993A62A1ECF6714E82F95CE26D3A6F (int32_t ___connectionId0, TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * ___client1, ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * ___receiveQueue2, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *, String_t*, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// System.Void Telepathy.Message::.ctor(System.Int32,Telepathy.EventType,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_mBEF974E200260B769415EFB7C6D35483DEA19D12 (Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 * __this, int32_t ___connectionId0, int32_t ___eventType1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data2, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>::Enqueue(!0)
inline void ConcurrentQueue_1_Enqueue_m6125CF593F2A8706CB4BF556C3061D60B897ED59 (ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * __this, Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 *, Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 *, const RuntimeMethod*))ConcurrentQueue_1_Enqueue_m899622010605DF8B427AF5A101EA13C980D7D0E4_gshared)(__this, ___item0, method);
}
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Interrupt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Interrupt_m9A3506B1F1CDF92E362922E04E3E38618A4E90B8 (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_Close_mD5023AF41D41A87FA5A946881E330E8E34F2DEFE (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, const RuntimeMethod* method);
// System.Void Telepathy.Client/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m98744FE21E89CF25CCF84D9785E5AF9FB55D6225 (U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A * __this, const RuntimeMethod* method);
// System.Boolean Telepathy.Client::get_Connecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_get_Connecting_m4A163551916F14C2EF31648888C19DD1BE6BEA40 (Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * __this, const RuntimeMethod* method);
// System.Boolean Telepathy.Client::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_get_Connected_m98098892072CD1FEB5926C8F0416422DAD4702FE (Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient__ctor_m152C74CC5F0D393E707CF031F18B0E04422936BF (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::set_NoDelay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_set_NoDelay_mEBF30E23E072AD94F1FC9F9D2AD0134016FBE492 (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::set_SendTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_set_SendTimeout_m323916999A477F938121A52B1192D6B94DFC3F41 (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>::.ctor()
inline void ConcurrentQueue_1__ctor_mE0C98FA8DF17628759165E71ABA079F43E138238 (ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 *, const RuntimeMethod*))ConcurrentQueue_1__ctor_m49487296EB0D23745A2FCF9FC0C2CDCA92E0777E_gshared)(__this, method);
}
// System.Void Telepathy.SafeQueue`1<System.Byte[]>::Clear()
inline void SafeQueue_1_Clear_mFD3440BCB58F0F84F0F4BEC9CF69128C9E3B231B (SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * __this, const RuntimeMethod* method)
{
	((  void (*) (SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 *, const RuntimeMethod*))SafeQueue_1_Clear_m178E43D7574D6A9FD1B84ADD1FFBAF9BF0688586_gshared)(__this, method);
}
// System.Void System.Threading.Thread::Join()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Join_mD3E603D9FC950F127ABE95A3FF48AAEA48A29EA9 (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, const RuntimeMethod* method);
// System.Void Telepathy.SafeQueue`1<System.Byte[]>::Enqueue(T)
inline void SafeQueue_1_Enqueue_m82A8D4FE1BA7C08B7D64FBA7338B4EC69356EF47 (SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___item0, const RuntimeMethod* method)
{
	((  void (*) (SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 *, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*))SafeQueue_1_Enqueue_m08E80A73FE1A01A5A4AD47F19925A1C357FA1272_gshared)(__this, ___item0, method);
}
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m7959A86A39735296FC949EC86FDA42A6CFAAB94C (EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98 * __this, const RuntimeMethod* method);
// System.Void Telepathy.SafeQueue`1<System.Byte[]>::.ctor()
inline void SafeQueue_1__ctor_m460E7015E13028426B10F3C99C741A9648354C33 (SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * __this, const RuntimeMethod* method)
{
	((  void (*) (SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 *, const RuntimeMethod*))SafeQueue_1__ctor_mF744F2CCAFC6B253ACC98000817C52DF3B127299_gshared)(__this, method);
}
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_m8973D9E3C622B9602641C017A33870F51D0311E1 (ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * __this, bool ___initialState0, const RuntimeMethod* method);
// System.Void Telepathy.Common::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Common__ctor_m13F2E5C6F6BF201A417C3D2F7EEF1068D6C3F963 (Common_tFCC994B3A027AC464326397B2D22751359949226 * __this, const RuntimeMethod* method);
// System.Void Telepathy.Common::SendLoop(System.Int32,System.Net.Sockets.TcpClient,Telepathy.SafeQueue`1<System.Byte[]>,System.Threading.ManualResetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Common_SendLoop_m557A26F5F590B71B7AD5E999C10278C91D7FD780 (int32_t ___connectionId0, TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * ___client1, SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * ___sendQueue2, ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * ___sendPending3, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Telepathy.Client::ReceiveThreadFunction(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_ReceiveThreadFunction_mC2BD6BAFB0F0AFAFB27A2A1575CC5F641A2EA166 (Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * __this, String_t* ___ip0, int32_t ___port1, const RuntimeMethod* method);
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>::TryDequeue(!0&)
inline bool ConcurrentQueue_1_TryDequeue_m6EC4EDDD91C401F34806DE32DC3158C849C1B5A9 (ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * __this, Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 ** ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 *, Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 **, const RuntimeMethod*))ConcurrentQueue_1_TryDequeue_m7513EDF2418458A808044E5BB9927A14D7E66F8E_gshared)(__this, ___result0, method);
}
// System.Byte[] Telepathy.Utils::IntToBytesBigEndian(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Utils_IntToBytesBigEndian_m758E1D164DEBC4CCDFD6820F6D596C90099A1A9E (int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Boolean NetworkStreamExtensions::ReadExactly(System.Net.Sockets.NetworkStream,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkStreamExtensions_ReadExactly_m4DCC0953A79E6ED3313D46B8633C94821DBEC10E (NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * ___stream0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer1, int32_t ___amount2, const RuntimeMethod* method);
// System.Int32 Telepathy.Utils::BytesToIntBigEndian(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_BytesToIntBigEndian_m0BB7C8D78A1D26D9362333EAB2994B6826A11320 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, const RuntimeMethod* method);
// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::GetStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * TcpClient_GetStream_m882B17757A177B57BF6F88BBC450280DDF3FB02B (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2 (const RuntimeMethod* method);
// System.Boolean Telepathy.Common::ReadMessageBlocking(System.Net.Sockets.NetworkStream,System.Byte[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Common_ReadMessageBlocking_mBF47BC63B12AB301DA1C8635C5CEAEF5B8205FD4 (NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * ___stream0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___content1, const RuntimeMethod* method);
// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>::get_Count()
inline int32_t ConcurrentQueue_1_get_Count_mE8D982D8EEBBD40AB4C45785A2A6B2D10B60D882 (ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 *, const RuntimeMethod*))ConcurrentQueue_1_get_Count_m3DCBA1914513A1C61B5A741FCD2E04DE61A9B77B_gshared)(__this, method);
}
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  DateTime_op_Subtraction_m8005DCC8F0F183AC1335F87A82FDF92926CC5021 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___d10, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___d21, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_m0F8F314166E6D1F9D36F32EB1272451EDE56B4EA (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Reset_m59EBCEA32BC9C67B4E432BEA5FF0A42ED0CC8A6F (EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98 * __this, const RuntimeMethod* method);
// System.Boolean Telepathy.SafeQueue`1<System.Byte[]>::TryDequeueAll(T[]&)
inline bool SafeQueue_1_TryDequeueAll_m25C99C52B06FCD69F34DF4AA87DB4AAC0A465595 (SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * __this, ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7** ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 *, ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7**, const RuntimeMethod*))SafeQueue_1_TryDequeueAll_m94EF3FBBB606A38C4D5E1083B5E1DE2876FB98AE_gshared)(__this, ___result0, method);
}
// System.Boolean Telepathy.Common::SendMessagesBlocking(System.Net.Sockets.NetworkStream,System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Common_SendMessagesBlocking_m5066E8D1C091012F7D4A3354EFB65FE95C7C5C33 (NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * ___stream0, ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* ___messages1, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.TcpClient::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClient_get_Connected_m49D1BA8F64A3FFA32A6E77B4A26E9AAA4822500C (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3 (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.IO.TextWriter System.Console::get_Error()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * Console_get_Error_mE1078EFC5C7C133964838D2A72B8FB9567E4C98A_inline (const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_mB6D391197444B8BFD30BAE1EDCF1A255CD2F292F (int32_t* ___location0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.Threading.Thread::get_IsAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Thread_get_IsAlive_m7477BEFB95036F688AC50EE669B64E9755ABF679 (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, const RuntimeMethod* method);
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m1C90FD0534415E17207A0BBC05CD381335089845 (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * __this, IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___address0, int32_t ___port1, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpListener::.ctor(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpListener__ctor_m6BD6AA691F3184936E0DB075F80DB77115F61031 (TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * __this, IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___localEP0, const RuntimeMethod* method);
// System.Net.Sockets.Socket System.Net.Sockets.TcpListener::get_Server()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * TcpListener_get_Server_m47C4797186DDB94DBDADE5FC567B56BD292D88C6_inline (TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::set_NoDelay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_set_NoDelay_mB51929BB6C13E4C051C59B62A9C5CBEA3A129D76 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::set_SendTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_set_SendTimeout_m2D5D60D07619721F5C405ADD640CC1B0CDE4CCB5 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpListener::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpListener_Start_m7F59BAC98F3819580CE5F2D911513D42FF21F101 (TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * __this, const RuntimeMethod* method);
// System.Void Telepathy.Server/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m64869BFBCACCB8B468CB43C7699CAF23DBC9101C (U3CU3Ec__DisplayClass8_0_t435D804CCD2D8FDFDFC19ED930ACC19F130DED35 * __this, const RuntimeMethod* method);
// System.Net.Sockets.TcpClient System.Net.Sockets.TcpListener::AcceptTcpClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * TcpListener_AcceptTcpClient_mA55444BAE76E163D81C41D0D46D07F67662E48C2 (TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * __this, const RuntimeMethod* method);
// System.Int32 Telepathy.Server::NextConnectionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Server_NextConnectionId_mA859D97AA15DA3E1C1B8AA3B15F9F0693036A2FB (const RuntimeMethod* method);
// System.Void Telepathy.Server/ClientToken::.ctor(System.Net.Sockets.TcpClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientToken__ctor_mC1B5F7E20739789586D05CD6D419828E561FCF89 (ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A * __this, TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * ___client0, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.Server/ClientToken>::set_Item(!0,!1)
inline void ConcurrentDictionary_2_set_Item_m5212345FD34A8EB642E9495AF7E914E9C04B7B2D (ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B * __this, int32_t ___key0, ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A * ___value1, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B *, int32_t, ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A *, const RuntimeMethod*))ConcurrentDictionary_2_set_Item_mD5172FDDDECB3F27BDC156B1BE711BDDB12EF3FF_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Telepathy.Server/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mDFB8F60A46FCDCF50FC1B019801A4756DF8BE2C8 (U3CU3Ec__DisplayClass9_0_t0538B57D079BC105BEA75B525EAD92ACF0215212 * __this, const RuntimeMethod* method);
// System.Boolean Telepathy.Server::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_get_Active_m8A88A9B4EE0F8CC542518A444874585E2C6DA23E (Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_Priority(System.Threading.ThreadPriority)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_Priority_m151C92263BC72BE6910D49C7E3DF48BFBAB09F57 (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpListener::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpListener_Stop_m9087121EA1A353EA84DEFE49BFBAE810155AFA5A (TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<!0,!1>> System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.Server/ClientToken>::GetEnumerator()
inline RuntimeObject* ConcurrentDictionary_2_GetEnumerator_mC8CCB554D71818FC87797CA6A729FE21C6A6D586 (ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B *, const RuntimeMethod*))ConcurrentDictionary_2_GetEnumerator_mC86329CB7F506B23B9FF7791DFBB6AC82A797F95_gshared)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,Telepathy.Server/ClientToken>::get_Value()
inline ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A * KeyValuePair_2_get_Value_m324E1CA07A85129724ECAFC8CFDA2061567118E1_inline (KeyValuePair_2_t0911B99C3D535F2034E2A23A9E155B8B5D350DE6 * __this, const RuntimeMethod* method)
{
	return ((  ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A * (*) (KeyValuePair_2_t0911B99C3D535F2034E2A23A9E155B8B5D350DE6 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m6111F7FFB9F9E80C559084882040115B4F3DFF8E_gshared_inline)(__this, method);
}
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.Server/ClientToken>::Clear()
inline void ConcurrentDictionary_2_Clear_m6A23CE975E89E2159E0FB0A9F6C0467A9BC5B498 (ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B * __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B *, const RuntimeMethod*))ConcurrentDictionary_2_Clear_mE215F1FF42F307A8A75059AAE5D97C851F9E7D24_gshared)(__this, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.Server/ClientToken>::TryGetValue(!0,!1&)
inline bool ConcurrentDictionary_2_TryGetValue_m59346F5E5BE9EA778692883C58EF477723B6F816 (ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B * __this, int32_t ___key0, ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B *, int32_t, ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A **, const RuntimeMethod*))ConcurrentDictionary_2_TryGetValue_m97F44F7890889BC5C2EF0C8524F150544C863C0C_gshared)(__this, ___key0, ___value1, method);
}
// System.Net.EndPoint System.Net.Sockets.Socket::get_RemoteEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * Socket_get_RemoteEndPoint_mD926D4C2BD8A8B534D992E177D155F7EF8685D20 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, const RuntimeMethod* method);
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * IPEndPoint_get_Address_m01D2AB4ACC29D3E3A79D3D2A207CE3063336F2A4_inline (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.Server/ClientToken>::.ctor()
inline void ConcurrentDictionary_2__ctor_m37E2237A4B10477387B79E541E5B63D66D61FB77 (ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B * __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B *, const RuntimeMethod*))ConcurrentDictionary_2__ctor_mEBD30ED34CCFEDE415A5BFC672E79EFB834C9AD9_gshared)(__this, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.Server/ClientToken>::TryRemove(!0,!1&)
inline bool ConcurrentDictionary_2_TryRemove_mD767D432660C563BFDCCDAC2CACBF3C2B2FB6EAF (ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B * __this, int32_t ___key0, ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B *, int32_t, ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A **, const RuntimeMethod*))ConcurrentDictionary_2_TryRemove_m26B0154925C075D7EA1C1E57C058B00A8DAEA052_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Telepathy.Server::Listen(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server_Listen_mE133896EBF2A4DE641361060F8C987DD9A73E4C7 (Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * __this, int32_t ___port0, const RuntimeMethod* method);
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
// System.Int32 NetworkStreamExtensions::ReadSafely(System.Net.Sockets.NetworkStream,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkStreamExtensions_ReadSafely_m17A66ABB843CA8587B397C910210A4728808FCCD (NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * ___stream0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer1, int32_t ___offset2, int32_t ___size3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkStreamExtensions_ReadSafely_m17A66ABB843CA8587B397C910210A4728808FCCD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_0 = ___stream0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___buffer1;
		int32_t L_2 = ___offset2;
		int32_t L_3 = ___size3;
		NullCheck(L_0);
		int32_t L_4 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		V_0 = L_4;
		goto IL_0011;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000c;
		throw e;
	}

CATCH_000c:
	{ // begin catch(System.IO.IOException)
		V_0 = 0;
		goto IL_0011;
	} // end catch (depth: 1)

IL_0011:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean NetworkStreamExtensions::ReadExactly(System.Net.Sockets.NetworkStream,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkStreamExtensions_ReadExactly_m4DCC0953A79E6ED3313D46B8633C94821DBEC10E (NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * ___stream0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer1, int32_t ___amount2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		goto IL_001b;
	}

IL_0004:
	{
		int32_t L_0 = ___amount2;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_2 = ___stream0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___buffer1;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = NetworkStreamExtensions_ReadSafely_m17A66ABB843CA8587B397C910210A4728808FCCD(L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		int32_t L_7 = V_2;
		if (L_7)
		{
			goto IL_0017;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9));
	}

IL_001b:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___amount2;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
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
// System.Boolean Telepathy.Client::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_get_Connected_m98098892072CD1FEB5926C8F0416422DAD4702FE (Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * __this, const RuntimeMethod* method)
{
	{
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_0 = __this->get_client_4();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_1 = __this->get_client_4();
		NullCheck(L_1);
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_2 = TcpClient_get_Client_m7EE266557B305926B1A845F3C75E2532899D4395_inline(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_3 = __this->get_client_4();
		NullCheck(L_3);
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_4 = TcpClient_get_Client_m7EE266557B305926B1A845F3C75E2532899D4395_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = Socket_get_Connected_mB757B01CF081289D443081672D65CDF8AD76D3DE_inline(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)0;
	}
}
// System.Boolean Telepathy.Client::get_Connecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_get_Connecting_m4A163551916F14C2EF31648888C19DD1BE6BEA40 (Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__Connecting_7();
		il2cpp_codegen_memory_barrier();
		return L_0;
	}
}
// System.Void Telepathy.Client::ReceiveThreadFunction(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_ReceiveThreadFunction_mC2BD6BAFB0F0AFAFB27A2A1575CC5F641A2EA166 (Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * __this, String_t* ___ip0, int32_t ___port1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_ReceiveThreadFunction_mC2BD6BAFB0F0AFAFB27A2A1575CC5F641A2EA166_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * V_0 = NULL;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * G_B5_0 = NULL;
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_0 = __this->get_client_4();
		String_t* L_1 = ___ip0;
		int32_t L_2 = ___port1;
		NullCheck(L_0);
		TcpClient_Connect_m6E8AD9DC60C1B44FCFB27223E88F21AC78ABCC23(L_0, L_1, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_memory_barrier();
		__this->set__Connecting_7(0);
		ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * L_3 = (ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF *)il2cpp_codegen_object_new(ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m692348FEAEBAF381D62984EE95B217CC024A77D5(L_3, __this, (intptr_t)((intptr_t)Client_U3CReceiveThreadFunctionU3Eb__10_0_m332AE09FEA6BED9159EACABA907653889E42EB0E_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_4 = (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 *)il2cpp_codegen_object_new(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_il2cpp_TypeInfo_var);
		Thread__ctor_m36A33B990160C4499E991D288341CA325AE66DDD(L_4, L_3, /*hidden argument*/NULL);
		__this->set_sendThread_6(L_4);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_5 = __this->get_sendThread_6();
		NullCheck(L_5);
		Thread_set_IsBackground_mF62551A195DCB09D44E512F52916145E39362D39(L_5, (bool)1, /*hidden argument*/NULL);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_6 = __this->get_sendThread_6();
		NullCheck(L_6);
		Thread_Start_mE2AC4744AFD147FDC84E8D9317B4E3AB890BC2D6(L_6, /*hidden argument*/NULL);
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_7 = __this->get_client_4();
		ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * L_8 = ((Common_tFCC994B3A027AC464326397B2D22751359949226 *)__this)->get_receiveQueue_0();
		IL2CPP_RUNTIME_CLASS_INIT(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var);
		Common_ReceiveLoop_mC03AB28AA2993A62A1ECF6714E82F95CE26D3A6F(0, L_7, L_8, /*hidden argument*/NULL);
		goto IL_00c4;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0058;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00ac;
		throw e;
	}

CATCH_0058:
	{ // begin catch(System.Net.Sockets.SocketException)
		V_0 = ((SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_9 = ((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->get_Log_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral07C2A556387E3B1C144A340F4608E87E198E43E3);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral07C2A556387E3B1C144A340F4608E87E198E43E3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_11;
		String_t* L_13 = ___ip0;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_13);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = L_12;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralFF0B2412DB663B29233C65450608AE6CF9A39980);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralFF0B2412DB663B29233C65450608AE6CF9A39980);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = L_14;
		int32_t L_16 = ___port1;
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_18);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = L_15;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral9A9D4FB8F6DD38303AC06055F285E03378D0ED1E);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral9A9D4FB8F6DD38303AC06055F285E03378D0ED1E);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = L_19;
		SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * L_21 = V_0;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_21);
		String_t* L_22 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_20, /*hidden argument*/NULL);
		NullCheck(L_9);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_9, L_22, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
		ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * L_23 = ((Common_tFCC994B3A027AC464326397B2D22751359949226 *)__this)->get_receiveQueue_0();
		Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 * L_24 = (Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 *)il2cpp_codegen_object_new(Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603_il2cpp_TypeInfo_var);
		Message__ctor_mBEF974E200260B769415EFB7C6D35483DEA19D12(L_24, 0, 2, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL, /*hidden argument*/NULL);
		NullCheck(L_23);
		ConcurrentQueue_1_Enqueue_m6125CF593F2A8706CB4BF556C3061D60B897ED59(L_23, L_24, /*hidden argument*/ConcurrentQueue_1_Enqueue_m6125CF593F2A8706CB4BF556C3061D60B897ED59_RuntimeMethod_var);
		goto IL_00c4;
	} // end catch (depth: 1)

CATCH_00ac:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_25 = ((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->get_LogError_2();
		Exception_t * L_26 = V_1;
		String_t* L_27 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral323840433491887C80933D471B6D60A7DA8FA3AD, L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_25, L_27, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
		goto IL_00c4;
	} // end catch (depth: 1)

IL_00c4:
	{
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_28 = __this->get_sendThread_6();
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_29 = L_28;
		G_B4_0 = L_29;
		if (L_29)
		{
			G_B5_0 = L_29;
			goto IL_00d0;
		}
	}
	{
		goto IL_00d5;
	}

IL_00d0:
	{
		NullCheck(G_B5_0);
		Thread_Interrupt_m9A3506B1F1CDF92E362922E04E3E38618A4E90B8(G_B5_0, /*hidden argument*/NULL);
	}

IL_00d5:
	{
		il2cpp_codegen_memory_barrier();
		__this->set__Connecting_7(0);
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_30 = __this->get_client_4();
		NullCheck(L_30);
		TcpClient_Close_mD5023AF41D41A87FA5A946881E330E8E34F2DEFE(L_30, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Telepathy.Client::Connect(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Connect_m5A61686AC8018F73202AE1005AB4FE6889B7060A (Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * __this, String_t* ___ip0, int32_t ___port1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_Connect_m5A61686AC8018F73202AE1005AB4FE6889B7060A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A * L_0 = (U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass11_0__ctor_m98744FE21E89CF25CCF84D9785E5AF9FB55D6225(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A * L_2 = V_0;
		String_t* L_3 = ___ip0;
		NullCheck(L_2);
		L_2->set_ip_1(L_3);
		U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A * L_4 = V_0;
		int32_t L_5 = ___port1;
		NullCheck(L_4);
		L_4->set_port_2(L_5);
		bool L_6 = Client_get_Connecting_m4A163551916F14C2EF31648888C19DD1BE6BEA40(__this, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		bool L_7 = Client_get_Connected_m98098892072CD1FEB5926C8F0416422DAD4702FE(__this, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_002c;
		}
	}

IL_002b:
	{
		return;
	}

IL_002c:
	{
		il2cpp_codegen_memory_barrier();
		__this->set__Connecting_7(1);
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_8 = (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB *)il2cpp_codegen_object_new(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB_il2cpp_TypeInfo_var);
		TcpClient__ctor_m152C74CC5F0D393E707CF031F18B0E04422936BF(L_8, /*hidden argument*/NULL);
		__this->set_client_4(L_8);
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_9 = __this->get_client_4();
		bool L_10 = ((Common_tFCC994B3A027AC464326397B2D22751359949226 *)__this)->get_NoDelay_2();
		NullCheck(L_9);
		TcpClient_set_NoDelay_mEBF30E23E072AD94F1FC9F9D2AD0134016FBE492(L_9, L_10, /*hidden argument*/NULL);
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_11 = __this->get_client_4();
		int32_t L_12 = ((Common_tFCC994B3A027AC464326397B2D22751359949226 *)__this)->get_SendTimeout_3();
		NullCheck(L_11);
		TcpClient_set_SendTimeout_m323916999A477F938121A52B1192D6B94DFC3F41(L_11, L_12, /*hidden argument*/NULL);
		ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * L_13 = (ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 *)il2cpp_codegen_object_new(ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88_il2cpp_TypeInfo_var);
		ConcurrentQueue_1__ctor_mE0C98FA8DF17628759165E71ABA079F43E138238(L_13, /*hidden argument*/ConcurrentQueue_1__ctor_mE0C98FA8DF17628759165E71ABA079F43E138238_RuntimeMethod_var);
		((Common_tFCC994B3A027AC464326397B2D22751359949226 *)__this)->set_receiveQueue_0(L_13);
		SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * L_14 = __this->get_sendQueue_8();
		NullCheck(L_14);
		SafeQueue_1_Clear_mFD3440BCB58F0F84F0F4BEC9CF69128C9E3B231B(L_14, /*hidden argument*/SafeQueue_1_Clear_mFD3440BCB58F0F84F0F4BEC9CF69128C9E3B231B_RuntimeMethod_var);
		U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A * L_15 = V_0;
		ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * L_16 = (ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF *)il2cpp_codegen_object_new(ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m692348FEAEBAF381D62984EE95B217CC024A77D5(L_16, L_15, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass11_0_U3CConnectU3Eb__0_mD5CB6F36326250CDC99D015E0E3F1DE60E353A38_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_17 = (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 *)il2cpp_codegen_object_new(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_il2cpp_TypeInfo_var);
		Thread__ctor_m36A33B990160C4499E991D288341CA325AE66DDD(L_17, L_16, /*hidden argument*/NULL);
		__this->set_receiveThread_5(L_17);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_18 = __this->get_receiveThread_5();
		NullCheck(L_18);
		Thread_set_IsBackground_mF62551A195DCB09D44E512F52916145E39362D39(L_18, (bool)1, /*hidden argument*/NULL);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_19 = __this->get_receiveThread_5();
		NullCheck(L_19);
		Thread_Start_mE2AC4744AFD147FDC84E8D9317B4E3AB890BC2D6(L_19, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Telepathy.Client::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Disconnect_m4F84F228BB93B41776E6ECDBC9D3753CE88673D3 (Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_Disconnect_m4F84F228BB93B41776E6ECDBC9D3753CE88673D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * G_B4_0 = NULL;
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * G_B3_0 = NULL;
	{
		bool L_0 = Client_get_Connecting_m4A163551916F14C2EF31648888C19DD1BE6BEA40(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = Client_get_Connected_m98098892072CD1FEB5926C8F0416422DAD4702FE(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}

IL_0010:
	{
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_2 = __this->get_client_4();
		NullCheck(L_2);
		TcpClient_Close_mD5023AF41D41A87FA5A946881E330E8E34F2DEFE(L_2, /*hidden argument*/NULL);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_3 = __this->get_receiveThread_5();
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0027;
		}
	}
	{
		goto IL_002c;
	}

IL_0027:
	{
		NullCheck(G_B4_0);
		Thread_Join_mD3E603D9FC950F127ABE95A3FF48AAEA48A29EA9(G_B4_0, /*hidden argument*/NULL);
	}

IL_002c:
	{
		SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * L_5 = __this->get_sendQueue_8();
		NullCheck(L_5);
		SafeQueue_1_Clear_mFD3440BCB58F0F84F0F4BEC9CF69128C9E3B231B(L_5, /*hidden argument*/SafeQueue_1_Clear_mFD3440BCB58F0F84F0F4BEC9CF69128C9E3B231B_RuntimeMethod_var);
		__this->set_client_4((TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB *)NULL);
	}

IL_003e:
	{
		return;
	}
}
// System.Boolean Telepathy.Client::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_Send_m99ADE8A1004BB6B69291E06DF4032C1C3E950B4F (Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_Send_m99ADE8A1004BB6B69291E06DF4032C1C3E950B4F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Client_get_Connected_m98098892072CD1FEB5926C8F0416422DAD4702FE(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * L_1 = __this->get_sendQueue_8();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___data0;
		NullCheck(L_1);
		SafeQueue_1_Enqueue_m82A8D4FE1BA7C08B7D64FBA7338B4EC69356EF47(L_1, L_2, /*hidden argument*/SafeQueue_1_Enqueue_m82A8D4FE1BA7C08B7D64FBA7338B4EC69356EF47_RuntimeMethod_var);
		ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_3 = __this->get_sendPending_9();
		NullCheck(L_3);
		EventWaitHandle_Set_m7959A86A39735296FC949EC86FDA42A6CFAAB94C(L_3, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0022:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_4 = ((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->get_LogWarning_1();
		NullCheck(L_4);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_4, _stringLiteralF92BB9CA6048A4C6E366FCC3EC400177841151FF, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
		return (bool)0;
	}
}
// System.Void Telepathy.Client::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_mCA926EB641779A5A0B7FC0A0BCC17F8E7D50796B (Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client__ctor_mCA926EB641779A5A0B7FC0A0BCC17F8E7D50796B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * L_0 = (SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 *)il2cpp_codegen_object_new(SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10_il2cpp_TypeInfo_var);
		SafeQueue_1__ctor_m460E7015E13028426B10F3C99C741A9648354C33(L_0, /*hidden argument*/SafeQueue_1__ctor_m460E7015E13028426B10F3C99C741A9648354C33_RuntimeMethod_var);
		__this->set_sendQueue_8(L_0);
		ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_1 = (ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 *)il2cpp_codegen_object_new(ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_m8973D9E3C622B9602641C017A33870F51D0311E1(L_1, (bool)0, /*hidden argument*/NULL);
		__this->set_sendPending_9(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var);
		Common__ctor_m13F2E5C6F6BF201A417C3D2F7EEF1068D6C3F963(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Telepathy.Client::<ReceiveThreadFunction>b__10_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_U3CReceiveThreadFunctionU3Eb__10_0_m332AE09FEA6BED9159EACABA907653889E42EB0E (Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_U3CReceiveThreadFunctionU3Eb__10_0_m332AE09FEA6BED9159EACABA907653889E42EB0E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_0 = __this->get_client_4();
		SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * L_1 = __this->get_sendQueue_8();
		ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_2 = __this->get_sendPending_9();
		IL2CPP_RUNTIME_CLASS_INIT(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var);
		Common_SendLoop_m557A26F5F590B71B7AD5E999C10278C91D7FD780(0, L_0, L_1, L_2, /*hidden argument*/NULL);
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
// System.Void Telepathy.Client_<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m98744FE21E89CF25CCF84D9785E5AF9FB55D6225 (U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Telepathy.Client_<>c__DisplayClass11_0::<Connect>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0_U3CConnectU3Eb__0_mD5CB6F36326250CDC99D015E0E3F1DE60E353A38 (U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A * __this, const RuntimeMethod* method)
{
	{
		Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * L_0 = __this->get_U3CU3E4__this_0();
		String_t* L_1 = __this->get_ip_1();
		int32_t L_2 = __this->get_port_2();
		NullCheck(L_0);
		Client_ReceiveThreadFunction_mC2BD6BAFB0F0AFAFB27A2A1575CC5F641A2EA166(L_0, L_1, L_2, /*hidden argument*/NULL);
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
// System.Boolean Telepathy.Common::GetNextMessage(Telepathy.Message&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Common_GetNextMessage_mFF794F304B59C60898F5F6927DD8EBD063864A28 (Common_tFCC994B3A027AC464326397B2D22751359949226 * __this, Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 ** ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Common_GetNextMessage_mFF794F304B59C60898F5F6927DD8EBD063864A28_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * L_0 = __this->get_receiveQueue_0();
		Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 ** L_1 = ___message0;
		NullCheck(L_0);
		bool L_2 = ConcurrentQueue_1_TryDequeue_m6EC4EDDD91C401F34806DE32DC3158C849C1B5A9(L_0, (Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 **)L_1, /*hidden argument*/ConcurrentQueue_1_TryDequeue_m6EC4EDDD91C401F34806DE32DC3158C849C1B5A9_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean Telepathy.Common::SendMessagesBlocking(System.Net.Sockets.NetworkStream,System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Common_SendMessagesBlocking_m5066E8D1C091012F7D4A3354EFB65FE95C7C5C33 (NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * ___stream0, ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* ___messages1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Common_SendMessagesBlocking_m5066E8D1C091012F7D4A3354EFB65FE95C7C5C33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_5 = NULL;
	bool V_6 = false;
	Exception_t * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			V_0 = 0;
			V_3 = 0;
			goto IL_0014;
		}

IL_0006:
		{
			int32_t L_0 = V_0;
			ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* L_1 = ___messages1;
			int32_t L_2 = V_3;
			NullCheck(L_1);
			int32_t L_3 = L_2;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
			NullCheck(L_4);
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)4, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))));
			int32_t L_5 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		}

IL_0014:
		{
			int32_t L_6 = V_3;
			ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* L_7 = ___messages1;
			NullCheck(L_7);
			if ((((int32_t)L_6) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))))
			{
				goto IL_0006;
			}
		}

IL_001a:
		{
			int32_t L_8 = V_0;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_8);
			V_1 = L_9;
			V_2 = 0;
			V_4 = 0;
			goto IL_006e;
		}

IL_0028:
		{
			ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* L_10 = ___messages1;
			int32_t L_11 = V_4;
			NullCheck(L_10);
			int32_t L_12 = L_11;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
			NullCheck(L_13);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = Utils_IntToBytesBigEndian_m758E1D164DEBC4CCDFD6820F6D596C90099A1A9E((((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))), /*hidden argument*/NULL);
			V_5 = L_14;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = V_5;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = V_1;
			int32_t L_17 = V_2;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = V_5;
			NullCheck(L_18);
			Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_15, 0, (RuntimeArray *)(RuntimeArray *)L_16, L_17, (((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))), /*hidden argument*/NULL);
			ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* L_19 = ___messages1;
			int32_t L_20 = V_4;
			NullCheck(L_19);
			int32_t L_21 = L_20;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_23 = V_1;
			int32_t L_24 = V_2;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_25 = V_5;
			NullCheck(L_25);
			ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* L_26 = ___messages1;
			int32_t L_27 = V_4;
			NullCheck(L_26);
			int32_t L_28 = L_27;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_29 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
			NullCheck(L_29);
			Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_22, 0, (RuntimeArray *)(RuntimeArray *)L_23, ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))), (((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))), /*hidden argument*/NULL);
			int32_t L_30 = V_2;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_31 = V_5;
			NullCheck(L_31);
			ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* L_32 = ___messages1;
			int32_t L_33 = V_4;
			NullCheck(L_32);
			int32_t L_34 = L_33;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_35 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
			NullCheck(L_35);
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))), (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))));
			int32_t L_36 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		}

IL_006e:
		{
			int32_t L_37 = V_4;
			ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* L_38 = ___messages1;
			NullCheck(L_38);
			if ((((int32_t)L_37) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))))
			{
				goto IL_0028;
			}
		}

IL_0075:
		{
			NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_39 = ___stream0;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_40 = V_1;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_41 = V_1;
			NullCheck(L_41);
			NullCheck(L_39);
			VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(29 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_39, L_40, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))));
			V_6 = (bool)1;
			goto IL_00a2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0085;
		throw e;
	}

CATCH_0085:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_42 = ((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->get_Log_0();
		Exception_t * L_43 = V_7;
		String_t* L_44 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral74265ECE03804A284CADB382A1C43A65A3BED1D6, L_43, /*hidden argument*/NULL);
		NullCheck(L_42);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_42, L_44, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
		V_6 = (bool)0;
		goto IL_00a2;
	} // end catch (depth: 1)

IL_00a2:
	{
		bool L_45 = V_6;
		return L_45;
	}
}
// System.Boolean Telepathy.Common::ReadMessageBlocking(System.Net.Sockets.NetworkStream,System.Byte[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Common_ReadMessageBlocking_mBF47BC63B12AB301DA1C8635C5CEAEF5B8205FD4 (NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * ___stream0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___content1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Common_ReadMessageBlocking_mBF47BC63B12AB301DA1C8635C5CEAEF5B8205FD4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_0 = ___content1;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_1;
		NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_2 = ___stream0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = V_0;
		bool L_4 = NetworkStreamExtensions_ReadExactly_m4DCC0953A79E6ED3313D46B8633C94821DBEC10E(L_2, L_3, 4, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0016;
		}
	}
	{
		return (bool)0;
	}

IL_0016:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = V_0;
		int32_t L_6 = Utils_BytesToIntBigEndian_m0BB7C8D78A1D26D9362333EAB2994B6826A11320(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_7 = ___content1;
		int32_t L_8 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_8);
		*((RuntimeObject **)L_7) = (RuntimeObject *)L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_7, (void*)(RuntimeObject *)L_9);
		NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_10 = ___stream0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_11 = ___content1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_11);
		int32_t L_13 = V_1;
		bool L_14 = NetworkStreamExtensions_ReadExactly_m4DCC0953A79E6ED3313D46B8633C94821DBEC10E(L_10, L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Void Telepathy.Common::ReceiveLoop(System.Int32,System.Net.Sockets.TcpClient,System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Common_ReceiveLoop_mC03AB28AA2993A62A1ECF6714E82F95CE26D3A6F (int32_t ___connectionId0, TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * ___client1, ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * ___receiveQueue2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Common_ReceiveLoop_mC03AB28AA2993A62A1ECF6714E82F95CE26D3A6F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * V_0 = NULL;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_0 = ___client1;
		NullCheck(L_0);
		NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_1 = TcpClient_GetStream_m882B17757A177B57BF6F88BBC450280DDF3FB02B(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_2 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
		V_1 = L_2;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * L_3 = ___receiveQueue2;
			int32_t L_4 = ___connectionId0;
			Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 * L_5 = (Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 *)il2cpp_codegen_object_new(Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603_il2cpp_TypeInfo_var);
			Message__ctor_mBEF974E200260B769415EFB7C6D35483DEA19D12(L_5, L_4, 0, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL, /*hidden argument*/NULL);
			NullCheck(L_3);
			ConcurrentQueue_1_Enqueue_m6125CF593F2A8706CB4BF556C3061D60B897ED59(L_3, L_5, /*hidden argument*/ConcurrentQueue_1_Enqueue_m6125CF593F2A8706CB4BF556C3061D60B897ED59_RuntimeMethod_var);
		}

IL_001b:
		{
			NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_6 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var);
			bool L_7 = Common_ReadMessageBlocking_mBF47BC63B12AB301DA1C8635C5CEAEF5B8205FD4(L_6, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)(&V_2), /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_008a;
			}
		}

IL_0025:
		{
			ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * L_8 = ___receiveQueue2;
			int32_t L_9 = ___connectionId0;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = V_2;
			Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 * L_11 = (Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 *)il2cpp_codegen_object_new(Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603_il2cpp_TypeInfo_var);
			Message__ctor_mBEF974E200260B769415EFB7C6D35483DEA19D12(L_11, L_9, 1, L_10, /*hidden argument*/NULL);
			NullCheck(L_8);
			ConcurrentQueue_1_Enqueue_m6125CF593F2A8706CB4BF556C3061D60B897ED59(L_8, L_11, /*hidden argument*/ConcurrentQueue_1_Enqueue_m6125CF593F2A8706CB4BF556C3061D60B897ED59_RuntimeMethod_var);
			ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * L_12 = ___receiveQueue2;
			NullCheck(L_12);
			int32_t L_13 = ConcurrentQueue_1_get_Count_mE8D982D8EEBBD40AB4C45785A2A6B2D10B60D882(L_12, /*hidden argument*/ConcurrentQueue_1_get_Count_mE8D982D8EEBBD40AB4C45785A2A6B2D10B60D882_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var);
			int32_t L_14 = ((Common_tFCC994B3A027AC464326397B2D22751359949226_StaticFields*)il2cpp_codegen_static_fields_for(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var))->get_messageQueueSizeWarning_1();
			if ((((int32_t)L_13) <= ((int32_t)L_14)))
			{
				goto IL_001b;
			}
		}

IL_0040:
		{
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
			DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_15 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
			DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_16 = V_1;
			TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_17 = DateTime_op_Subtraction_m8005DCC8F0F183AC1335F87A82FDF92926CC5021(L_15, L_16, /*hidden argument*/NULL);
			V_3 = L_17;
			double L_18 = TimeSpan_get_TotalSeconds_m0F8F314166E6D1F9D36F32EB1272451EDE56B4EA((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&V_3), /*hidden argument*/NULL);
			if ((!(((double)L_18) > ((double)(10.0)))))
			{
				goto IL_001b;
			}
		}

IL_005e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var);
			Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_19 = ((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->get_LogWarning_1();
			ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * L_20 = ___receiveQueue2;
			NullCheck(L_20);
			int32_t L_21 = ConcurrentQueue_1_get_Count_mE8D982D8EEBBD40AB4C45785A2A6B2D10B60D882(L_20, /*hidden argument*/ConcurrentQueue_1_get_Count_mE8D982D8EEBBD40AB4C45785A2A6B2D10B60D882_RuntimeMethod_var);
			int32_t L_22 = L_21;
			RuntimeObject * L_23 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_22);
			String_t* L_24 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteral1619BAA13AB771AF07557F27C1908E8741D4EB10, L_23, _stringLiteral3118EE4F680A68045ACAF0DA59222F14B2B82D03, /*hidden argument*/NULL);
			NullCheck(L_19);
			Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_19, L_24, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
			DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_25 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
			V_1 = L_25;
			goto IL_001b;
		}

IL_008a:
		{
			goto IL_00c3;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_008c;
		throw e;
	}

CATCH_008c:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_26 = ((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->get_Log_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_27 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = L_27;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral76F1F10EB368D6EE8D808B40444B229BD727601E);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral76F1F10EB368D6EE8D808B40444B229BD727601E);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_29 = L_28;
		int32_t L_30 = ___connectionId0;
		int32_t L_31 = L_30;
		RuntimeObject * L_32 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_32);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_32);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_33 = L_29;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteralE8DF8A178D45C37CCBA3FBF4BD8950103C51ADC3);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralE8DF8A178D45C37CCBA3FBF4BD8950103C51ADC3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_34 = L_33;
		Exception_t * L_35 = V_4;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_35);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_35);
		String_t* L_36 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_34, /*hidden argument*/NULL);
		NullCheck(L_26);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_26, L_36, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
		goto IL_00c3;
	} // end catch (depth: 1)

IL_00c3:
	{
		NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_37 = V_0;
		NullCheck(L_37);
		VirtActionInvoker0::Invoke(15 /* System.Void System.IO.Stream::Close() */, L_37);
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_38 = ___client1;
		NullCheck(L_38);
		TcpClient_Close_mD5023AF41D41A87FA5A946881E330E8E34F2DEFE(L_38, /*hidden argument*/NULL);
		ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * L_39 = ___receiveQueue2;
		int32_t L_40 = ___connectionId0;
		Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 * L_41 = (Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 *)il2cpp_codegen_object_new(Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603_il2cpp_TypeInfo_var);
		Message__ctor_mBEF974E200260B769415EFB7C6D35483DEA19D12(L_41, L_40, 2, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL, /*hidden argument*/NULL);
		NullCheck(L_39);
		ConcurrentQueue_1_Enqueue_m6125CF593F2A8706CB4BF556C3061D60B897ED59(L_39, L_41, /*hidden argument*/ConcurrentQueue_1_Enqueue_m6125CF593F2A8706CB4BF556C3061D60B897ED59_RuntimeMethod_var);
		return;
	}
}
// System.Void Telepathy.Common::SendLoop(System.Int32,System.Net.Sockets.TcpClient,Telepathy.SafeQueue`1<System.Byte[]>,System.Threading.ManualResetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Common_SendLoop_m557A26F5F590B71B7AD5E999C10278C91D7FD780 (int32_t ___connectionId0, TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * ___client1, SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * ___sendQueue2, ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * ___sendPending3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Common_SendLoop_m557A26F5F590B71B7AD5E999C10278C91D7FD780_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * V_0 = NULL;
	ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_0 = ___client1;
		NullCheck(L_0);
		NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_1 = TcpClient_GetStream_m882B17757A177B57BF6F88BBC450280DDF3FB02B(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002c;
		}

IL_0009:
		{
			ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_2 = ___sendPending3;
			NullCheck(L_2);
			EventWaitHandle_Reset_m59EBCEA32BC9C67B4E432BEA5FF0A42ED0CC8A6F(L_2, /*hidden argument*/NULL);
			SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * L_3 = ___sendQueue2;
			NullCheck(L_3);
			bool L_4 = SafeQueue_1_TryDequeueAll_m25C99C52B06FCD69F34DF4AA87DB4AAC0A465595(L_3, (ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7**)(&V_1), /*hidden argument*/SafeQueue_1_TryDequeueAll_m25C99C52B06FCD69F34DF4AA87DB4AAC0A465595_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_0025;
			}
		}

IL_001a:
		{
			NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_5 = V_0;
			ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* L_6 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var);
			bool L_7 = Common_SendMessagesBlocking_m5066E8D1C091012F7D4A3354EFB65FE95C7C5C33(L_5, L_6, /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_0025;
			}
		}

IL_0023:
		{
			goto IL_0071;
		}

IL_0025:
		{
			ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_8 = ___sendPending3;
			NullCheck(L_8);
			VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_8);
		}

IL_002c:
		{
			TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_9 = ___client1;
			NullCheck(L_9);
			bool L_10 = TcpClient_get_Connected_m49D1BA8F64A3FFA32A6E77B4A26E9AAA4822500C(L_9, /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_0009;
			}
		}

IL_0034:
		{
			goto IL_0071;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ThreadAbortException_t0B7CFB34B2901B695FBCFF84E0A1EBDFC8177468_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0036;
		if(il2cpp_codegen_class_is_assignable_from (ThreadInterruptedException_t40D8296AA9D9E8B74E29BFAE1089CFACC5F03751_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0039;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_003c;
		throw e;
	}

CATCH_0036:
	{ // begin catch(System.Threading.ThreadAbortException)
		goto IL_0071;
	} // end catch (depth: 1)

CATCH_0039:
	{ // begin catch(System.Threading.ThreadInterruptedException)
		goto IL_0071;
	} // end catch (depth: 1)

CATCH_003c:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_11 = ((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->get_Log_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral66543C5BE27E9FC762E6F61A6DE92E339B2A8B9F);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral66543C5BE27E9FC762E6F61A6DE92E339B2A8B9F);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = L_13;
		int32_t L_15 = ___connectionId0;
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_17);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = L_14;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteralE8DF8A178D45C37CCBA3FBF4BD8950103C51ADC3);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralE8DF8A178D45C37CCBA3FBF4BD8950103C51ADC3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = L_18;
		Exception_t * L_20 = V_2;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_20);
		String_t* L_21 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_19, /*hidden argument*/NULL);
		NullCheck(L_11);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_11, L_21, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
		goto IL_0071;
	} // end catch (depth: 1)

IL_0071:
	{
		return;
	}
}
// System.Void Telepathy.Common::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Common__ctor_m13F2E5C6F6BF201A417C3D2F7EEF1068D6C3F963 (Common_tFCC994B3A027AC464326397B2D22751359949226 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Common__ctor_m13F2E5C6F6BF201A417C3D2F7EEF1068D6C3F963_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * L_0 = (ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 *)il2cpp_codegen_object_new(ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88_il2cpp_TypeInfo_var);
		ConcurrentQueue_1__ctor_mE0C98FA8DF17628759165E71ABA079F43E138238(L_0, /*hidden argument*/ConcurrentQueue_1__ctor_mE0C98FA8DF17628759165E71ABA079F43E138238_RuntimeMethod_var);
		__this->set_receiveQueue_0(L_0);
		__this->set_NoDelay_2((bool)1);
		__this->set_SendTimeout_3(((int32_t)5000));
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Telepathy.Common::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Common__cctor_m57448D04D9AAFEBAE67A1C82D4ECA233221736D9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Common__cctor_m57448D04D9AAFEBAE67A1C82D4ECA233221736D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Common_tFCC994B3A027AC464326397B2D22751359949226_StaticFields*)il2cpp_codegen_static_fields_for(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var))->set_messageQueueSizeWarning_1(((int32_t)100000));
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
// System.Void Telepathy.Logger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger__cctor_m41F7B2E8747B6E5497190A1B4BAAC9482FA83D11 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger__cctor_m41F7B2E8747B6E5497190A1B4BAAC9482FA83D11_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_0 = (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)il2cpp_codegen_object_new(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var);
		Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3(L_0, NULL, (intptr_t)((intptr_t)Console_WriteLine_mA5F7E391799514350980A0DE16983383542CA820_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3_RuntimeMethod_var);
		((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->set_Log_0(L_0);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_1 = (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)il2cpp_codegen_object_new(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var);
		Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3(L_1, NULL, (intptr_t)((intptr_t)Console_WriteLine_mA5F7E391799514350980A0DE16983383542CA820_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3_RuntimeMethod_var);
		((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->set_LogWarning_1(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_2 = Console_get_Error_mE1078EFC5C7C133964838D2A72B8FB9567E4C98A_inline(/*hidden argument*/NULL);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_3 = L_2;
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_4 = (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)il2cpp_codegen_object_new(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var);
		Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3(L_4, L_3, (intptr_t)((intptr_t)GetVirtualMethodInfo(L_3, 20)), /*hidden argument*/Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3_RuntimeMethod_var);
		((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->set_LogError_2(L_4);
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
// System.Void Telepathy.Message::.ctor(System.Int32,Telepathy.EventType,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_mBEF974E200260B769415EFB7C6D35483DEA19D12 (Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 * __this, int32_t ___connectionId0, int32_t ___eventType1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data2, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___connectionId0;
		__this->set_connectionId_0(L_0);
		int32_t L_1 = ___eventType1;
		__this->set_eventType_1(L_1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___data2;
		__this->set_data_2(L_2);
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
// System.Int32 Telepathy.Server::NextConnectionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Server_NextConnectionId_mA859D97AA15DA3E1C1B8AA3B15F9F0693036A2FB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server_NextConnectionId_mA859D97AA15DA3E1C1B8AA3B15F9F0693036A2FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = Interlocked_Increment_mB6D391197444B8BFD30BAE1EDCF1A255CD2F292F((int32_t*)(((Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818_StaticFields*)il2cpp_codegen_static_fields_for(Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818_il2cpp_TypeInfo_var))->get_address_of_counter_7()), /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)2147483647LL)))))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral2F6AB31A42C4C7E46DC0749EA2BFD13700474A55, L_4, /*hidden argument*/NULL);
		Exception_t * L_6 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, Server_NextConnectionId_mA859D97AA15DA3E1C1B8AA3B15F9F0693036A2FB_RuntimeMethod_var);
	}

IL_0029:
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Boolean Telepathy.Server::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_get_Active_m8A88A9B4EE0F8CC542518A444874585E2C6DA23E (Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * __this, const RuntimeMethod* method)
{
	{
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_0 = __this->get_listenerThread_5();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_1 = __this->get_listenerThread_5();
		NullCheck(L_1);
		bool L_2 = Thread_get_IsAlive_m7477BEFB95036F688AC50EE669B64E9755ABF679(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Void Telepathy.Server::Listen(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server_Listen_mE133896EBF2A4DE641361060F8C987DD9A73E4C7 (Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * __this, int32_t ___port0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server_Listen_mE133896EBF2A4DE641361060F8C987DD9A73E4C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_t435D804CCD2D8FDFDFC19ED930ACC19F130DED35 * V_0 = NULL;
	ThreadAbortException_t0B7CFB34B2901B695FBCFF84E0A1EBDFC8177468 * V_1 = NULL;
	SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * V_2 = NULL;
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var);
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_0 = ((IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var))->get_Any_0();
			int32_t L_1 = ___port0;
			IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_2 = (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F *)il2cpp_codegen_object_new(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_il2cpp_TypeInfo_var);
			IPEndPoint__ctor_m1C90FD0534415E17207A0BBC05CD381335089845(L_2, L_0, L_1, /*hidden argument*/NULL);
			TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * L_3 = (TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE *)il2cpp_codegen_object_new(TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE_il2cpp_TypeInfo_var);
			TcpListener__ctor_m6BD6AA691F3184936E0DB075F80DB77115F61031(L_3, L_2, /*hidden argument*/NULL);
			__this->set_listener_4(L_3);
			TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * L_4 = __this->get_listener_4();
			NullCheck(L_4);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_5 = TcpListener_get_Server_m47C4797186DDB94DBDADE5FC567B56BD292D88C6_inline(L_4, /*hidden argument*/NULL);
			bool L_6 = ((Common_tFCC994B3A027AC464326397B2D22751359949226 *)__this)->get_NoDelay_2();
			NullCheck(L_5);
			Socket_set_NoDelay_mB51929BB6C13E4C051C59B62A9C5CBEA3A129D76(L_5, L_6, /*hidden argument*/NULL);
			TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * L_7 = __this->get_listener_4();
			NullCheck(L_7);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_8 = TcpListener_get_Server_m47C4797186DDB94DBDADE5FC567B56BD292D88C6_inline(L_7, /*hidden argument*/NULL);
			int32_t L_9 = ((Common_tFCC994B3A027AC464326397B2D22751359949226 *)__this)->get_SendTimeout_3();
			NullCheck(L_8);
			Socket_set_SendTimeout_m2D5D60D07619721F5C405ADD640CC1B0CDE4CCB5(L_8, L_9, /*hidden argument*/NULL);
			TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * L_10 = __this->get_listener_4();
			NullCheck(L_10);
			TcpListener_Start_m7F59BAC98F3819580CE5F2D911513D42FF21F101(L_10, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var);
			Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_11 = ((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->get_Log_0();
			int32_t L_12 = ___port0;
			int32_t L_13 = L_12;
			RuntimeObject * L_14 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_13);
			String_t* L_15 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralC31C331DD77C27DDAEB5B67E6102EAE823BFE03E, L_14, /*hidden argument*/NULL);
			NullCheck(L_11);
			Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_11, L_15, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
		}

IL_0067:
		{
			U3CU3Ec__DisplayClass8_0_t435D804CCD2D8FDFDFC19ED930ACC19F130DED35 * L_16 = (U3CU3Ec__DisplayClass8_0_t435D804CCD2D8FDFDFC19ED930ACC19F130DED35 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_t435D804CCD2D8FDFDFC19ED930ACC19F130DED35_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass8_0__ctor_m64869BFBCACCB8B468CB43C7699CAF23DBC9101C(L_16, /*hidden argument*/NULL);
			V_0 = L_16;
			U3CU3Ec__DisplayClass8_0_t435D804CCD2D8FDFDFC19ED930ACC19F130DED35 * L_17 = V_0;
			NullCheck(L_17);
			L_17->set_U3CU3E4__this_4(__this);
			U3CU3Ec__DisplayClass8_0_t435D804CCD2D8FDFDFC19ED930ACC19F130DED35 * L_18 = V_0;
			TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * L_19 = __this->get_listener_4();
			NullCheck(L_19);
			TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_20 = TcpListener_AcceptTcpClient_mA55444BAE76E163D81C41D0D46D07F67662E48C2(L_19, /*hidden argument*/NULL);
			NullCheck(L_18);
			L_18->set_client_1(L_20);
			U3CU3Ec__DisplayClass8_0_t435D804CCD2D8FDFDFC19ED930ACC19F130DED35 * L_21 = V_0;
			int32_t L_22 = Server_NextConnectionId_mA859D97AA15DA3E1C1B8AA3B15F9F0693036A2FB(/*hidden argument*/NULL);
			NullCheck(L_21);
			L_21->set_connectionId_0(L_22);
			U3CU3Ec__DisplayClass8_0_t435D804CCD2D8FDFDFC19ED930ACC19F130DED35 * L_23 = V_0;
			U3CU3Ec__DisplayClass8_0_t435D804CCD2D8FDFDFC19ED930ACC19F130DED35 * L_24 = V_0;
			NullCheck(L_24);
			TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_25 = L_24->get_client_1();
			ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A * L_26 = (ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A *)il2cpp_codegen_object_new(ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A_il2cpp_TypeInfo_var);
			ClientToken__ctor_mC1B5F7E20739789586D05CD6D419828E561FCF89(L_26, L_25, /*hidden argument*/NULL);
			NullCheck(L_23);
			L_23->set_token_2(L_26);
			ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B * L_27 = __this->get_clients_6();
			U3CU3Ec__DisplayClass8_0_t435D804CCD2D8FDFDFC19ED930ACC19F130DED35 * L_28 = V_0;
			NullCheck(L_28);
			int32_t L_29 = L_28->get_connectionId_0();
			U3CU3Ec__DisplayClass8_0_t435D804CCD2D8FDFDFC19ED930ACC19F130DED35 * L_30 = V_0;
			NullCheck(L_30);
			ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A * L_31 = L_30->get_token_2();
			NullCheck(L_27);
			ConcurrentDictionary_2_set_Item_m5212345FD34A8EB642E9495AF7E914E9C04B7B2D(L_27, L_29, L_31, /*hidden argument*/ConcurrentDictionary_2_set_Item_m5212345FD34A8EB642E9495AF7E914E9C04B7B2D_RuntimeMethod_var);
			U3CU3Ec__DisplayClass8_0_t435D804CCD2D8FDFDFC19ED930ACC19F130DED35 * L_32 = V_0;
			U3CU3Ec__DisplayClass8_0_t435D804CCD2D8FDFDFC19ED930ACC19F130DED35 * L_33 = V_0;
			ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * L_34 = (ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF *)il2cpp_codegen_object_new(ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_il2cpp_TypeInfo_var);
			ThreadStart__ctor_m692348FEAEBAF381D62984EE95B217CC024A77D5(L_34, L_33, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass8_0_U3CListenU3Eb__0_mD73080BA15F0C53E985EF0565CBEB860DB8F7653_RuntimeMethod_var), /*hidden argument*/NULL);
			Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_35 = (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 *)il2cpp_codegen_object_new(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_il2cpp_TypeInfo_var);
			Thread__ctor_m36A33B990160C4499E991D288341CA325AE66DDD(L_35, L_34, /*hidden argument*/NULL);
			NullCheck(L_32);
			L_32->set_sendThread_3(L_35);
			U3CU3Ec__DisplayClass8_0_t435D804CCD2D8FDFDFC19ED930ACC19F130DED35 * L_36 = V_0;
			NullCheck(L_36);
			Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_37 = L_36->get_sendThread_3();
			NullCheck(L_37);
			Thread_set_IsBackground_mF62551A195DCB09D44E512F52916145E39362D39(L_37, (bool)1, /*hidden argument*/NULL);
			U3CU3Ec__DisplayClass8_0_t435D804CCD2D8FDFDFC19ED930ACC19F130DED35 * L_38 = V_0;
			NullCheck(L_38);
			Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_39 = L_38->get_sendThread_3();
			NullCheck(L_39);
			Thread_Start_mE2AC4744AFD147FDC84E8D9317B4E3AB890BC2D6(L_39, /*hidden argument*/NULL);
			U3CU3Ec__DisplayClass8_0_t435D804CCD2D8FDFDFC19ED930ACC19F130DED35 * L_40 = V_0;
			ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * L_41 = (ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF *)il2cpp_codegen_object_new(ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_il2cpp_TypeInfo_var);
			ThreadStart__ctor_m692348FEAEBAF381D62984EE95B217CC024A77D5(L_41, L_40, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass8_0_U3CListenU3Eb__1_m7D05331B6C6E61D0DA81B3CD2929F4AF1F3269E7_RuntimeMethod_var), /*hidden argument*/NULL);
			Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_42 = (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 *)il2cpp_codegen_object_new(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_il2cpp_TypeInfo_var);
			Thread__ctor_m36A33B990160C4499E991D288341CA325AE66DDD(L_42, L_41, /*hidden argument*/NULL);
			Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_43 = L_42;
			NullCheck(L_43);
			Thread_set_IsBackground_mF62551A195DCB09D44E512F52916145E39362D39(L_43, (bool)1, /*hidden argument*/NULL);
			NullCheck(L_43);
			Thread_Start_mE2AC4744AFD147FDC84E8D9317B4E3AB890BC2D6(L_43, /*hidden argument*/NULL);
			goto IL_0067;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ThreadAbortException_t0B7CFB34B2901B695FBCFF84E0A1EBDFC8177468_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0108;
		if(il2cpp_codegen_class_is_assignable_from (SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0120;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0138;
		throw e;
	}

CATCH_0108:
	{ // begin catch(System.Threading.ThreadAbortException)
		V_1 = ((ThreadAbortException_t0B7CFB34B2901B695FBCFF84E0A1EBDFC8177468 *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_44 = ((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->get_Log_0();
		ThreadAbortException_t0B7CFB34B2901B695FBCFF84E0A1EBDFC8177468 * L_45 = V_1;
		String_t* L_46 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral83A8FCE6863DF8B32EB30DA9374E5F50B9032EF0, L_45, /*hidden argument*/NULL);
		NullCheck(L_44);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_44, L_46, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
		goto IL_0150;
	} // end catch (depth: 1)

CATCH_0120:
	{ // begin catch(System.Net.Sockets.SocketException)
		V_2 = ((SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_47 = ((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->get_Log_0();
		SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * L_48 = V_2;
		String_t* L_49 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral3AFBB7D02FD452639C5A0C67A1F100237541A3D2, L_48, /*hidden argument*/NULL);
		NullCheck(L_47);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_47, L_49, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
		goto IL_0150;
	} // end catch (depth: 1)

CATCH_0138:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_50 = ((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->get_LogError_2();
		Exception_t * L_51 = V_3;
		String_t* L_52 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralC0ED0BCDBF619BA36EFC50F01E50D7CE7AD7621D, L_51, /*hidden argument*/NULL);
		NullCheck(L_50);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_50, L_52, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
		goto IL_0150;
	} // end catch (depth: 1)

IL_0150:
	{
		return;
	}
}
// System.Boolean Telepathy.Server::Start(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_Start_mDC7D017C87BAF8E28C0EEF8B87B0285271FDAD26 (Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * __this, int32_t ___port0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server_Start_mDC7D017C87BAF8E28C0EEF8B87B0285271FDAD26_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_t0538B57D079BC105BEA75B525EAD92ACF0215212 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass9_0_t0538B57D079BC105BEA75B525EAD92ACF0215212 * L_0 = (U3CU3Ec__DisplayClass9_0_t0538B57D079BC105BEA75B525EAD92ACF0215212 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_t0538B57D079BC105BEA75B525EAD92ACF0215212_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass9_0__ctor_mDFB8F60A46FCDCF50FC1B019801A4756DF8BE2C8(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass9_0_t0538B57D079BC105BEA75B525EAD92ACF0215212 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass9_0_t0538B57D079BC105BEA75B525EAD92ACF0215212 * L_2 = V_0;
		int32_t L_3 = ___port0;
		NullCheck(L_2);
		L_2->set_port_1(L_3);
		bool L_4 = Server_get_Active_m8A88A9B4EE0F8CC542518A444874585E2C6DA23E(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * L_5 = (ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 *)il2cpp_codegen_object_new(ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88_il2cpp_TypeInfo_var);
		ConcurrentQueue_1__ctor_mE0C98FA8DF17628759165E71ABA079F43E138238(L_5, /*hidden argument*/ConcurrentQueue_1__ctor_mE0C98FA8DF17628759165E71ABA079F43E138238_RuntimeMethod_var);
		((Common_tFCC994B3A027AC464326397B2D22751359949226 *)__this)->set_receiveQueue_0(L_5);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_6 = ((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->get_Log_0();
		U3CU3Ec__DisplayClass9_0_t0538B57D079BC105BEA75B525EAD92ACF0215212 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_port_1();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral4C6EA14AE90A81F87AE5B46E129FC9723656FCB4, L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_6, L_11, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
		U3CU3Ec__DisplayClass9_0_t0538B57D079BC105BEA75B525EAD92ACF0215212 * L_12 = V_0;
		ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * L_13 = (ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF *)il2cpp_codegen_object_new(ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m692348FEAEBAF381D62984EE95B217CC024A77D5(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass9_0_U3CStartU3Eb__0_mF2A6633F6082F6B14E0441F60090AE0B27D353D2_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_14 = (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 *)il2cpp_codegen_object_new(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_il2cpp_TypeInfo_var);
		Thread__ctor_m36A33B990160C4499E991D288341CA325AE66DDD(L_14, L_13, /*hidden argument*/NULL);
		__this->set_listenerThread_5(L_14);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_15 = __this->get_listenerThread_5();
		NullCheck(L_15);
		Thread_set_IsBackground_mF62551A195DCB09D44E512F52916145E39362D39(L_15, (bool)1, /*hidden argument*/NULL);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_16 = __this->get_listenerThread_5();
		NullCheck(L_16);
		Thread_set_Priority_m151C92263BC72BE6910D49C7E3DF48BFBAB09F57(L_16, 1, /*hidden argument*/NULL);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_17 = __this->get_listenerThread_5();
		NullCheck(L_17);
		Thread_Start_mE2AC4744AFD147FDC84E8D9317B4E3AB890BC2D6(L_17, /*hidden argument*/NULL);
		return (bool)1;
	}
}
// System.Void Telepathy.Server::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server_Stop_mF5732A0EEA771924FF5D204A2EDB26C4E404BC90 (Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server_Stop_mF5732A0EEA771924FF5D204A2EDB26C4E404BC90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t0911B99C3D535F2034E2A23A9E155B8B5D350DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * G_B4_0 = NULL;
	TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * G_B3_0 = NULL;
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * G_B7_0 = NULL;
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * G_B6_0 = NULL;
	{
		bool L_0 = Server_get_Active_m8A88A9B4EE0F8CC542518A444874585E2C6DA23E(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_1 = ((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->get_Log_0();
		NullCheck(L_1);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_1, _stringLiteral6AB159501C3B6F7C716A8800C00D53A2072E3760, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
		TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * L_2 = __this->get_listener_4();
		TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0024;
		}
	}
	{
		goto IL_0029;
	}

IL_0024:
	{
		NullCheck(G_B4_0);
		TcpListener_Stop_m9087121EA1A353EA84DEFE49BFBAE810155AFA5A(G_B4_0, /*hidden argument*/NULL);
	}

IL_0029:
	{
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_4 = __this->get_listenerThread_5();
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_5 = L_4;
		G_B6_0 = L_5;
		if (L_5)
		{
			G_B7_0 = L_5;
			goto IL_0035;
		}
	}
	{
		goto IL_003a;
	}

IL_0035:
	{
		NullCheck(G_B7_0);
		Thread_Interrupt_m9A3506B1F1CDF92E362922E04E3E38618A4E90B8(G_B7_0, /*hidden argument*/NULL);
	}

IL_003a:
	{
		__this->set_listenerThread_5((Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 *)NULL);
		ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B * L_6 = __this->get_clients_6();
		NullCheck(L_6);
		RuntimeObject* L_7 = ConcurrentDictionary_2_GetEnumerator_mC8CCB554D71818FC87797CA6A729FE21C6A6D586(L_6, /*hidden argument*/ConcurrentDictionary_2_GetEnumerator_mC8CCB554D71818FC87797CA6A729FE21C6A6D586_RuntimeMethod_var);
		V_0 = L_7;
	}

IL_004d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0079;
		}

IL_004f:
		{
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			KeyValuePair_2_t0911B99C3D535F2034E2A23A9E155B8B5D350DE6  L_9 = InterfaceFuncInvoker0< KeyValuePair_2_t0911B99C3D535F2034E2A23A9E155B8B5D350DE6  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Telepathy.Server/ClientToken>>::get_Current() */, IEnumerator_1_t508525B64491AF47B5A1088519688F29FD61FF2B_il2cpp_TypeInfo_var, L_8);
			V_1 = L_9;
			ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A * L_10 = KeyValuePair_2_get_Value_m324E1CA07A85129724ECAFC8CFDA2061567118E1_inline((KeyValuePair_2_t0911B99C3D535F2034E2A23A9E155B8B5D350DE6 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m324E1CA07A85129724ECAFC8CFDA2061567118E1_RuntimeMethod_var);
			NullCheck(L_10);
			TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_11 = L_10->get_client_0();
			V_2 = L_11;
		}

IL_0063:
		try
		{ // begin try (depth: 2)
			TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_12 = V_2;
			NullCheck(L_12);
			NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_13 = TcpClient_GetStream_m882B17757A177B57BF6F88BBC450280DDF3FB02B(L_12, /*hidden argument*/NULL);
			NullCheck(L_13);
			VirtActionInvoker0::Invoke(15 /* System.Void System.IO.Stream::Close() */, L_13);
			goto IL_0073;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0070;
			throw e;
		}

CATCH_0070:
		{ // begin catch(System.Object)
			goto IL_0073;
		} // end catch (depth: 2)

IL_0073:
		{
			TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_14 = V_2;
			NullCheck(L_14);
			TcpClient_Close_mD5023AF41D41A87FA5A946881E330E8E34F2DEFE(L_14, /*hidden argument*/NULL);
		}

IL_0079:
		{
			RuntimeObject* L_15 = V_0;
			NullCheck(L_15);
			bool L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_004f;
			}
		}

IL_0081:
		{
			IL2CPP_LEAVE(0x8D, FINALLY_0083);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0083;
	}

FINALLY_0083:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_17 = V_0;
			if (!L_17)
			{
				goto IL_008c;
			}
		}

IL_0086:
		{
			RuntimeObject* L_18 = V_0;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_18);
		}

IL_008c:
		{
			IL2CPP_END_FINALLY(131)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(131)
	{
		IL2CPP_JUMP_TBL(0x8D, IL_008d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008d:
	{
		ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B * L_19 = __this->get_clients_6();
		NullCheck(L_19);
		ConcurrentDictionary_2_Clear_m6A23CE975E89E2159E0FB0A9F6C0467A9BC5B498(L_19, /*hidden argument*/ConcurrentDictionary_2_Clear_m6A23CE975E89E2159E0FB0A9F6C0467A9BC5B498_RuntimeMethod_var);
		return;
	}
}
// System.Boolean Telepathy.Server::Send(System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_Send_m7EBF1040EBD3E98CF7207F9BEE3C9C317E8902AE (Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * __this, int32_t ___connectionId0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server_Send_m7EBF1040EBD3E98CF7207F9BEE3C9C317E8902AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A * V_0 = NULL;
	{
		ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B * L_0 = __this->get_clients_6();
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		bool L_2 = ConcurrentDictionary_2_TryGetValue_m59346F5E5BE9EA778692883C58EF477723B6F816(L_0, L_1, (ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A **)(&V_0), /*hidden argument*/ConcurrentDictionary_2_TryGetValue_m59346F5E5BE9EA778692883C58EF477723B6F816_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A * L_3 = V_0;
		NullCheck(L_3);
		SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * L_4 = L_3->get_sendQueue_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___data1;
		NullCheck(L_4);
		SafeQueue_1_Enqueue_m82A8D4FE1BA7C08B7D64FBA7338B4EC69356EF47(L_4, L_5, /*hidden argument*/SafeQueue_1_Enqueue_m82A8D4FE1BA7C08B7D64FBA7338B4EC69356EF47_RuntimeMethod_var);
		ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A * L_6 = V_0;
		NullCheck(L_6);
		ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_7 = L_6->get_sendPending_2();
		NullCheck(L_7);
		EventWaitHandle_Set_m7959A86A39735296FC949EC86FDA42A6CFAAB94C(L_7, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_002a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_8 = ((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->get_Log_0();
		int32_t L_9 = ___connectionId0;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralFA8F63962667C303B6561E946EBE125E942D715A, L_11, /*hidden argument*/NULL);
		NullCheck(L_8);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_8, L_12, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
		return (bool)0;
	}
}
// System.String Telepathy.Server::GetClientAddress(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Server_GetClientAddress_m3A89CB4D5CFB895D546C53492F1B1A68B32E94AC (Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * __this, int32_t ___connectionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server_GetClientAddress_m3A89CB4D5CFB895D546C53492F1B1A68B32E94AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A * V_0 = NULL;
	{
		ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B * L_0 = __this->get_clients_6();
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		bool L_2 = ConcurrentDictionary_2_TryGetValue_m59346F5E5BE9EA778692883C58EF477723B6F816(L_0, L_1, (ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A **)(&V_0), /*hidden argument*/ConcurrentDictionary_2_TryGetValue_m59346F5E5BE9EA778692883C58EF477723B6F816_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A * L_3 = V_0;
		NullCheck(L_3);
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_4 = L_3->get_client_0();
		NullCheck(L_4);
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_5 = TcpClient_get_Client_m7EE266557B305926B1A845F3C75E2532899D4395_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * L_6 = Socket_get_RemoteEndPoint_mD926D4C2BD8A8B534D992E177D155F7EF8685D20(L_5, /*hidden argument*/NULL);
		NullCheck(((IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F *)CastclassClass((RuntimeObject*)L_6, IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_il2cpp_TypeInfo_var)));
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_7 = IPEndPoint_get_Address_m01D2AB4ACC29D3E3A79D3D2A207CE3063336F2A4_inline(((IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F *)CastclassClass((RuntimeObject*)L_6, IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		return L_8;
	}

IL_0030:
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Boolean Telepathy.Server::Disconnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_Disconnect_m76A6B045DDC94883F543150B79C2186CC29FB2C6 (Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * __this, int32_t ___connectionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server_Disconnect_m76A6B045DDC94883F543150B79C2186CC29FB2C6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A * V_0 = NULL;
	{
		ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B * L_0 = __this->get_clients_6();
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		bool L_2 = ConcurrentDictionary_2_TryGetValue_m59346F5E5BE9EA778692883C58EF477723B6F816(L_0, L_1, (ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A **)(&V_0), /*hidden argument*/ConcurrentDictionary_2_TryGetValue_m59346F5E5BE9EA778692883C58EF477723B6F816_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A * L_3 = V_0;
		NullCheck(L_3);
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_4 = L_3->get_client_0();
		NullCheck(L_4);
		TcpClient_Close_mD5023AF41D41A87FA5A946881E330E8E34F2DEFE(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_5 = ((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->get_Log_0();
		int32_t L_6 = ___connectionId0;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralEDADE908567D0ACA7CEC59214C41F139A3A4FDEB, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_5, L_9, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
		return (bool)1;
	}

IL_0037:
	{
		return (bool)0;
	}
}
// System.Void Telepathy.Server::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server__ctor_mEC48C7169D134409ABAF240CBE9415AAF5C44A6D (Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server__ctor_mEC48C7169D134409ABAF240CBE9415AAF5C44A6D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B * L_0 = (ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B *)il2cpp_codegen_object_new(ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2__ctor_m37E2237A4B10477387B79E541E5B63D66D61FB77(L_0, /*hidden argument*/ConcurrentDictionary_2__ctor_m37E2237A4B10477387B79E541E5B63D66D61FB77_RuntimeMethod_var);
		__this->set_clients_6(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var);
		Common__ctor_m13F2E5C6F6BF201A417C3D2F7EEF1068D6C3F963(__this, /*hidden argument*/NULL);
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
// System.Void Telepathy.Server_<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m64869BFBCACCB8B468CB43C7699CAF23DBC9101C (U3CU3Ec__DisplayClass8_0_t435D804CCD2D8FDFDFC19ED930ACC19F130DED35 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Telepathy.Server_<>c__DisplayClass8_0::<Listen>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CListenU3Eb__0_mD73080BA15F0C53E985EF0565CBEB860DB8F7653 (U3CU3Ec__DisplayClass8_0_t435D804CCD2D8FDFDFC19ED930ACC19F130DED35 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass8_0_U3CListenU3Eb__0_mD73080BA15F0C53E985EF0565CBEB860DB8F7653_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		int32_t L_0 = __this->get_connectionId_0();
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_1 = __this->get_client_1();
		ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A * L_2 = __this->get_token_2();
		NullCheck(L_2);
		SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * L_3 = L_2->get_sendQueue_1();
		ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A * L_4 = __this->get_token_2();
		NullCheck(L_4);
		ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_5 = L_4->get_sendPending_2();
		IL2CPP_RUNTIME_CLASS_INIT(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var);
		Common_SendLoop_m557A26F5F590B71B7AD5E999C10278C91D7FD780(L_0, L_1, L_3, L_5, /*hidden argument*/NULL);
		goto IL_0044;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ThreadAbortException_t0B7CFB34B2901B695FBCFF84E0A1EBDFC8177468_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0029;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_002c;
		throw e;
	}

CATCH_0029:
	{ // begin catch(System.Threading.ThreadAbortException)
		goto IL_0044;
	} // end catch (depth: 1)

CATCH_002c:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_6 = ((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->get_LogError_2();
		Exception_t * L_7 = V_0;
		String_t* L_8 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral836E14BE15578F4F7EC14937830E3FFF06AC407C, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_6, L_8, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
		goto IL_0044;
	} // end catch (depth: 1)

IL_0044:
	{
		return;
	}
}
// System.Void Telepathy.Server_<>c__DisplayClass8_0::<Listen>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CListenU3Eb__1_m7D05331B6C6E61D0DA81B3CD2929F4AF1F3269E7 (U3CU3Ec__DisplayClass8_0_t435D804CCD2D8FDFDFC19ED930ACC19F130DED35 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass8_0_U3CListenU3Eb__1_m7D05331B6C6E61D0DA81B3CD2929F4AF1F3269E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A * V_0 = NULL;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		int32_t L_0 = __this->get_connectionId_0();
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_1 = __this->get_client_1();
		Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * L_2 = __this->get_U3CU3E4__this_4();
		NullCheck(L_2);
		ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * L_3 = ((Common_tFCC994B3A027AC464326397B2D22751359949226 *)L_2)->get_receiveQueue_0();
		IL2CPP_RUNTIME_CLASS_INIT(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var);
		Common_ReceiveLoop_mC03AB28AA2993A62A1ECF6714E82F95CE26D3A6F(L_0, L_1, L_3, /*hidden argument*/NULL);
		Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * L_4 = __this->get_U3CU3E4__this_4();
		NullCheck(L_4);
		ConcurrentDictionary_2_tB6D3FD6839FF0EE9369CE9FFA26FED67079FF35B * L_5 = L_4->get_clients_6();
		int32_t L_6 = __this->get_connectionId_0();
		NullCheck(L_5);
		ConcurrentDictionary_2_TryRemove_mD767D432660C563BFDCCDAC2CACBF3C2B2FB6EAF(L_5, L_6, (ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A **)(&V_0), /*hidden argument*/ConcurrentDictionary_2_TryRemove_mD767D432660C563BFDCCDAC2CACBF3C2B2FB6EAF_RuntimeMethod_var);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_7 = __this->get_sendThread_3();
		NullCheck(L_7);
		Thread_Interrupt_m9A3506B1F1CDF92E362922E04E3E38618A4E90B8(L_7, /*hidden argument*/NULL);
		goto IL_005a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0042;
		throw e;
	}

CATCH_0042:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_8 = ((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->get_LogError_2();
		Exception_t * L_9 = V_1;
		String_t* L_10 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral802964DAE1D452A4275C8C5317E3A2E9CA7B6001, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_8, L_10, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
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
// System.Void Telepathy.Server_<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mDFB8F60A46FCDCF50FC1B019801A4756DF8BE2C8 (U3CU3Ec__DisplayClass9_0_t0538B57D079BC105BEA75B525EAD92ACF0215212 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Telepathy.Server_<>c__DisplayClass9_0::<Start>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CStartU3Eb__0_mF2A6633F6082F6B14E0441F60090AE0B27D353D2 (U3CU3Ec__DisplayClass9_0_t0538B57D079BC105BEA75B525EAD92ACF0215212 * __this, const RuntimeMethod* method)
{
	{
		Server_t6ED6B47E2FC368A6F1CFF695432393724C5A8818 * L_0 = __this->get_U3CU3E4__this_0();
		int32_t L_1 = __this->get_port_1();
		NullCheck(L_0);
		Server_Listen_mE133896EBF2A4DE641361060F8C987DD9A73E4C7(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Telepathy.Server_ClientToken::.ctor(System.Net.Sockets.TcpClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientToken__ctor_mC1B5F7E20739789586D05CD6D419828E561FCF89 (ClientToken_tFDEA742161135D91C64CD69E3EC8CE5CB699B70A * __this, TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * ___client0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientToken__ctor_mC1B5F7E20739789586D05CD6D419828E561FCF89_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * L_0 = (SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 *)il2cpp_codegen_object_new(SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10_il2cpp_TypeInfo_var);
		SafeQueue_1__ctor_m460E7015E13028426B10F3C99C741A9648354C33(L_0, /*hidden argument*/SafeQueue_1__ctor_m460E7015E13028426B10F3C99C741A9648354C33_RuntimeMethod_var);
		__this->set_sendQueue_1(L_0);
		ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_1 = (ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 *)il2cpp_codegen_object_new(ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_m8973D9E3C622B9602641C017A33870F51D0311E1(L_1, (bool)0, /*hidden argument*/NULL);
		__this->set_sendPending_2(L_1);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_2 = ___client0;
		__this->set_client_0(L_2);
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
// System.Byte[] Telepathy.Utils::IntToBytesBigEndian(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Utils_IntToBytesBigEndian_m758E1D164DEBC4CCDFD6820F6D596C90099A1A9E (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utils_IntToBytesBigEndian_m758E1D164DEBC4CCDFD6820F6D596C90099A1A9E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = L_0;
		int32_t L_2 = ___value0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_2>>(int32_t)((int32_t)24)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = L_1;
		int32_t L_4 = ___value0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_4>>(int32_t)((int32_t)16)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = L_3;
		int32_t L_6 = ___value0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_6>>(int32_t)8))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = L_5;
		int32_t L_8 = ___value0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)(((int32_t)((uint8_t)L_8))));
		return L_7;
	}
}
// System.Int32 Telepathy.Utils::BytesToIntBigEndian(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_BytesToIntBigEndian_m0BB7C8D78A1D26D9362333EAB2994B6826A11320 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___bytes0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___bytes0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___bytes0;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = ___bytes0;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_5<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_8<<(int32_t)8))))|(int32_t)L_11));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * TcpClient_get_Client_m7EE266557B305926B1A845F3C75E2532899D4395_inline (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, const RuntimeMethod* method)
{
	{
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_m_ClientSocket_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Socket_get_Connected_mB757B01CF081289D443081672D65CDF8AD76D3DE_inline (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_is_connected_23();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * Console_get_Error_mE1078EFC5C7C133964838D2A72B8FB9567E4C98A_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Console_get_Error_mE1078EFC5C7C133964838D2A72B8FB9567E4C98ATelepathy_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_0 = ((Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields*)il2cpp_codegen_static_fields_for(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var))->get_stderr_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * TcpListener_get_Server_m47C4797186DDB94DBDADE5FC567B56BD292D88C6_inline (TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * __this, const RuntimeMethod* method)
{
	{
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_m_ServerSocket_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * IPEndPoint_get_Address_m01D2AB4ACC29D3E3A79D3D2A207CE3063336F2A4_inline (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * __this, const RuntimeMethod* method)
{
	{
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_0 = __this->get_m_Address_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m6111F7FFB9F9E80C559084882040115B4F3DFF8E_gshared_inline (KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
