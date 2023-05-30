﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.EventHandler`1<AppodealStack.Monetization.Common.AdLoadedEventArgs>
struct EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA;
// System.EventHandler`1<AppodealStack.Monetization.Common.AdRevenueEventArgs>
struct EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308;
// System.EventHandler`1<AppodealStack.Monetization.Common.BannerLoadedEventArgs>
struct EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD;
// System.EventHandler`1<AppodealStack.Monetization.Common.InAppPurchaseEventArgs>
struct EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6;
// System.EventHandler`1<AppodealStack.Monetization.Common.RewardedVideoClosedEventArgs>
struct EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE;
// System.EventHandler`1<AppodealStack.Monetization.Common.RewardedVideoFinishedEventArgs>
struct EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113;
// System.EventHandler`1<AppodealStack.Monetization.Common.SdkInitializedEventArgs>
struct EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B;
// System.EventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// AppodealStack.Monetization.Common.AdLoadedEventArgs
struct AdLoadedEventArgs_t2F7259B880EABD1911936EA4AFD0D6C50D1330FA;
// AppodealStack.Monetization.Common.AdRevenueEventArgs
struct AdRevenueEventArgs_t5197C274C4238877BFC0EB90043E3598CB867786;
// AppodealStack.Monetization.Common.AdRevenueProxyListener
struct AdRevenueProxyListener_t30DC0858DAEB497DB660FC8E23E33FAE95D96BD8;
// AppodealStack.Monetization.Common.AppodealAdRevenue
struct AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14;
// AppodealStack.Monetization.Common.AppodealReward
struct AppodealReward_t073F58485E43B47D6DD3E730BA1ED35CA851B866;
// AppodealStack.Monetization.Common.BannerAdProxyListener
struct BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4;
// AppodealStack.Monetization.Common.BannerLoadedEventArgs
struct BannerLoadedEventArgs_t17EE25930EFBF4B368D44C0F357AC2B45C212CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// AppodealStack.Monetization.Common.IAdRevenueListener
struct IAdRevenueListener_t4EA61CE68DC2AA7CABF8DFE002B359888AFFA2A7;
// AppodealStack.Monetization.Common.IAdRevenueProxyListener
struct IAdRevenueProxyListener_tD175694515923B973B749A368207DE6973EA3FFE;
// AppodealStack.Monetization.Common.IAppodealInitializationListener
struct IAppodealInitializationListener_tE391C3AC8EB20933A7F002B4A19AF18271F093CB;
// AppodealStack.Monetization.Common.IBannerAdListener
struct IBannerAdListener_tDFE091DE412D0D00B1B46E1E599D2649812A2FD8;
// AppodealStack.Monetization.Common.IBannerAdProxyListener
struct IBannerAdProxyListener_tAC08C823CDBFE91AABAE61DCD83B05377125CE1C;
// AppodealStack.Monetization.Common.IInAppPurchaseValidationListener
struct IInAppPurchaseValidationListener_t2FC5FE145015D81E2F6A7EC4FD9C2E0BD84B7CD7;
// AppodealStack.Monetization.Common.IInAppPurchaseValidationProxyListener
struct IInAppPurchaseValidationProxyListener_t410B2CB29C4A7016D9DA879C6B2014AAF1EDBCFA;
// AppodealStack.Monetization.Common.IInterstitialAdListener
struct IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97;
// AppodealStack.Monetization.Common.IInterstitialAdProxyListener
struct IInterstitialAdProxyListener_t08AA56BE5B736E771161C83E8E0EC9189EAAE786;
// AppodealStack.Monetization.Common.IMrecAdListener
struct IMrecAdListener_tE137D04EDF5519329E09E69C094305D8CB9B5519;
// AppodealStack.Monetization.Common.IMrecAdProxyListener
struct IMrecAdProxyListener_tB1A11CCF8E542F43EDD41424240E33660E036083;
// AppodealStack.Monetization.Common.IRewardedVideoAdListener
struct IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619;
// AppodealStack.Monetization.Common.IRewardedVideoAdProxyListener
struct IRewardedVideoAdProxyListener_tE234E4C058611167104301C38E6DDE2B3794FFB2;
// AppodealStack.Monetization.Common.ISdkProxyListener
struct ISdkProxyListener_t9690157AB76C6FB197B67A06E92332B3806220DD;
// AppodealStack.Monetization.Common.InAppPurchaseEventArgs
struct InAppPurchaseEventArgs_t78C43610CE4ACAA37E1588542415921FCE470C73;
// AppodealStack.Monetization.Common.InAppPurchaseValidationProxyListener
struct InAppPurchaseValidationProxyListener_tEF4A4E377F15B2E799679C630E558BCEA46D3685;
// AppodealStack.Monetization.Common.InterstitialAdProxyListener
struct InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// AppodealStack.Monetization.Common.MrecAdProxyListener
struct MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682;
// AppodealStack.Monetization.Common.RewardedVideoAdProxyListener
struct RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A;
// AppodealStack.Monetization.Common.RewardedVideoClosedEventArgs
struct RewardedVideoClosedEventArgs_t4FC78F06AC8480C706595468368B1105D2216590;
// AppodealStack.Monetization.Common.RewardedVideoFinishedEventArgs
struct RewardedVideoFinishedEventArgs_tC53B8C04520C77DA8044F5687E99CB57DF45135C;
// AppodealStack.Monetization.Common.SdkInitializedEventArgs
struct SdkInitializedEventArgs_t78A87E4997F422DFF4923A44CDCAE8693AA21005;
// AppodealStack.Monetization.Common.SdkProxyListener
struct SdkProxyListener_t8B86FCD3D4F7D42A0DFF581EF5AF9B15F656D388;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// AppodealStack.Monetization.Common.AppodealCallbacks/AdRevenue
struct AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402;
// AppodealStack.Monetization.Common.AppodealCallbacks/Banner
struct Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9;
// AppodealStack.Monetization.Common.AppodealCallbacks/InAppPurchase
struct InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097;
// AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial
struct Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11;
// AppodealStack.Monetization.Common.AppodealCallbacks/Mrec
struct Mrec_t843799EFC43FACAD42BCB139872F609137368D0A;
// AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo
struct RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0;
// AppodealStack.Monetization.Common.AppodealCallbacks/Sdk
struct Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594;

IL2CPP_EXTERN_C RuntimeClass* AdLoadedEventArgs_t2F7259B880EABD1911936EA4AFD0D6C50D1330FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdRevenueEventArgs_t5197C274C4238877BFC0EB90043E3598CB867786_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdRevenueProxyListener_t30DC0858DAEB497DB660FC8E23E33FAE95D96BD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BannerLoadedEventArgs_t17EE25930EFBF4B368D44C0F357AC2B45C212CE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAdRevenueListener_t4EA61CE68DC2AA7CABF8DFE002B359888AFFA2A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAdRevenueProxyListener_tD175694515923B973B749A368207DE6973EA3FFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAppodealInitializationListener_tE391C3AC8EB20933A7F002B4A19AF18271F093CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBannerAdListener_tDFE091DE412D0D00B1B46E1E599D2649812A2FD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBannerAdProxyListener_tAC08C823CDBFE91AABAE61DCD83B05377125CE1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInAppPurchaseValidationListener_t2FC5FE145015D81E2F6A7EC4FD9C2E0BD84B7CD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInAppPurchaseValidationProxyListener_t410B2CB29C4A7016D9DA879C6B2014AAF1EDBCFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInterstitialAdProxyListener_t08AA56BE5B736E771161C83E8E0EC9189EAAE786_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMrecAdListener_tE137D04EDF5519329E09E69C094305D8CB9B5519_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMrecAdProxyListener_tB1A11CCF8E542F43EDD41424240E33660E036083_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRewardedVideoAdProxyListener_tE234E4C058611167104301C38E6DDE2B3794FFB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISdkProxyListener_t9690157AB76C6FB197B67A06E92332B3806220DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InAppPurchaseEventArgs_t78C43610CE4ACAA37E1588542415921FCE470C73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InAppPurchaseValidationProxyListener_tEF4A4E377F15B2E799679C630E558BCEA46D3685_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RewardedVideoClosedEventArgs_t4FC78F06AC8480C706595468368B1105D2216590_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RewardedVideoFinishedEventArgs_tC53B8C04520C77DA8044F5687E99CB57DF45135C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SdkInitializedEventArgs_t78A87E4997F422DFF4923A44CDCAE8693AA21005_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SdkProxyListener_t8B86FCD3D4F7D42A0DFF581EF5AF9B15F656D388_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral863E8E1658AFF4C69A1445FEA34DD625F52A7BFF;
IL2CPP_EXTERN_C const RuntimeMethod* AdRevenue_U3CInitializeCallbacksU3Eb__11_0_mD1DDDF7204FD177F64B7F2FF525A3BC4AB6A6DB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Banner_U3CInitializeCallbacksU3Eb__26_0_mBCF1D67CF9CA9B2379F4C9BFF6EE94573D095BAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Banner_U3CInitializeCallbacksU3Eb__26_1_m3DA345A2D6FE4FFE328AF14AB93DA558E20EF590_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Banner_U3CInitializeCallbacksU3Eb__26_2_m8F2D24A82343FAAD380263113DAE169039A52D9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Banner_U3CInitializeCallbacksU3Eb__26_3_mC469257E039508927EB66AB5C0FC4781C9E3EB64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Banner_U3CInitializeCallbacksU3Eb__26_4_m281E5CD352EE5BCC2ED8A45FC15899C2536F26C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Banner_U3CInitializeCallbacksU3Eb__26_5_m65EAA7DB27EBD918D30DDDF4793875E615B8CE27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InAppPurchase_U3CInitializeCallbacksU3Eb__14_0_m25E1591B91B8CB3533F5063C5CD82B225292FA44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InAppPurchase_U3CInitializeCallbacksU3Eb__14_1_m76FD9FAE873E839D4C0974B668C9528B36EFF1EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interstitial_U3CInitializeCallbacksU3Eb__29_0_m95B185D386EF73DAE3BFE2B4F2B41F7084911161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interstitial_U3CInitializeCallbacksU3Eb__29_1_mF792594F9FB3F0E325D5D7D1B0F9C48E4AB739CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interstitial_U3CInitializeCallbacksU3Eb__29_2_m070691446EEDB5AB7659A1C0DC294134D393DCCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interstitial_U3CInitializeCallbacksU3Eb__29_3_mD454DDFF361D192CFF3952DC5455E8CD72EF5C7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interstitial_U3CInitializeCallbacksU3Eb__29_4_m17A7525DA5EB1D99FC92D4D831E60ED93EAE5D04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interstitial_U3CInitializeCallbacksU3Eb__29_5_m1009E4E1D1705C09C08F99CC1674307C9A3C0C49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interstitial_U3CInitializeCallbacksU3Eb__29_6_m4140CCB3B3CC73A5B35DE79B3E13768F4058E692_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mrec_U3CInitializeCallbacksU3Eb__26_0_mE2076DDBE675E42D1B066E46F27C42F3C3E40980_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mrec_U3CInitializeCallbacksU3Eb__26_1_m13E6EFB12304ED7318B89B847587E0D9A0E4E13B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mrec_U3CInitializeCallbacksU3Eb__26_2_m364AD00656032EF7E559459ABFB7CBB94D845685_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mrec_U3CInitializeCallbacksU3Eb__26_3_m56849A82AD6C6A3BEB8CD9BD136DBC7223DD3988_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mrec_U3CInitializeCallbacksU3Eb__26_4_m1FDE500C6101F4CD12AD445FBD305EE500FD09B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mrec_U3CInitializeCallbacksU3Eb__26_5_mF4400BC100AB9CA0002D569B0E1FCCA0D6702185_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedVideo_U3CInitializeCallbacksU3Eb__32_0_m980AA814A7D66C0C19AE6AB37D03556654DB9DB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedVideo_U3CInitializeCallbacksU3Eb__32_1_mA22BB18D57F0AFB4A65784314E6505D10E582532_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedVideo_U3CInitializeCallbacksU3Eb__32_2_mC4A87D98D4D4D6E2D46B9F0694F602C34A157BFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedVideo_U3CInitializeCallbacksU3Eb__32_3_m7A5959B156D49726E4C7645C519A553EEBC8E65A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedVideo_U3CInitializeCallbacksU3Eb__32_4_m8F95B85FF402895630A57FAA7C19DCA07163D352_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedVideo_U3CInitializeCallbacksU3Eb__32_5_m67A6C642589D76EEAC111BE24D32A8CF7AEA69B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedVideo_U3CInitializeCallbacksU3Eb__32_6_mA7C0C9348835714D08F50500B2C5B12D4AE42C8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedVideo_U3CInitializeCallbacksU3Eb__32_7_mE14BFC1C2C412046CCF0CEBB4D7B392499D2377B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Sdk_U3CInitializeCallbacksU3Eb__11_0_m1C5B1E8EECDE6DCBDE0ADF07D75BD53D18B7AAEB_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t0382579E6B5481F8A228C9EB33EF472F6B09B497 
{
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// AppodealStack.Monetization.Common.AdRevenueProxyListener
struct AdRevenueProxyListener_t30DC0858DAEB497DB660FC8E23E33FAE95D96BD8  : public RuntimeObject
{
	// AppodealStack.Monetization.Common.IAdRevenueListener AppodealStack.Monetization.Common.AdRevenueProxyListener::<Listener>k__BackingField
	RuntimeObject* ___U3CListenerU3Ek__BackingField_0;
	// System.EventHandler`1<AppodealStack.Monetization.Common.AdRevenueEventArgs> AppodealStack.Monetization.Common.AdRevenueProxyListener::OnReceived
	EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* ___OnReceived_1;
};

// AppodealStack.Monetization.Common.AppodealAdRevenue
struct AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14  : public RuntimeObject
{
	// System.String AppodealStack.Monetization.Common.AppodealAdRevenue::AdType
	String_t* ___AdType_0;
	// System.String AppodealStack.Monetization.Common.AppodealAdRevenue::NetworkName
	String_t* ___NetworkName_1;
	// System.String AppodealStack.Monetization.Common.AppodealAdRevenue::AdUnitName
	String_t* ___AdUnitName_2;
	// System.String AppodealStack.Monetization.Common.AppodealAdRevenue::DemandSource
	String_t* ___DemandSource_3;
	// System.String AppodealStack.Monetization.Common.AppodealAdRevenue::Placement
	String_t* ___Placement_4;
	// System.Double AppodealStack.Monetization.Common.AppodealAdRevenue::Revenue
	double ___Revenue_5;
	// System.String AppodealStack.Monetization.Common.AppodealAdRevenue::Currency
	String_t* ___Currency_6;
	// System.String AppodealStack.Monetization.Common.AppodealAdRevenue::RevenuePrecision
	String_t* ___RevenuePrecision_7;
};

// AppodealStack.Monetization.Common.AppodealAdType
struct AppodealAdType_t51E0149D50BFCF100052F943D82D2C3B379375C5  : public RuntimeObject
{
};

// AppodealStack.Monetization.Common.AppodealCallbacks
struct AppodealCallbacks_t04A55A11A87A9A45B34545CEEB855D3097FB12EC  : public RuntimeObject
{
};

// AppodealStack.Monetization.Common.AppodealNetworks
struct AppodealNetworks_tAEEC4DFFC20471BE4ADDE156DB386BEA9492F096  : public RuntimeObject
{
};

// AppodealStack.Monetization.Common.AppodealReward
struct AppodealReward_t073F58485E43B47D6DD3E730BA1ED35CA851B866  : public RuntimeObject
{
	// System.Double AppodealStack.Monetization.Common.AppodealReward::Amount
	double ___Amount_0;
	// System.String AppodealStack.Monetization.Common.AppodealReward::Currency
	String_t* ___Currency_1;
};

// AppodealStack.Monetization.Common.AppodealShowStyle
struct AppodealShowStyle_tF5B9A6A070D15EFFB2F2F182B8B0D66048880356  : public RuntimeObject
{
};

// AppodealStack.Monetization.Common.AppodealVersions
struct AppodealVersions_tFBFB3CA8FCAE1E85AFF1B0D128FB5EB9EA2AC4A6  : public RuntimeObject
{
};

// AppodealStack.Monetization.Common.AppodealViewPosition
struct AppodealViewPosition_t0DD9C56255C03BADF02E7918844C11405B7D92E1  : public RuntimeObject
{
};

// AppodealStack.Monetization.Common.BannerAdProxyListener
struct BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4  : public RuntimeObject
{
	// AppodealStack.Monetization.Common.IBannerAdListener AppodealStack.Monetization.Common.BannerAdProxyListener::<Listener>k__BackingField
	RuntimeObject* ___U3CListenerU3Ek__BackingField_0;
	// System.EventHandler`1<AppodealStack.Monetization.Common.BannerLoadedEventArgs> AppodealStack.Monetization.Common.BannerAdProxyListener::OnLoaded
	EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* ___OnLoaded_1;
	// System.EventHandler AppodealStack.Monetization.Common.BannerAdProxyListener::OnFailedToLoad
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnFailedToLoad_2;
	// System.EventHandler AppodealStack.Monetization.Common.BannerAdProxyListener::OnShown
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnShown_3;
	// System.EventHandler AppodealStack.Monetization.Common.BannerAdProxyListener::OnShowFailed
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnShowFailed_4;
	// System.EventHandler AppodealStack.Monetization.Common.BannerAdProxyListener::OnClicked
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnClicked_5;
	// System.EventHandler AppodealStack.Monetization.Common.BannerAdProxyListener::OnExpired
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnExpired_6;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

// AppodealStack.Monetization.Common.InAppPurchaseValidationProxyListener
struct InAppPurchaseValidationProxyListener_tEF4A4E377F15B2E799679C630E558BCEA46D3685  : public RuntimeObject
{
	// AppodealStack.Monetization.Common.IInAppPurchaseValidationListener AppodealStack.Monetization.Common.InAppPurchaseValidationProxyListener::<Listener>k__BackingField
	RuntimeObject* ___U3CListenerU3Ek__BackingField_0;
	// System.EventHandler`1<AppodealStack.Monetization.Common.InAppPurchaseEventArgs> AppodealStack.Monetization.Common.InAppPurchaseValidationProxyListener::OnValidationSucceeded
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* ___OnValidationSucceeded_1;
	// System.EventHandler`1<AppodealStack.Monetization.Common.InAppPurchaseEventArgs> AppodealStack.Monetization.Common.InAppPurchaseValidationProxyListener::OnValidationFailed
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* ___OnValidationFailed_2;
};

// AppodealStack.Monetization.Common.InterstitialAdProxyListener
struct InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4  : public RuntimeObject
{
	// AppodealStack.Monetization.Common.IInterstitialAdListener AppodealStack.Monetization.Common.InterstitialAdProxyListener::<Listener>k__BackingField
	RuntimeObject* ___U3CListenerU3Ek__BackingField_0;
	// System.EventHandler`1<AppodealStack.Monetization.Common.AdLoadedEventArgs> AppodealStack.Monetization.Common.InterstitialAdProxyListener::OnLoaded
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* ___OnLoaded_1;
	// System.EventHandler AppodealStack.Monetization.Common.InterstitialAdProxyListener::OnFailedToLoad
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnFailedToLoad_2;
	// System.EventHandler AppodealStack.Monetization.Common.InterstitialAdProxyListener::OnShown
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnShown_3;
	// System.EventHandler AppodealStack.Monetization.Common.InterstitialAdProxyListener::OnShowFailed
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnShowFailed_4;
	// System.EventHandler AppodealStack.Monetization.Common.InterstitialAdProxyListener::OnClosed
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnClosed_5;
	// System.EventHandler AppodealStack.Monetization.Common.InterstitialAdProxyListener::OnClicked
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnClicked_6;
	// System.EventHandler AppodealStack.Monetization.Common.InterstitialAdProxyListener::OnExpired
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnExpired_7;
};

// AppodealStack.Monetization.Common.MrecAdProxyListener
struct MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682  : public RuntimeObject
{
	// AppodealStack.Monetization.Common.IMrecAdListener AppodealStack.Monetization.Common.MrecAdProxyListener::<Listener>k__BackingField
	RuntimeObject* ___U3CListenerU3Ek__BackingField_0;
	// System.EventHandler`1<AppodealStack.Monetization.Common.AdLoadedEventArgs> AppodealStack.Monetization.Common.MrecAdProxyListener::OnLoaded
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* ___OnLoaded_1;
	// System.EventHandler AppodealStack.Monetization.Common.MrecAdProxyListener::OnFailedToLoad
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnFailedToLoad_2;
	// System.EventHandler AppodealStack.Monetization.Common.MrecAdProxyListener::OnShown
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnShown_3;
	// System.EventHandler AppodealStack.Monetization.Common.MrecAdProxyListener::OnShowFailed
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnShowFailed_4;
	// System.EventHandler AppodealStack.Monetization.Common.MrecAdProxyListener::OnClicked
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnClicked_5;
	// System.EventHandler AppodealStack.Monetization.Common.MrecAdProxyListener::OnExpired
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnExpired_6;
};

// AppodealStack.Monetization.Common.PredefinedKeys
struct PredefinedKeys_tCFCBFA77962475D78A82E51B0439D6B74C47DC41  : public RuntimeObject
{
};

// AppodealStack.Monetization.Common.RewardedVideoAdProxyListener
struct RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A  : public RuntimeObject
{
	// AppodealStack.Monetization.Common.IRewardedVideoAdListener AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::<Listener>k__BackingField
	RuntimeObject* ___U3CListenerU3Ek__BackingField_0;
	// System.EventHandler`1<AppodealStack.Monetization.Common.AdLoadedEventArgs> AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::OnLoaded
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* ___OnLoaded_1;
	// System.EventHandler AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::OnFailedToLoad
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnFailedToLoad_2;
	// System.EventHandler AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::OnShown
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnShown_3;
	// System.EventHandler AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::OnShowFailed
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnShowFailed_4;
	// System.EventHandler`1<AppodealStack.Monetization.Common.RewardedVideoClosedEventArgs> AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::OnClosed
	EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* ___OnClosed_5;
	// System.EventHandler`1<AppodealStack.Monetization.Common.RewardedVideoFinishedEventArgs> AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::OnFinished
	EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* ___OnFinished_6;
	// System.EventHandler AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::OnClicked
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnClicked_7;
	// System.EventHandler AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::OnExpired
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnExpired_8;
};

// AppodealStack.Monetization.Common.SdkProxyListener
struct SdkProxyListener_t8B86FCD3D4F7D42A0DFF581EF5AF9B15F656D388  : public RuntimeObject
{
	// AppodealStack.Monetization.Common.IAppodealInitializationListener AppodealStack.Monetization.Common.SdkProxyListener::<InitListener>k__BackingField
	RuntimeObject* ___U3CInitListenerU3Ek__BackingField_0;
	// System.EventHandler`1<AppodealStack.Monetization.Common.SdkInitializedEventArgs> AppodealStack.Monetization.Common.SdkProxyListener::OnInitialized
	EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* ___OnInitialized_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// AppodealStack.Monetization.Common.AppodealCallbacks/AdRevenue
struct AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402  : public RuntimeObject
{
	// AppodealStack.Monetization.Common.IAdRevenueProxyListener AppodealStack.Monetization.Common.AppodealCallbacks/AdRevenue::_adRevenueEventsImpl
	RuntimeObject* ____adRevenueEventsImpl_2;
};

// AppodealStack.Monetization.Common.AppodealCallbacks/Banner
struct Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9  : public RuntimeObject
{
	// AppodealStack.Monetization.Common.IBannerAdProxyListener AppodealStack.Monetization.Common.AppodealCallbacks/Banner::_bannerAdEventsImpl
	RuntimeObject* ____bannerAdEventsImpl_2;
};

// AppodealStack.Monetization.Common.AppodealCallbacks/InAppPurchase
struct InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097  : public RuntimeObject
{
	// AppodealStack.Monetization.Common.IInAppPurchaseValidationProxyListener AppodealStack.Monetization.Common.AppodealCallbacks/InAppPurchase::_purchaseEventsImpl
	RuntimeObject* ____purchaseEventsImpl_2;
};

// AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial
struct Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11  : public RuntimeObject
{
	// AppodealStack.Monetization.Common.IInterstitialAdProxyListener AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::_interstitialAdEventsImpl
	RuntimeObject* ____interstitialAdEventsImpl_2;
};

// AppodealStack.Monetization.Common.AppodealCallbacks/Mrec
struct Mrec_t843799EFC43FACAD42BCB139872F609137368D0A  : public RuntimeObject
{
	// AppodealStack.Monetization.Common.IMrecAdProxyListener AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::_mrecAdEventsImpl
	RuntimeObject* ____mrecAdEventsImpl_2;
};

// AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo
struct RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0  : public RuntimeObject
{
	// AppodealStack.Monetization.Common.IRewardedVideoAdProxyListener AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::_rewardedVideoAdEventsImpl
	RuntimeObject* ____rewardedVideoAdEventsImpl_2;
};

// AppodealStack.Monetization.Common.AppodealCallbacks/Sdk
struct Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594  : public RuntimeObject
{
	// AppodealStack.Monetization.Common.ISdkProxyListener AppodealStack.Monetization.Common.AppodealCallbacks/Sdk::_sdkEventsImpl
	RuntimeObject* ____sdkEventsImpl_2;
};

// AppodealStack.Monetization.Common.AdLoadedEventArgs
struct AdLoadedEventArgs_t2F7259B880EABD1911936EA4AFD0D6C50D1330FA  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Boolean AppodealStack.Monetization.Common.AdLoadedEventArgs::<IsPrecache>k__BackingField
	bool ___U3CIsPrecacheU3Ek__BackingField_1;
};

// AppodealStack.Monetization.Common.AdRevenueEventArgs
struct AdRevenueEventArgs_t5197C274C4238877BFC0EB90043E3598CB867786  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// AppodealStack.Monetization.Common.AppodealAdRevenue AppodealStack.Monetization.Common.AdRevenueEventArgs::<Ad>k__BackingField
	AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14* ___U3CAdU3Ek__BackingField_1;
};

// AppodealStack.Monetization.Common.BannerLoadedEventArgs
struct BannerLoadedEventArgs_t17EE25930EFBF4B368D44C0F357AC2B45C212CE7  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Int32 AppodealStack.Monetization.Common.BannerLoadedEventArgs::<Height>k__BackingField
	int32_t ___U3CHeightU3Ek__BackingField_1;
	// System.Boolean AppodealStack.Monetization.Common.BannerLoadedEventArgs::<IsPrecache>k__BackingField
	bool ___U3CIsPrecacheU3Ek__BackingField_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// AppodealStack.Monetization.Common.InAppPurchaseEventArgs
struct InAppPurchaseEventArgs_t78C43610CE4ACAA37E1588542415921FCE470C73  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String AppodealStack.Monetization.Common.InAppPurchaseEventArgs::<Json>k__BackingField
	String_t* ___U3CJsonU3Ek__BackingField_1;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// AppodealStack.Monetization.Common.RewardedVideoClosedEventArgs
struct RewardedVideoClosedEventArgs_t4FC78F06AC8480C706595468368B1105D2216590  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Boolean AppodealStack.Monetization.Common.RewardedVideoClosedEventArgs::<Finished>k__BackingField
	bool ___U3CFinishedU3Ek__BackingField_1;
};

// AppodealStack.Monetization.Common.RewardedVideoFinishedEventArgs
struct RewardedVideoFinishedEventArgs_tC53B8C04520C77DA8044F5687E99CB57DF45135C  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Double AppodealStack.Monetization.Common.RewardedVideoFinishedEventArgs::<Amount>k__BackingField
	double ___U3CAmountU3Ek__BackingField_1;
	// System.String AppodealStack.Monetization.Common.RewardedVideoFinishedEventArgs::<Currency>k__BackingField
	String_t* ___U3CCurrencyU3Ek__BackingField_2;
};

// AppodealStack.Monetization.Common.SdkInitializedEventArgs
struct SdkInitializedEventArgs_t78A87E4997F422DFF4923A44CDCAE8693AA21005  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Collections.Generic.List`1<System.String> AppodealStack.Monetization.Common.SdkInitializedEventArgs::<Errors>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CErrorsU3Ek__BackingField_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.EventHandler`1<AppodealStack.Monetization.Common.AdLoadedEventArgs>
struct EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA  : public MulticastDelegate_t
{
};

// System.EventHandler`1<AppodealStack.Monetization.Common.AdRevenueEventArgs>
struct EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308  : public MulticastDelegate_t
{
};

// System.EventHandler`1<AppodealStack.Monetization.Common.BannerLoadedEventArgs>
struct EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD  : public MulticastDelegate_t
{
};

// System.EventHandler`1<AppodealStack.Monetization.Common.InAppPurchaseEventArgs>
struct EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6  : public MulticastDelegate_t
{
};

// System.EventHandler`1<AppodealStack.Monetization.Common.RewardedVideoClosedEventArgs>
struct EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE  : public MulticastDelegate_t
{
};

// System.EventHandler`1<AppodealStack.Monetization.Common.RewardedVideoFinishedEventArgs>
struct EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113  : public MulticastDelegate_t
{
};

// System.EventHandler`1<AppodealStack.Monetization.Common.SdkInitializedEventArgs>
struct EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577  : public MulticastDelegate_t
{
};

// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82  : public MulticastDelegate_t
{
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// AppodealStack.Monetization.Common.AdRevenueProxyListener

// AppodealStack.Monetization.Common.AdRevenueProxyListener

// AppodealStack.Monetization.Common.AppodealAdRevenue

// AppodealStack.Monetization.Common.AppodealAdRevenue

// AppodealStack.Monetization.Common.AppodealAdType

// AppodealStack.Monetization.Common.AppodealAdType

// AppodealStack.Monetization.Common.AppodealCallbacks

// AppodealStack.Monetization.Common.AppodealCallbacks

// AppodealStack.Monetization.Common.AppodealNetworks

// AppodealStack.Monetization.Common.AppodealNetworks

// AppodealStack.Monetization.Common.AppodealReward

// AppodealStack.Monetization.Common.AppodealReward

// AppodealStack.Monetization.Common.AppodealShowStyle

// AppodealStack.Monetization.Common.AppodealShowStyle

// AppodealStack.Monetization.Common.AppodealVersions

// AppodealStack.Monetization.Common.AppodealVersions

// AppodealStack.Monetization.Common.AppodealViewPosition

// AppodealStack.Monetization.Common.AppodealViewPosition

// AppodealStack.Monetization.Common.BannerAdProxyListener

// AppodealStack.Monetization.Common.BannerAdProxyListener

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.EventArgs

// AppodealStack.Monetization.Common.InAppPurchaseValidationProxyListener

// AppodealStack.Monetization.Common.InAppPurchaseValidationProxyListener

// AppodealStack.Monetization.Common.InterstitialAdProxyListener

// AppodealStack.Monetization.Common.InterstitialAdProxyListener

// AppodealStack.Monetization.Common.MrecAdProxyListener

// AppodealStack.Monetization.Common.MrecAdProxyListener

// AppodealStack.Monetization.Common.PredefinedKeys

// AppodealStack.Monetization.Common.PredefinedKeys

// AppodealStack.Monetization.Common.RewardedVideoAdProxyListener

// AppodealStack.Monetization.Common.RewardedVideoAdProxyListener

// AppodealStack.Monetization.Common.SdkProxyListener

// AppodealStack.Monetization.Common.SdkProxyListener

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// AppodealStack.Monetization.Common.AppodealCallbacks/AdRevenue
struct AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_StaticFields
{
	// AppodealStack.Monetization.Common.AppodealCallbacks/AdRevenue AppodealStack.Monetization.Common.AppodealCallbacks/AdRevenue::_instance
	AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402* ____instance_0;
	// System.Object AppodealStack.Monetization.Common.AppodealCallbacks/AdRevenue::Lock
	RuntimeObject* ___Lock_1;
	// System.EventHandler`1<AppodealStack.Monetization.Common.AdRevenueEventArgs> AppodealStack.Monetization.Common.AppodealCallbacks/AdRevenue::OnReceived
	EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* ___OnReceived_3;
};

// AppodealStack.Monetization.Common.AppodealCallbacks/AdRevenue

// AppodealStack.Monetization.Common.AppodealCallbacks/Banner
struct Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields
{
	// AppodealStack.Monetization.Common.AppodealCallbacks/Banner AppodealStack.Monetization.Common.AppodealCallbacks/Banner::_instance
	Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9* ____instance_0;
	// System.Object AppodealStack.Monetization.Common.AppodealCallbacks/Banner::Lock
	RuntimeObject* ___Lock_1;
	// System.EventHandler`1<AppodealStack.Monetization.Common.BannerLoadedEventArgs> AppodealStack.Monetization.Common.AppodealCallbacks/Banner::OnLoaded
	EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* ___OnLoaded_3;
	// System.EventHandler AppodealStack.Monetization.Common.AppodealCallbacks/Banner::OnFailedToLoad
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnFailedToLoad_4;
	// System.EventHandler AppodealStack.Monetization.Common.AppodealCallbacks/Banner::OnShown
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnShown_5;
	// System.EventHandler AppodealStack.Monetization.Common.AppodealCallbacks/Banner::OnShowFailed
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnShowFailed_6;
	// System.EventHandler AppodealStack.Monetization.Common.AppodealCallbacks/Banner::OnClicked
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnClicked_7;
	// System.EventHandler AppodealStack.Monetization.Common.AppodealCallbacks/Banner::OnExpired
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnExpired_8;
};

// AppodealStack.Monetization.Common.AppodealCallbacks/Banner

// AppodealStack.Monetization.Common.AppodealCallbacks/InAppPurchase
struct InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_StaticFields
{
	// AppodealStack.Monetization.Common.AppodealCallbacks/InAppPurchase AppodealStack.Monetization.Common.AppodealCallbacks/InAppPurchase::_instance
	InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097* ____instance_0;
	// System.Object AppodealStack.Monetization.Common.AppodealCallbacks/InAppPurchase::Lock
	RuntimeObject* ___Lock_1;
	// System.EventHandler`1<AppodealStack.Monetization.Common.InAppPurchaseEventArgs> AppodealStack.Monetization.Common.AppodealCallbacks/InAppPurchase::OnValidationSucceeded
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* ___OnValidationSucceeded_3;
	// System.EventHandler`1<AppodealStack.Monetization.Common.InAppPurchaseEventArgs> AppodealStack.Monetization.Common.AppodealCallbacks/InAppPurchase::OnValidationFailed
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* ___OnValidationFailed_4;
};

// AppodealStack.Monetization.Common.AppodealCallbacks/InAppPurchase

// AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial
struct Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields
{
	// AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::_instance
	Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11* ____instance_0;
	// System.Object AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::Lock
	RuntimeObject* ___Lock_1;
	// System.EventHandler`1<AppodealStack.Monetization.Common.AdLoadedEventArgs> AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::OnLoaded
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* ___OnLoaded_3;
	// System.EventHandler AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::OnFailedToLoad
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnFailedToLoad_4;
	// System.EventHandler AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::OnShown
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnShown_5;
	// System.EventHandler AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::OnShowFailed
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnShowFailed_6;
	// System.EventHandler AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::OnClosed
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnClosed_7;
	// System.EventHandler AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::OnClicked
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnClicked_8;
	// System.EventHandler AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::OnExpired
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnExpired_9;
};

// AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial

// AppodealStack.Monetization.Common.AppodealCallbacks/Mrec
struct Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields
{
	// AppodealStack.Monetization.Common.AppodealCallbacks/Mrec AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::_instance
	Mrec_t843799EFC43FACAD42BCB139872F609137368D0A* ____instance_0;
	// System.Object AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::Lock
	RuntimeObject* ___Lock_1;
	// System.EventHandler`1<AppodealStack.Monetization.Common.AdLoadedEventArgs> AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::OnLoaded
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* ___OnLoaded_3;
	// System.EventHandler AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::OnFailedToLoad
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnFailedToLoad_4;
	// System.EventHandler AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::OnShown
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnShown_5;
	// System.EventHandler AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::OnShowFailed
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnShowFailed_6;
	// System.EventHandler AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::OnClicked
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnClicked_7;
	// System.EventHandler AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::OnExpired
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnExpired_8;
};

// AppodealStack.Monetization.Common.AppodealCallbacks/Mrec

// AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo
struct RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields
{
	// AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::_instance
	RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0* ____instance_0;
	// System.Object AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::Lock
	RuntimeObject* ___Lock_1;
	// System.EventHandler`1<AppodealStack.Monetization.Common.AdLoadedEventArgs> AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::OnLoaded
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* ___OnLoaded_3;
	// System.EventHandler AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::OnFailedToLoad
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnFailedToLoad_4;
	// System.EventHandler AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::OnShown
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnShown_5;
	// System.EventHandler AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::OnShowFailed
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnShowFailed_6;
	// System.EventHandler`1<AppodealStack.Monetization.Common.RewardedVideoClosedEventArgs> AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::OnClosed
	EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* ___OnClosed_7;
	// System.EventHandler`1<AppodealStack.Monetization.Common.RewardedVideoFinishedEventArgs> AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::OnFinished
	EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* ___OnFinished_8;
	// System.EventHandler AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::OnClicked
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnClicked_9;
	// System.EventHandler AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::OnExpired
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnExpired_10;
};

// AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo

// AppodealStack.Monetization.Common.AppodealCallbacks/Sdk
struct Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_StaticFields
{
	// AppodealStack.Monetization.Common.AppodealCallbacks/Sdk AppodealStack.Monetization.Common.AppodealCallbacks/Sdk::_instance
	Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594* ____instance_0;
	// System.Object AppodealStack.Monetization.Common.AppodealCallbacks/Sdk::Lock
	RuntimeObject* ___Lock_1;
	// System.EventHandler`1<AppodealStack.Monetization.Common.SdkInitializedEventArgs> AppodealStack.Monetization.Common.AppodealCallbacks/Sdk::OnInitialized
	EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* ___OnInitialized_3;
};

// AppodealStack.Monetization.Common.AppodealCallbacks/Sdk

// AppodealStack.Monetization.Common.AdLoadedEventArgs

// AppodealStack.Monetization.Common.AdLoadedEventArgs

// AppodealStack.Monetization.Common.AdRevenueEventArgs

// AppodealStack.Monetization.Common.AdRevenueEventArgs

// AppodealStack.Monetization.Common.BannerLoadedEventArgs

// AppodealStack.Monetization.Common.BannerLoadedEventArgs

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Double

// System.Double

// AppodealStack.Monetization.Common.InAppPurchaseEventArgs

// AppodealStack.Monetization.Common.InAppPurchaseEventArgs

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// AppodealStack.Monetization.Common.RewardedVideoClosedEventArgs

// AppodealStack.Monetization.Common.RewardedVideoClosedEventArgs

// AppodealStack.Monetization.Common.RewardedVideoFinishedEventArgs

// AppodealStack.Monetization.Common.RewardedVideoFinishedEventArgs

// AppodealStack.Monetization.Common.SdkInitializedEventArgs

// AppodealStack.Monetization.Common.SdkInitializedEventArgs

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// System.MulticastDelegate

// System.MulticastDelegate

// System.EventHandler`1<AppodealStack.Monetization.Common.AdLoadedEventArgs>

// System.EventHandler`1<AppodealStack.Monetization.Common.AdLoadedEventArgs>

// System.EventHandler`1<AppodealStack.Monetization.Common.AdRevenueEventArgs>

// System.EventHandler`1<AppodealStack.Monetization.Common.AdRevenueEventArgs>

// System.EventHandler`1<AppodealStack.Monetization.Common.BannerLoadedEventArgs>

// System.EventHandler`1<AppodealStack.Monetization.Common.BannerLoadedEventArgs>

// System.EventHandler`1<AppodealStack.Monetization.Common.InAppPurchaseEventArgs>

// System.EventHandler`1<AppodealStack.Monetization.Common.InAppPurchaseEventArgs>

// System.EventHandler`1<AppodealStack.Monetization.Common.RewardedVideoClosedEventArgs>

// System.EventHandler`1<AppodealStack.Monetization.Common.RewardedVideoClosedEventArgs>

// System.EventHandler`1<AppodealStack.Monetization.Common.RewardedVideoFinishedEventArgs>

// System.EventHandler`1<AppodealStack.Monetization.Common.RewardedVideoFinishedEventArgs>

// System.EventHandler`1<AppodealStack.Monetization.Common.SdkInitializedEventArgs>

// System.EventHandler`1<AppodealStack.Monetization.Common.SdkInitializedEventArgs>

// System.EventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.EventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.EventHandler

// System.EventHandler
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.EventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(System.Object,TEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mB8EBD394BCA1574F4FE9C1C05A4F246099C4DA48_gshared_inline (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577* __this, RuntimeObject* ___0_sender, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_e, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m77FC9915EB7B4333DA3B53F4678F0CEFF698F022_gshared (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;

// System.String UnityEngine.JsonUtility::ToJson(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m53A1FEE0D388CF3A629E093C04B5E1A6D5463B53 (RuntimeObject* ___0_obj, bool ___1_prettyPrint, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21 (const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// AppodealStack.Monetization.Common.IAdRevenueListener AppodealStack.Monetization.Common.AdRevenueProxyListener::get_Listener()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AdRevenueProxyListener_get_Listener_m5D57DCD7A3FBC688A80E4351467E800C86C8970E_inline (AdRevenueProxyListener_t30DC0858DAEB497DB660FC8E23E33FAE95D96BD8* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Common.AdRevenueEventArgs::.ctor(AppodealStack.Monetization.Common.AppodealAdRevenue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdRevenueEventArgs__ctor_m64C0B7CEEC6D276851EFCBF10D1513A2A6002C36 (AdRevenueEventArgs_t5197C274C4238877BFC0EB90043E3598CB867786* __this, AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14* ___0_ad, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<AppodealStack.Monetization.Common.AdRevenueEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m12F3786E087ECB3C4EBF1FB48C3BFBA94041D611_inline (EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* __this, RuntimeObject* ___0_sender, AdRevenueEventArgs_t5197C274C4238877BFC0EB90043E3598CB867786* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*, RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))EventHandler_1_Invoke_mB8EBD394BCA1574F4FE9C1C05A4F246099C4DA48_gshared_inline)((EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*)__this, ___0_sender, (Il2CppFullySharedGenericAny)___1_e, method);
}
// AppodealStack.Monetization.Common.IBannerAdListener AppodealStack.Monetization.Common.BannerAdProxyListener::get_Listener()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BannerAdProxyListener_get_Listener_m89D183EE9C48705AF7228B88A91C9C739110B116_inline (BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Common.BannerLoadedEventArgs::.ctor(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerLoadedEventArgs__ctor_mA883853BCC0CA05CF0393567B79A613A0083E15D (BannerLoadedEventArgs_t17EE25930EFBF4B368D44C0F357AC2B45C212CE7* __this, int32_t ___0_height, bool ___1_isPrecache, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<AppodealStack.Monetization.Common.BannerLoadedEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m4AF34759DA5947F3AD3B0D8C75DE0C1265ABA6CE_inline (EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* __this, RuntimeObject* ___0_sender, BannerLoadedEventArgs_t17EE25930EFBF4B368D44C0F357AC2B45C212CE7* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*, RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))EventHandler_1_Invoke_mB8EBD394BCA1574F4FE9C1C05A4F246099C4DA48_gshared_inline)((EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*)__this, ___0_sender, (Il2CppFullySharedGenericAny)___1_e, method);
}
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method) ;
// AppodealStack.Monetization.Common.IInAppPurchaseValidationListener AppodealStack.Monetization.Common.InAppPurchaseValidationProxyListener::get_Listener()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InAppPurchaseValidationProxyListener_get_Listener_mB34D728D3DDA2DCD6FC45BDD484CFB32AF79DAD9_inline (InAppPurchaseValidationProxyListener_tEF4A4E377F15B2E799679C630E558BCEA46D3685* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Common.InAppPurchaseEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppPurchaseEventArgs__ctor_mF7790920A563659DF2EC8379247DE31DE077F970 (InAppPurchaseEventArgs_t78C43610CE4ACAA37E1588542415921FCE470C73* __this, String_t* ___0_json, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<AppodealStack.Monetization.Common.InAppPurchaseEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m64FD3E3EF117F559A56D7A2541DFC7FD072231DB_inline (EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* __this, RuntimeObject* ___0_sender, InAppPurchaseEventArgs_t78C43610CE4ACAA37E1588542415921FCE470C73* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*, RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))EventHandler_1_Invoke_mB8EBD394BCA1574F4FE9C1C05A4F246099C4DA48_gshared_inline)((EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*)__this, ___0_sender, (Il2CppFullySharedGenericAny)___1_e, method);
}
// AppodealStack.Monetization.Common.IInterstitialAdListener AppodealStack.Monetization.Common.InterstitialAdProxyListener::get_Listener()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InterstitialAdProxyListener_get_Listener_m63ED68762B7BDD43BF1F8E07F732CEAA77F2D47C_inline (InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Common.AdLoadedEventArgs::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoadedEventArgs__ctor_m3C2DB4FF366EA2675A8BB77B5FF94A9000B5CC83 (AdLoadedEventArgs_t2F7259B880EABD1911936EA4AFD0D6C50D1330FA* __this, bool ___0_isPrecache, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<AppodealStack.Monetization.Common.AdLoadedEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m0EC2B95824927C7CB96757DA573935AD2EFA990A_inline (EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* __this, RuntimeObject* ___0_sender, AdLoadedEventArgs_t2F7259B880EABD1911936EA4AFD0D6C50D1330FA* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*, RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))EventHandler_1_Invoke_mB8EBD394BCA1574F4FE9C1C05A4F246099C4DA48_gshared_inline)((EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*)__this, ___0_sender, (Il2CppFullySharedGenericAny)___1_e, method);
}
// AppodealStack.Monetization.Common.IMrecAdListener AppodealStack.Monetization.Common.MrecAdProxyListener::get_Listener()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MrecAdProxyListener_get_Listener_m64D1D371B31EA317F93AA8295549CD4911BCC87D_inline (MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682* __this, const RuntimeMethod* method) ;
// AppodealStack.Monetization.Common.IRewardedVideoAdListener AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::get_Listener()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RewardedVideoAdProxyListener_get_Listener_mD15BBB1273334A3712B33EEB5F26AAC3211F9254_inline (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Common.RewardedVideoClosedEventArgs::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoClosedEventArgs__ctor_m5DFF5482567229B0F177F078F3087B8725762FF3 (RewardedVideoClosedEventArgs_t4FC78F06AC8480C706595468368B1105D2216590* __this, bool ___0_finished, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<AppodealStack.Monetization.Common.RewardedVideoClosedEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m2B9EE3792EED23A2ED4FDEBFAB575C327C8E8213_inline (EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* __this, RuntimeObject* ___0_sender, RewardedVideoClosedEventArgs_t4FC78F06AC8480C706595468368B1105D2216590* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*, RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))EventHandler_1_Invoke_mB8EBD394BCA1574F4FE9C1C05A4F246099C4DA48_gshared_inline)((EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*)__this, ___0_sender, (Il2CppFullySharedGenericAny)___1_e, method);
}
// System.Void AppodealStack.Monetization.Common.RewardedVideoFinishedEventArgs::.ctor(System.Double,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoFinishedEventArgs__ctor_m03555EA26D5A81759F9516454925EA76D0AB61E9 (RewardedVideoFinishedEventArgs_tC53B8C04520C77DA8044F5687E99CB57DF45135C* __this, double ___0_amount, String_t* ___1_currency, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<AppodealStack.Monetization.Common.RewardedVideoFinishedEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m14395E51DB80C22CBACB91FE5CDC48EC09895040_inline (EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* __this, RuntimeObject* ___0_sender, RewardedVideoFinishedEventArgs_tC53B8C04520C77DA8044F5687E99CB57DF45135C* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*, RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))EventHandler_1_Invoke_mB8EBD394BCA1574F4FE9C1C05A4F246099C4DA48_gshared_inline)((EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*)__this, ___0_sender, (Il2CppFullySharedGenericAny)___1_e, method);
}
// AppodealStack.Monetization.Common.IAppodealInitializationListener AppodealStack.Monetization.Common.SdkProxyListener::get_InitListener()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SdkProxyListener_get_InitListener_m51AA77D0867E2ED0EB505B67864D935E1CD1D1C5_inline (SdkProxyListener_t8B86FCD3D4F7D42A0DFF581EF5AF9B15F656D388* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Common.SdkInitializedEventArgs::.ctor(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SdkInitializedEventArgs__ctor_mF9B530F272105C78D11C9102B85803DF9E709D6C (SdkInitializedEventArgs_t78A87E4997F422DFF4923A44CDCAE8693AA21005* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_errors, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<AppodealStack.Monetization.Common.SdkInitializedEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m9E27442C9F90879AE025D20DE8242A6F35DCCB1A_inline (EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* __this, RuntimeObject* ___0_sender, SdkInitializedEventArgs_t78A87E4997F422DFF4923A44CDCAE8693AA21005* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*, RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))EventHandler_1_Invoke_mB8EBD394BCA1574F4FE9C1C05A4F246099C4DA48_gshared_inline)((EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*)__this, ___0_sender, (Il2CppFullySharedGenericAny)___1_e, method);
}
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Sdk::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sdk__ctor_m26851BF388DF28A177FDC20EE9E48F7C98A607F1 (Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Sdk::InitializeCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sdk_InitializeCallbacks_mD4D31C741992483DA1126C0F1E9E619FE724AD51 (Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Common.SdkProxyListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SdkProxyListener__ctor_m59BE89EBF2D9515DD89B0BB1638AB7BCEE38B658 (SdkProxyListener_t8B86FCD3D4F7D42A0DFF581EF5AF9B15F656D388* __this, const RuntimeMethod* method) ;
// AppodealStack.Monetization.Common.ISdkProxyListener AppodealStack.Monetization.Common.AppodealCallbacks/Sdk::get_SdkEventsImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Sdk_get_SdkEventsImpl_m0087BF99F719EE6D7D1CA69AD18748175CE97123 (Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<AppodealStack.Monetization.Common.SdkInitializedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mA69FA904AF151EE3FC7A711CCB2E76EB34219FFC (EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m77FC9915EB7B4333DA3B53F4678F0CEFF698F022_gshared)((EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*)__this, ___0_object, ___1_method, method);
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/AdRevenue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdRevenue__ctor_mE953106E1EE76640838E095FD5EA35F740ADC284 (AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/AdRevenue::InitializeCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdRevenue_InitializeCallbacks_mAD40F269F18DFB3F795ACB062161166ACDF57324 (AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Common.AdRevenueProxyListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdRevenueProxyListener__ctor_m7E92F82090CA08DE1C74EE7886AFD69AF32E83E9 (AdRevenueProxyListener_t30DC0858DAEB497DB660FC8E23E33FAE95D96BD8* __this, const RuntimeMethod* method) ;
// AppodealStack.Monetization.Common.IAdRevenueProxyListener AppodealStack.Monetization.Common.AppodealCallbacks/AdRevenue::get_AdRevenueEventsImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AdRevenue_get_AdRevenueEventsImpl_m6F986C339AF944BBA73CA81FA7F3D5008618262B (AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<AppodealStack.Monetization.Common.AdRevenueEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mD1C691C56DF522A687302BA9B8A6FFE1FC3BF1CE (EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m77FC9915EB7B4333DA3B53F4678F0CEFF698F022_gshared)((EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*)__this, ___0_object, ___1_method, method);
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/InAppPurchase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppPurchase__ctor_mA933AC23CBCCF50BA2AD7D5B4F8823ACB9485EB2 (InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/InAppPurchase::InitializeCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppPurchase_InitializeCallbacks_m0342EAC32414D8BFCF727F33D51CD43361349343 (InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Common.InAppPurchaseValidationProxyListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppPurchaseValidationProxyListener__ctor_mD005B823FCC966869F74A7787511E2D5C9331A24 (InAppPurchaseValidationProxyListener_tEF4A4E377F15B2E799679C630E558BCEA46D3685* __this, const RuntimeMethod* method) ;
// AppodealStack.Monetization.Common.IInAppPurchaseValidationProxyListener AppodealStack.Monetization.Common.AppodealCallbacks/InAppPurchase::get_PurchaseEventsImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InAppPurchase_get_PurchaseEventsImpl_m2D2762B5118F9D3DDE336D24852A307DDCE33E0E (InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<AppodealStack.Monetization.Common.InAppPurchaseEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mC9C057645F081D90D9D8AB68A28A5E28144A131E (EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m77FC9915EB7B4333DA3B53F4678F0CEFF698F022_gshared)((EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*)__this, ___0_object, ___1_method, method);
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mrec__ctor_mAF44270F15AFA83E91A9D800C45199E2890321DF (Mrec_t843799EFC43FACAD42BCB139872F609137368D0A* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::InitializeCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mrec_InitializeCallbacks_m663CBFF8B3CF7FD9CD7064373B3A06183DEC3E31 (Mrec_t843799EFC43FACAD42BCB139872F609137368D0A* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Common.MrecAdProxyListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MrecAdProxyListener__ctor_mC38BE349BE97B0C0D5A277B7DD6957FD1D14246A (MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682* __this, const RuntimeMethod* method) ;
// AppodealStack.Monetization.Common.IMrecAdProxyListener AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::get_MrecAdEventsImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Mrec_get_MrecAdEventsImpl_mE5687CD4C9AA551E067880A7916AFCC54F1CA3E6 (Mrec_t843799EFC43FACAD42BCB139872F609137368D0A* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<AppodealStack.Monetization.Common.AdLoadedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m52FC96CD3492CAAFE02D597B18D7702F14DDE1F0 (EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m77FC9915EB7B4333DA3B53F4678F0CEFF698F022_gshared)((EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*)__this, ___0_object, ___1_method, method);
}
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Banner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner__ctor_mFB66AF5BD263764360FE189D2E280C545646087C (Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Banner::InitializeCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_InitializeCallbacks_m81D466DE94BADA986B6CDAB126A61E9F38790245 (Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Common.BannerAdProxyListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdProxyListener__ctor_mB0ADA12C9F0542F278BCEA541492177025A3E333 (BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4* __this, const RuntimeMethod* method) ;
// AppodealStack.Monetization.Common.IBannerAdProxyListener AppodealStack.Monetization.Common.AppodealCallbacks/Banner::get_BannerAdEventsImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Banner_get_BannerAdEventsImpl_m66B3D26B5CD222FD6D128BE0B62992F34F2502C3 (Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<AppodealStack.Monetization.Common.BannerLoadedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m765C6CE26CEF179AAA54C1CBB6D474F9F5BDDDF1 (EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m77FC9915EB7B4333DA3B53F4678F0CEFF698F022_gshared)((EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*)__this, ___0_object, ___1_method, method);
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial__ctor_mE775BFC4FCCDC32B7A775BC7553DE73F457D0BB7 (Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::InitializeCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_InitializeCallbacks_m418BDA6594264EF1810A66709708CA0BF0A87E24 (Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Common.InterstitialAdProxyListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdProxyListener__ctor_mE16A54AB68A01BFA47C14671850791206ACBB5B5 (InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4* __this, const RuntimeMethod* method) ;
// AppodealStack.Monetization.Common.IInterstitialAdProxyListener AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::get_InterstitialAdEventsImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Interstitial_get_InterstitialAdEventsImpl_m1C5DC5C1B51C5A3BC9108ACD9F7174BA3853E0E0 (Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideo__ctor_m406FBC2CAFD3BD7106CF344813BC335C9227D321 (RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::InitializeCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideo_InitializeCallbacks_m3E382A3922A3430A6DDA97B78EF98826C29A4368 (RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdProxyListener__ctor_m2D749B5DEC64BC448A8B851FDF2402CA76EAA4CB (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, const RuntimeMethod* method) ;
// AppodealStack.Monetization.Common.IRewardedVideoAdProxyListener AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::get_RewardedVideoAdEventsImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewardedVideo_get_RewardedVideoAdEventsImpl_m35016F1E056CDA1F8640AF48ADCA8A8BF97EDD73 (RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<AppodealStack.Monetization.Common.RewardedVideoClosedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mCA0B440B14E603867D8711FC7CC1B56A897A49D4 (EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m77FC9915EB7B4333DA3B53F4678F0CEFF698F022_gshared)((EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*)__this, ___0_object, ___1_method, method);
}
// System.Void System.EventHandler`1<AppodealStack.Monetization.Common.RewardedVideoFinishedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m1EBA632CB44E2100B87565A6B901DF5B15A5850A (EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m77FC9915EB7B4333DA3B53F4678F0CEFF698F022_gshared)((EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*)__this, ___0_object, ___1_method, method);
}
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
// System.String AppodealStack.Monetization.Common.AppodealAdRevenue::ToJsonString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppodealAdRevenue_ToJsonString_m729F4B29BAB34425D5AAED39D6A3C1046CEE57EE (AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14* __this, bool ___0_isPretty, const RuntimeMethod* method) 
{
	{
		// public string ToJsonString(bool isPretty = false) => UnityEngine.JsonUtility.ToJson(this, isPretty);
		bool L_0 = ___0_isPretty;
		String_t* L_1;
		L_1 = JsonUtility_ToJson_m53A1FEE0D388CF3A629E093C04B5E1A6D5463B53(__this, L_0, NULL);
		return L_1;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealAdRevenue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealAdRevenue__ctor_m0D2A7BFD59BBE488C86F87AD2B99655A1FB503C3 (AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String AppodealStack.Monetization.Common.AppodealReward::ToJsonString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppodealReward_ToJsonString_mD5BCEB6B9BD7C81DE7885FEED586344EC1011A22 (AppodealReward_t073F58485E43B47D6DD3E730BA1ED35CA851B866* __this, bool ___0_isPretty, const RuntimeMethod* method) 
{
	{
		// public string ToJsonString(bool isPretty = false) => UnityEngine.JsonUtility.ToJson(this, isPretty);
		bool L_0 = ___0_isPretty;
		String_t* L_1;
		L_1 = JsonUtility_ToJson_m53A1FEE0D388CF3A629E093C04B5E1A6D5463B53(__this, L_0, NULL);
		return L_1;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealReward::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealReward__ctor_m74BFBCCD60D7E6CB108FA5FE0474F271835CDE1B (AppodealReward_t073F58485E43B47D6DD3E730BA1ED35CA851B866* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.String AppodealStack.Monetization.Common.AppodealVersions::GetPluginVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppodealVersions_GetPluginVersion_mF4EC045AA29117CE065D7CC52C5D72D2ACB66F8D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral863E8E1658AFF4C69A1445FEA34DD625F52A7BFF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AppodealPluginVersion;
		return _stringLiteral863E8E1658AFF4C69A1445FEA34DD625F52A7BFF;
	}
}
// System.String AppodealStack.Monetization.Common.AppodealVersions::GetUnityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppodealVersions_GetUnityVersion_mF67769796B6BDA9DB0E14E3A6A86D5179C3C50AF (const RuntimeMethod* method) 
{
	{
		// return Application.unityVersion;
		String_t* L_0;
		L_0 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		return L_0;
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
// AppodealStack.Monetization.Common.IAdRevenueListener AppodealStack.Monetization.Common.AdRevenueProxyListener::get_Listener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AdRevenueProxyListener_get_Listener_m5D57DCD7A3FBC688A80E4351467E800C86C8970E (AdRevenueProxyListener_t30DC0858DAEB497DB660FC8E23E33FAE95D96BD8* __this, const RuntimeMethod* method) 
{
	{
		// public IAdRevenueListener Listener { get; set; }
		RuntimeObject* L_0 = __this->___U3CListenerU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void AppodealStack.Monetization.Common.AdRevenueProxyListener::set_Listener(AppodealStack.Monetization.Common.IAdRevenueListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdRevenueProxyListener_set_Listener_m80F9978CB6FAA92AFAC719986E4AF1B041AFA48D (AdRevenueProxyListener_t30DC0858DAEB497DB660FC8E23E33FAE95D96BD8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public IAdRevenueListener Listener { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CListenerU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CListenerU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AdRevenueProxyListener::add_OnReceived(System.EventHandler`1<AppodealStack.Monetization.Common.AdRevenueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdRevenueProxyListener_add_OnReceived_mFCC4FA8788CC12E30C03AC003367FB3C90906C59 (AdRevenueProxyListener_t30DC0858DAEB497DB660FC8E23E33FAE95D96BD8* __this, EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* V_0 = NULL;
	EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* V_1 = NULL;
	EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* V_2 = NULL;
	{
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_0 = __this->___OnReceived_1;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_2 = V_1;
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308*)Castclass((RuntimeObject*)L_4, EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308_il2cpp_TypeInfo_var));
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308** L_5 = (&__this->___OnReceived_1);
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_6 = V_2;
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_7 = V_1;
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_9 = V_0;
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308*)L_9) == ((RuntimeObject*)(EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AdRevenueProxyListener::remove_OnReceived(System.EventHandler`1<AppodealStack.Monetization.Common.AdRevenueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdRevenueProxyListener_remove_OnReceived_m8EEDFCF5F417642DA7D823FA037310600398BDAE (AdRevenueProxyListener_t30DC0858DAEB497DB660FC8E23E33FAE95D96BD8* __this, EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* V_0 = NULL;
	EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* V_1 = NULL;
	EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* V_2 = NULL;
	{
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_0 = __this->___OnReceived_1;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_2 = V_1;
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308*)Castclass((RuntimeObject*)L_4, EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308_il2cpp_TypeInfo_var));
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308** L_5 = (&__this->___OnReceived_1);
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_6 = V_2;
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_7 = V_1;
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_9 = V_0;
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308*)L_9) == ((RuntimeObject*)(EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AdRevenueProxyListener::OnAdRevenueReceived(AppodealStack.Monetization.Common.AppodealAdRevenue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdRevenueProxyListener_OnAdRevenueReceived_m7F99FA2377E72CEB7051701D4378EF6EEA9AE540 (AdRevenueProxyListener_t30DC0858DAEB497DB660FC8E23E33FAE95D96BD8* __this, AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14* ___0_ad, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdRevenueEventArgs_t5197C274C4238877BFC0EB90043E3598CB867786_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAdRevenueListener_t4EA61CE68DC2AA7CABF8DFE002B359888AFFA2A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* G_B5_0 = NULL;
	EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* G_B4_0 = NULL;
	{
		// Listener?.OnAdRevenueReceived(ad);
		RuntimeObject* L_0;
		L_0 = AdRevenueProxyListener_get_Listener_m5D57DCD7A3FBC688A80E4351467E800C86C8970E_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14* L_2 = ___0_ad;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14* >::Invoke(0 /* System.Void AppodealStack.Monetization.Common.IAdRevenueListener::OnAdRevenueReceived(AppodealStack.Monetization.Common.AppodealAdRevenue) */, IAdRevenueListener_t4EA61CE68DC2AA7CABF8DFE002B359888AFFA2A7_il2cpp_TypeInfo_var, G_B2_0, L_2);
	}

IL_0012:
	{
		// OnReceived?.Invoke(this, new AdRevenueEventArgs(ad));
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_3 = __this->___OnReceived_1;
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_4 = L_3;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14* L_5 = ___0_ad;
		AdRevenueEventArgs_t5197C274C4238877BFC0EB90043E3598CB867786* L_6 = (AdRevenueEventArgs_t5197C274C4238877BFC0EB90043E3598CB867786*)il2cpp_codegen_object_new(AdRevenueEventArgs_t5197C274C4238877BFC0EB90043E3598CB867786_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		AdRevenueEventArgs__ctor_m64C0B7CEEC6D276851EFCBF10D1513A2A6002C36(L_6, L_5, NULL);
		NullCheck(G_B5_0);
		EventHandler_1_Invoke_m12F3786E087ECB3C4EBF1FB48C3BFBA94041D611_inline(G_B5_0, __this, L_6, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AdRevenueProxyListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdRevenueProxyListener__ctor_m7E92F82090CA08DE1C74EE7886AFD69AF32E83E9 (AdRevenueProxyListener_t30DC0858DAEB497DB660FC8E23E33FAE95D96BD8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// AppodealStack.Monetization.Common.IBannerAdListener AppodealStack.Monetization.Common.BannerAdProxyListener::get_Listener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BannerAdProxyListener_get_Listener_m89D183EE9C48705AF7228B88A91C9C739110B116 (BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4* __this, const RuntimeMethod* method) 
{
	{
		// public IBannerAdListener Listener { get; set; }
		RuntimeObject* L_0 = __this->___U3CListenerU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void AppodealStack.Monetization.Common.BannerAdProxyListener::set_Listener(AppodealStack.Monetization.Common.IBannerAdListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdProxyListener_set_Listener_mF1D415D5EC71B61CB2F13396A3E446DED3DBED13 (BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public IBannerAdListener Listener { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CListenerU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CListenerU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.BannerAdProxyListener::add_OnLoaded(System.EventHandler`1<AppodealStack.Monetization.Common.BannerLoadedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdProxyListener_add_OnLoaded_m502C2044412DCB6D44A6F5C1EF4B4F50F80A655F (BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4* __this, EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* V_0 = NULL;
	EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* V_1 = NULL;
	EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* V_2 = NULL;
	{
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_0 = __this->___OnLoaded_1;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_2 = V_1;
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD*)Castclass((RuntimeObject*)L_4, EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD_il2cpp_TypeInfo_var));
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD** L_5 = (&__this->___OnLoaded_1);
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_6 = V_2;
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_7 = V_1;
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_9 = V_0;
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD*)L_9) == ((RuntimeObject*)(EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.BannerAdProxyListener::remove_OnLoaded(System.EventHandler`1<AppodealStack.Monetization.Common.BannerLoadedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdProxyListener_remove_OnLoaded_m7E1B7BC043FE1D55C83630D223D56B6297174678 (BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4* __this, EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* V_0 = NULL;
	EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* V_1 = NULL;
	EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* V_2 = NULL;
	{
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_0 = __this->___OnLoaded_1;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_2 = V_1;
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD*)Castclass((RuntimeObject*)L_4, EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD_il2cpp_TypeInfo_var));
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD** L_5 = (&__this->___OnLoaded_1);
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_6 = V_2;
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_7 = V_1;
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_9 = V_0;
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD*)L_9) == ((RuntimeObject*)(EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.BannerAdProxyListener::add_OnFailedToLoad(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdProxyListener_add_OnFailedToLoad_m82E5662F927058CE5DA0D20062388D395637948D (BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnFailedToLoad_2;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnFailedToLoad_2);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.BannerAdProxyListener::remove_OnFailedToLoad(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdProxyListener_remove_OnFailedToLoad_mF782BA3C1CB654CFA25AEF9FD781754A71929442 (BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnFailedToLoad_2;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnFailedToLoad_2);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.BannerAdProxyListener::add_OnShown(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdProxyListener_add_OnShown_m0C2BFE31FBCB55AD64B851342B080C5C5A323D63 (BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnShown_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnShown_3);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.BannerAdProxyListener::remove_OnShown(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdProxyListener_remove_OnShown_mBA28F4C9660053AA1A73A3BBADB93B7304135A74 (BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnShown_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnShown_3);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.BannerAdProxyListener::add_OnShowFailed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdProxyListener_add_OnShowFailed_mF486395048A647BCD66C0AA64082847F89426641 (BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnShowFailed_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnShowFailed_4);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.BannerAdProxyListener::remove_OnShowFailed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdProxyListener_remove_OnShowFailed_mF2C352A34C5BB7EBFBA776B7213A1B1556CEB801 (BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnShowFailed_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnShowFailed_4);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.BannerAdProxyListener::add_OnClicked(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdProxyListener_add_OnClicked_m714E9B83BAE67C5351651503FED2DDACAE7C54CF (BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnClicked_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnClicked_5);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.BannerAdProxyListener::remove_OnClicked(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdProxyListener_remove_OnClicked_mD6061EE4CB0A880FD860ECD7B7CBEAB9219403AA (BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnClicked_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnClicked_5);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.BannerAdProxyListener::add_OnExpired(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdProxyListener_add_OnExpired_m0B5CDB3F9119EB2BF9475AC2F8EAF69659BE7A5E (BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnExpired_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnExpired_6);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.BannerAdProxyListener::remove_OnExpired(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdProxyListener_remove_OnExpired_mAFAB2E57B3EECBCF55A1DAF6497A5540CFA2A094 (BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnExpired_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnExpired_6);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.BannerAdProxyListener::OnBannerLoaded(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdProxyListener_OnBannerLoaded_m7D3AF086A722BFE89F9EE2AB80448A89CEC2770F (BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4* __this, int32_t ___0_height, bool ___1_isPrecache, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerLoadedEventArgs_t17EE25930EFBF4B368D44C0F357AC2B45C212CE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerAdListener_tDFE091DE412D0D00B1B46E1E599D2649812A2FD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* G_B5_0 = NULL;
	EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* G_B4_0 = NULL;
	{
		// Listener?.OnBannerLoaded(height, isPrecache);
		RuntimeObject* L_0;
		L_0 = BannerAdProxyListener_get_Listener_m89D183EE9C48705AF7228B88A91C9C739110B116_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		int32_t L_2 = ___0_height;
		bool L_3 = ___1_isPrecache;
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< int32_t, bool >::Invoke(0 /* System.Void AppodealStack.Monetization.Common.IBannerAdListener::OnBannerLoaded(System.Int32,System.Boolean) */, IBannerAdListener_tDFE091DE412D0D00B1B46E1E599D2649812A2FD8_il2cpp_TypeInfo_var, G_B2_0, L_2, L_3);
	}

IL_0013:
	{
		// OnLoaded?.Invoke(this, new BannerLoadedEventArgs(height, isPrecache));
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_4 = __this->___OnLoaded_1;
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_5 = L_4;
		G_B4_0 = L_5;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_6 = ___0_height;
		bool L_7 = ___1_isPrecache;
		BannerLoadedEventArgs_t17EE25930EFBF4B368D44C0F357AC2B45C212CE7* L_8 = (BannerLoadedEventArgs_t17EE25930EFBF4B368D44C0F357AC2B45C212CE7*)il2cpp_codegen_object_new(BannerLoadedEventArgs_t17EE25930EFBF4B368D44C0F357AC2B45C212CE7_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		BannerLoadedEventArgs__ctor_mA883853BCC0CA05CF0393567B79A613A0083E15D(L_8, L_6, L_7, NULL);
		NullCheck(G_B5_0);
		EventHandler_1_Invoke_m4AF34759DA5947F3AD3B0D8C75DE0C1265ABA6CE_inline(G_B5_0, __this, L_8, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.BannerAdProxyListener::OnBannerFailedToLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdProxyListener_OnBannerFailedToLoad_m0D2867D396B21DD4CF33C61F28F3F007D5015114 (BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerAdListener_tDFE091DE412D0D00B1B46E1E599D2649812A2FD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B5_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B4_0 = NULL;
	{
		// Listener?.OnBannerFailedToLoad();
		RuntimeObject* L_0;
		L_0 = BannerAdProxyListener_get_Listener_m89D183EE9C48705AF7228B88A91C9C739110B116_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void AppodealStack.Monetization.Common.IBannerAdListener::OnBannerFailedToLoad() */, IBannerAdListener_tDFE091DE412D0D00B1B46E1E599D2649812A2FD8_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0011:
	{
		// OnFailedToLoad?.Invoke(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = __this->___OnFailedToLoad_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_4 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(G_B5_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B5_0, __this, L_4, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.BannerAdProxyListener::OnBannerShown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdProxyListener_OnBannerShown_m8C8EE12F670DF1B41A1F3A8B5A7A6AF7127F0BD1 (BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerAdListener_tDFE091DE412D0D00B1B46E1E599D2649812A2FD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B5_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B4_0 = NULL;
	{
		// Listener?.OnBannerShown();
		RuntimeObject* L_0;
		L_0 = BannerAdProxyListener_get_Listener_m89D183EE9C48705AF7228B88A91C9C739110B116_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void AppodealStack.Monetization.Common.IBannerAdListener::OnBannerShown() */, IBannerAdListener_tDFE091DE412D0D00B1B46E1E599D2649812A2FD8_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0011:
	{
		// OnShown?.Invoke(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = __this->___OnShown_3;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_4 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(G_B5_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B5_0, __this, L_4, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.BannerAdProxyListener::OnBannerShowFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdProxyListener_OnBannerShowFailed_mA747032C9400D7AF33A049560F0AD6F3837F5E87 (BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerAdListener_tDFE091DE412D0D00B1B46E1E599D2649812A2FD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B5_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B4_0 = NULL;
	{
		// Listener?.OnBannerShowFailed();
		RuntimeObject* L_0;
		L_0 = BannerAdProxyListener_get_Listener_m89D183EE9C48705AF7228B88A91C9C739110B116_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void AppodealStack.Monetization.Common.IBannerAdListener::OnBannerShowFailed() */, IBannerAdListener_tDFE091DE412D0D00B1B46E1E599D2649812A2FD8_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0011:
	{
		// OnShowFailed?.Invoke(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = __this->___OnShowFailed_4;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_4 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(G_B5_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B5_0, __this, L_4, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.BannerAdProxyListener::OnBannerClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdProxyListener_OnBannerClicked_mA9E1320FB9FFF91C3256D5578815AEDAA81CE32C (BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerAdListener_tDFE091DE412D0D00B1B46E1E599D2649812A2FD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B5_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B4_0 = NULL;
	{
		// Listener?.OnBannerClicked();
		RuntimeObject* L_0;
		L_0 = BannerAdProxyListener_get_Listener_m89D183EE9C48705AF7228B88A91C9C739110B116_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void AppodealStack.Monetization.Common.IBannerAdListener::OnBannerClicked() */, IBannerAdListener_tDFE091DE412D0D00B1B46E1E599D2649812A2FD8_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0011:
	{
		// OnClicked?.Invoke(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = __this->___OnClicked_5;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_4 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(G_B5_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B5_0, __this, L_4, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.BannerAdProxyListener::OnBannerExpired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdProxyListener_OnBannerExpired_m1BEAA61462A71DBC114DD5F9B0BCFF49ADD0EE2B (BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerAdListener_tDFE091DE412D0D00B1B46E1E599D2649812A2FD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B5_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B4_0 = NULL;
	{
		// Listener?.OnBannerExpired();
		RuntimeObject* L_0;
		L_0 = BannerAdProxyListener_get_Listener_m89D183EE9C48705AF7228B88A91C9C739110B116_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(5 /* System.Void AppodealStack.Monetization.Common.IBannerAdListener::OnBannerExpired() */, IBannerAdListener_tDFE091DE412D0D00B1B46E1E599D2649812A2FD8_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0011:
	{
		// OnExpired?.Invoke(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = __this->___OnExpired_6;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_4 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(G_B5_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B5_0, __this, L_4, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.BannerAdProxyListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdProxyListener__ctor_mB0ADA12C9F0542F278BCEA541492177025A3E333 (BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// AppodealStack.Monetization.Common.IInAppPurchaseValidationListener AppodealStack.Monetization.Common.InAppPurchaseValidationProxyListener::get_Listener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InAppPurchaseValidationProxyListener_get_Listener_mB34D728D3DDA2DCD6FC45BDD484CFB32AF79DAD9 (InAppPurchaseValidationProxyListener_tEF4A4E377F15B2E799679C630E558BCEA46D3685* __this, const RuntimeMethod* method) 
{
	{
		// public IInAppPurchaseValidationListener Listener { get; set; }
		RuntimeObject* L_0 = __this->___U3CListenerU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void AppodealStack.Monetization.Common.InAppPurchaseValidationProxyListener::set_Listener(AppodealStack.Monetization.Common.IInAppPurchaseValidationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppPurchaseValidationProxyListener_set_Listener_m6866501DEC89F247D83CEAB0A89572EB02AA9F3F (InAppPurchaseValidationProxyListener_tEF4A4E377F15B2E799679C630E558BCEA46D3685* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public IInAppPurchaseValidationListener Listener { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CListenerU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CListenerU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.InAppPurchaseValidationProxyListener::add_OnValidationSucceeded(System.EventHandler`1<AppodealStack.Monetization.Common.InAppPurchaseEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppPurchaseValidationProxyListener_add_OnValidationSucceeded_m0B1ADFA7FAF703CFD74057D0E59E327FCBBC88EB (InAppPurchaseValidationProxyListener_tEF4A4E377F15B2E799679C630E558BCEA46D3685* __this, EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* V_0 = NULL;
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* V_1 = NULL;
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* V_2 = NULL;
	{
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_0 = __this->___OnValidationSucceeded_1;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_2 = V_1;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*)Castclass((RuntimeObject*)L_4, EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6_il2cpp_TypeInfo_var));
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6** L_5 = (&__this->___OnValidationSucceeded_1);
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_6 = V_2;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_7 = V_1;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_9 = V_0;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*)L_9) == ((RuntimeObject*)(EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.InAppPurchaseValidationProxyListener::remove_OnValidationSucceeded(System.EventHandler`1<AppodealStack.Monetization.Common.InAppPurchaseEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppPurchaseValidationProxyListener_remove_OnValidationSucceeded_m5B9963B1EBF2273864FAD4D16BB0F7FB709EAEB5 (InAppPurchaseValidationProxyListener_tEF4A4E377F15B2E799679C630E558BCEA46D3685* __this, EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* V_0 = NULL;
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* V_1 = NULL;
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* V_2 = NULL;
	{
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_0 = __this->___OnValidationSucceeded_1;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_2 = V_1;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*)Castclass((RuntimeObject*)L_4, EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6_il2cpp_TypeInfo_var));
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6** L_5 = (&__this->___OnValidationSucceeded_1);
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_6 = V_2;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_7 = V_1;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_9 = V_0;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*)L_9) == ((RuntimeObject*)(EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.InAppPurchaseValidationProxyListener::add_OnValidationFailed(System.EventHandler`1<AppodealStack.Monetization.Common.InAppPurchaseEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppPurchaseValidationProxyListener_add_OnValidationFailed_m61973D652B0487C24E5E70BEF8E3A3033A726079 (InAppPurchaseValidationProxyListener_tEF4A4E377F15B2E799679C630E558BCEA46D3685* __this, EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* V_0 = NULL;
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* V_1 = NULL;
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* V_2 = NULL;
	{
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_0 = __this->___OnValidationFailed_2;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_2 = V_1;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*)Castclass((RuntimeObject*)L_4, EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6_il2cpp_TypeInfo_var));
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6** L_5 = (&__this->___OnValidationFailed_2);
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_6 = V_2;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_7 = V_1;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_9 = V_0;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*)L_9) == ((RuntimeObject*)(EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.InAppPurchaseValidationProxyListener::remove_OnValidationFailed(System.EventHandler`1<AppodealStack.Monetization.Common.InAppPurchaseEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppPurchaseValidationProxyListener_remove_OnValidationFailed_m2E78BF74E532A28D55B522B6FCED9466D11BFD89 (InAppPurchaseValidationProxyListener_tEF4A4E377F15B2E799679C630E558BCEA46D3685* __this, EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* V_0 = NULL;
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* V_1 = NULL;
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* V_2 = NULL;
	{
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_0 = __this->___OnValidationFailed_2;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_2 = V_1;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*)Castclass((RuntimeObject*)L_4, EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6_il2cpp_TypeInfo_var));
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6** L_5 = (&__this->___OnValidationFailed_2);
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_6 = V_2;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_7 = V_1;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_9 = V_0;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*)L_9) == ((RuntimeObject*)(EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.InAppPurchaseValidationProxyListener::OnInAppPurchaseValidationSucceeded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppPurchaseValidationProxyListener_OnInAppPurchaseValidationSucceeded_mF7F36F5A50A612CDEE5E4DF89A31B2AD96D72746 (InAppPurchaseValidationProxyListener_tEF4A4E377F15B2E799679C630E558BCEA46D3685* __this, String_t* ___0_json, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInAppPurchaseValidationListener_t2FC5FE145015D81E2F6A7EC4FD9C2E0BD84B7CD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InAppPurchaseEventArgs_t78C43610CE4ACAA37E1588542415921FCE470C73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* G_B5_0 = NULL;
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* G_B4_0 = NULL;
	{
		// Listener?.OnInAppPurchaseValidationSucceeded(json);
		RuntimeObject* L_0;
		L_0 = InAppPurchaseValidationProxyListener_get_Listener_mB34D728D3DDA2DCD6FC45BDD484CFB32AF79DAD9_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		String_t* L_2 = ___0_json;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void AppodealStack.Monetization.Common.IInAppPurchaseValidationListener::OnInAppPurchaseValidationSucceeded(System.String) */, IInAppPurchaseValidationListener_t2FC5FE145015D81E2F6A7EC4FD9C2E0BD84B7CD7_il2cpp_TypeInfo_var, G_B2_0, L_2);
	}

IL_0012:
	{
		// OnValidationSucceeded?.Invoke(this, new InAppPurchaseEventArgs(json));
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_3 = __this->___OnValidationSucceeded_1;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_4 = L_3;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		String_t* L_5 = ___0_json;
		InAppPurchaseEventArgs_t78C43610CE4ACAA37E1588542415921FCE470C73* L_6 = (InAppPurchaseEventArgs_t78C43610CE4ACAA37E1588542415921FCE470C73*)il2cpp_codegen_object_new(InAppPurchaseEventArgs_t78C43610CE4ACAA37E1588542415921FCE470C73_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		InAppPurchaseEventArgs__ctor_mF7790920A563659DF2EC8379247DE31DE077F970(L_6, L_5, NULL);
		NullCheck(G_B5_0);
		EventHandler_1_Invoke_m64FD3E3EF117F559A56D7A2541DFC7FD072231DB_inline(G_B5_0, __this, L_6, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.InAppPurchaseValidationProxyListener::OnInAppPurchaseValidationFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppPurchaseValidationProxyListener_OnInAppPurchaseValidationFailed_m1383F036B94D58709661EE1052907F11BAE393EF (InAppPurchaseValidationProxyListener_tEF4A4E377F15B2E799679C630E558BCEA46D3685* __this, String_t* ___0_json, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInAppPurchaseValidationListener_t2FC5FE145015D81E2F6A7EC4FD9C2E0BD84B7CD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InAppPurchaseEventArgs_t78C43610CE4ACAA37E1588542415921FCE470C73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* G_B5_0 = NULL;
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* G_B4_0 = NULL;
	{
		// Listener?.OnInAppPurchaseValidationFailed(json);
		RuntimeObject* L_0;
		L_0 = InAppPurchaseValidationProxyListener_get_Listener_mB34D728D3DDA2DCD6FC45BDD484CFB32AF79DAD9_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		String_t* L_2 = ___0_json;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void AppodealStack.Monetization.Common.IInAppPurchaseValidationListener::OnInAppPurchaseValidationFailed(System.String) */, IInAppPurchaseValidationListener_t2FC5FE145015D81E2F6A7EC4FD9C2E0BD84B7CD7_il2cpp_TypeInfo_var, G_B2_0, L_2);
	}

IL_0012:
	{
		// OnValidationFailed?.Invoke(this, new InAppPurchaseEventArgs(json));
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_3 = __this->___OnValidationFailed_2;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_4 = L_3;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		String_t* L_5 = ___0_json;
		InAppPurchaseEventArgs_t78C43610CE4ACAA37E1588542415921FCE470C73* L_6 = (InAppPurchaseEventArgs_t78C43610CE4ACAA37E1588542415921FCE470C73*)il2cpp_codegen_object_new(InAppPurchaseEventArgs_t78C43610CE4ACAA37E1588542415921FCE470C73_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		InAppPurchaseEventArgs__ctor_mF7790920A563659DF2EC8379247DE31DE077F970(L_6, L_5, NULL);
		NullCheck(G_B5_0);
		EventHandler_1_Invoke_m64FD3E3EF117F559A56D7A2541DFC7FD072231DB_inline(G_B5_0, __this, L_6, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.InAppPurchaseValidationProxyListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppPurchaseValidationProxyListener__ctor_mD005B823FCC966869F74A7787511E2D5C9331A24 (InAppPurchaseValidationProxyListener_tEF4A4E377F15B2E799679C630E558BCEA46D3685* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// AppodealStack.Monetization.Common.IInterstitialAdListener AppodealStack.Monetization.Common.InterstitialAdProxyListener::get_Listener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InterstitialAdProxyListener_get_Listener_m63ED68762B7BDD43BF1F8E07F732CEAA77F2D47C (InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4* __this, const RuntimeMethod* method) 
{
	{
		// public IInterstitialAdListener Listener { get; set; }
		RuntimeObject* L_0 = __this->___U3CListenerU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void AppodealStack.Monetization.Common.InterstitialAdProxyListener::set_Listener(AppodealStack.Monetization.Common.IInterstitialAdListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdProxyListener_set_Listener_m9F446CF7BBB41D2DB6F4041773A51C2B903F4F65 (InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public IInterstitialAdListener Listener { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CListenerU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CListenerU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.InterstitialAdProxyListener::add_OnLoaded(System.EventHandler`1<AppodealStack.Monetization.Common.AdLoadedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdProxyListener_add_OnLoaded_mF1BA2C7FF9ADD709DD72CC99BCE69CD490371454 (InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4* __this, EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_0 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_1 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_2 = NULL;
	{
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_0 = __this->___OnLoaded_1;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_2 = V_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)Castclass((RuntimeObject*)L_4, EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var));
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA** L_5 = (&__this->___OnLoaded_1);
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_6 = V_2;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_7 = V_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_9 = V_0;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)L_9) == ((RuntimeObject*)(EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.InterstitialAdProxyListener::remove_OnLoaded(System.EventHandler`1<AppodealStack.Monetization.Common.AdLoadedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdProxyListener_remove_OnLoaded_m0AB7408DC5084B49F0850946838B0DF7C857072B (InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4* __this, EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_0 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_1 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_2 = NULL;
	{
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_0 = __this->___OnLoaded_1;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_2 = V_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)Castclass((RuntimeObject*)L_4, EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var));
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA** L_5 = (&__this->___OnLoaded_1);
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_6 = V_2;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_7 = V_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_9 = V_0;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)L_9) == ((RuntimeObject*)(EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.InterstitialAdProxyListener::add_OnFailedToLoad(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdProxyListener_add_OnFailedToLoad_m6D84C6DEE57E2CDF4A0E5D32976FBBF894E6C3FE (InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnFailedToLoad_2;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnFailedToLoad_2);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.InterstitialAdProxyListener::remove_OnFailedToLoad(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdProxyListener_remove_OnFailedToLoad_mBD53576F8A20D4B4A20F5A1CF807F4CB133C71F3 (InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnFailedToLoad_2;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnFailedToLoad_2);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.InterstitialAdProxyListener::add_OnShown(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdProxyListener_add_OnShown_mD2281C240BE0A14C73D04228DEDC8FD8D8AB5E01 (InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnShown_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnShown_3);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.InterstitialAdProxyListener::remove_OnShown(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdProxyListener_remove_OnShown_m478891795305AF50527638FBDFCE3EB15766710A (InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnShown_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnShown_3);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.InterstitialAdProxyListener::add_OnShowFailed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdProxyListener_add_OnShowFailed_m5255CE48EEBE1580EA0EDBC99E5072F6DDF00E4E (InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnShowFailed_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnShowFailed_4);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.InterstitialAdProxyListener::remove_OnShowFailed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdProxyListener_remove_OnShowFailed_m4488D678C5116D9E13B393C9FB9C2B942DE8D4DC (InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnShowFailed_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnShowFailed_4);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.InterstitialAdProxyListener::add_OnClosed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdProxyListener_add_OnClosed_mECA13E209F5233AE7051344F5958AB04A01BD64A (InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnClosed_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnClosed_5);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.InterstitialAdProxyListener::remove_OnClosed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdProxyListener_remove_OnClosed_m7787129E06660D966CD1361B43A9BBEC66A36EEA (InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnClosed_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnClosed_5);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.InterstitialAdProxyListener::add_OnClicked(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdProxyListener_add_OnClicked_m08723AB8B48E299B74626928E80D5C24C192A6A1 (InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnClicked_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnClicked_6);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.InterstitialAdProxyListener::remove_OnClicked(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdProxyListener_remove_OnClicked_mD5B7D126EE40E9227FC21BAD81D013FE789D642B (InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnClicked_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnClicked_6);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.InterstitialAdProxyListener::add_OnExpired(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdProxyListener_add_OnExpired_mF6A48124FE792429D2BA1A8D7DE1CAC828597C78 (InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnExpired_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnExpired_7);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.InterstitialAdProxyListener::remove_OnExpired(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdProxyListener_remove_OnExpired_m8EA6E0D4A6A48C17CF8B99D4CC0604633F376153 (InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnExpired_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnExpired_7);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.InterstitialAdProxyListener::OnInterstitialLoaded(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdProxyListener_OnInterstitialLoaded_m1104556ED88311981868E8D0B77FD0DD520C8B3A (InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4* __this, bool ___0_isPrecache, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdLoadedEventArgs_t2F7259B880EABD1911936EA4AFD0D6C50D1330FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* G_B5_0 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* G_B4_0 = NULL;
	{
		// Listener?.OnInterstitialLoaded(isPrecache);
		RuntimeObject* L_0;
		L_0 = InterstitialAdProxyListener_get_Listener_m63ED68762B7BDD43BF1F8E07F732CEAA77F2D47C_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		bool L_2 = ___0_isPrecache;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void AppodealStack.Monetization.Common.IInterstitialAdListener::OnInterstitialLoaded(System.Boolean) */, IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var, G_B2_0, L_2);
	}

IL_0012:
	{
		// OnLoaded?.Invoke(this, new AdLoadedEventArgs(isPrecache));
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_3 = __this->___OnLoaded_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_4 = L_3;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		bool L_5 = ___0_isPrecache;
		AdLoadedEventArgs_t2F7259B880EABD1911936EA4AFD0D6C50D1330FA* L_6 = (AdLoadedEventArgs_t2F7259B880EABD1911936EA4AFD0D6C50D1330FA*)il2cpp_codegen_object_new(AdLoadedEventArgs_t2F7259B880EABD1911936EA4AFD0D6C50D1330FA_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		AdLoadedEventArgs__ctor_m3C2DB4FF366EA2675A8BB77B5FF94A9000B5CC83(L_6, L_5, NULL);
		NullCheck(G_B5_0);
		EventHandler_1_Invoke_m0EC2B95824927C7CB96757DA573935AD2EFA990A_inline(G_B5_0, __this, L_6, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.InterstitialAdProxyListener::OnInterstitialFailedToLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdProxyListener_OnInterstitialFailedToLoad_m24EB7963485A2718A102C1125B27834F52F32C96 (InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B5_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B4_0 = NULL;
	{
		// Listener?.OnInterstitialFailedToLoad();
		RuntimeObject* L_0;
		L_0 = InterstitialAdProxyListener_get_Listener_m63ED68762B7BDD43BF1F8E07F732CEAA77F2D47C_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void AppodealStack.Monetization.Common.IInterstitialAdListener::OnInterstitialFailedToLoad() */, IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0011:
	{
		// OnFailedToLoad?.Invoke(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = __this->___OnFailedToLoad_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_4 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(G_B5_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B5_0, __this, L_4, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.InterstitialAdProxyListener::OnInterstitialShown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdProxyListener_OnInterstitialShown_m709B3A87A36CE1FD0B0E009EE7844E252F4A6A30 (InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B5_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B4_0 = NULL;
	{
		// Listener?.OnInterstitialShown();
		RuntimeObject* L_0;
		L_0 = InterstitialAdProxyListener_get_Listener_m63ED68762B7BDD43BF1F8E07F732CEAA77F2D47C_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void AppodealStack.Monetization.Common.IInterstitialAdListener::OnInterstitialShown() */, IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0011:
	{
		// OnShown?.Invoke(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = __this->___OnShown_3;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_4 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(G_B5_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B5_0, __this, L_4, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.InterstitialAdProxyListener::OnInterstitialShowFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdProxyListener_OnInterstitialShowFailed_mA4DFF95F2D929857EE8D42BA059CAB3EA7F98A66 (InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B5_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B4_0 = NULL;
	{
		// Listener?.OnInterstitialShowFailed();
		RuntimeObject* L_0;
		L_0 = InterstitialAdProxyListener_get_Listener_m63ED68762B7BDD43BF1F8E07F732CEAA77F2D47C_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void AppodealStack.Monetization.Common.IInterstitialAdListener::OnInterstitialShowFailed() */, IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0011:
	{
		// OnShowFailed?.Invoke(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = __this->___OnShowFailed_4;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_4 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(G_B5_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B5_0, __this, L_4, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.InterstitialAdProxyListener::OnInterstitialClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdProxyListener_OnInterstitialClosed_m3360D04BCA00C296C0887A009BCAF3C40B248A04 (InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B5_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B4_0 = NULL;
	{
		// Listener?.OnInterstitialClosed();
		RuntimeObject* L_0;
		L_0 = InterstitialAdProxyListener_get_Listener_m63ED68762B7BDD43BF1F8E07F732CEAA77F2D47C_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void AppodealStack.Monetization.Common.IInterstitialAdListener::OnInterstitialClosed() */, IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0011:
	{
		// OnClosed?.Invoke(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = __this->___OnClosed_5;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_4 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(G_B5_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B5_0, __this, L_4, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.InterstitialAdProxyListener::OnInterstitialClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdProxyListener_OnInterstitialClicked_m449EC72384DB891A7CA53743028BBEE8EA1E1BE0 (InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B5_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B4_0 = NULL;
	{
		// Listener?.OnInterstitialClicked();
		RuntimeObject* L_0;
		L_0 = InterstitialAdProxyListener_get_Listener_m63ED68762B7BDD43BF1F8E07F732CEAA77F2D47C_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(5 /* System.Void AppodealStack.Monetization.Common.IInterstitialAdListener::OnInterstitialClicked() */, IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0011:
	{
		// OnClicked?.Invoke(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = __this->___OnClicked_6;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_4 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(G_B5_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B5_0, __this, L_4, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.InterstitialAdProxyListener::OnInterstitialExpired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdProxyListener_OnInterstitialExpired_mB81C8B7AE702219E190551FD9766CCF7AA83B54A (InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B5_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B4_0 = NULL;
	{
		// Listener?.OnInterstitialExpired();
		RuntimeObject* L_0;
		L_0 = InterstitialAdProxyListener_get_Listener_m63ED68762B7BDD43BF1F8E07F732CEAA77F2D47C_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(6 /* System.Void AppodealStack.Monetization.Common.IInterstitialAdListener::OnInterstitialExpired() */, IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0011:
	{
		// OnExpired?.Invoke(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = __this->___OnExpired_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_4 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(G_B5_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B5_0, __this, L_4, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.InterstitialAdProxyListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdProxyListener__ctor_mE16A54AB68A01BFA47C14671850791206ACBB5B5 (InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// AppodealStack.Monetization.Common.IMrecAdListener AppodealStack.Monetization.Common.MrecAdProxyListener::get_Listener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MrecAdProxyListener_get_Listener_m64D1D371B31EA317F93AA8295549CD4911BCC87D (MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682* __this, const RuntimeMethod* method) 
{
	{
		// public IMrecAdListener Listener { get; set; }
		RuntimeObject* L_0 = __this->___U3CListenerU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void AppodealStack.Monetization.Common.MrecAdProxyListener::set_Listener(AppodealStack.Monetization.Common.IMrecAdListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MrecAdProxyListener_set_Listener_m2A4160C4A18466EA66410CADC40CD754BB089981 (MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public IMrecAdListener Listener { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CListenerU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CListenerU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.MrecAdProxyListener::add_OnLoaded(System.EventHandler`1<AppodealStack.Monetization.Common.AdLoadedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MrecAdProxyListener_add_OnLoaded_mB049AB1C850E0882476809DE32052AA9E177664E (MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682* __this, EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_0 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_1 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_2 = NULL;
	{
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_0 = __this->___OnLoaded_1;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_2 = V_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)Castclass((RuntimeObject*)L_4, EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var));
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA** L_5 = (&__this->___OnLoaded_1);
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_6 = V_2;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_7 = V_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_9 = V_0;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)L_9) == ((RuntimeObject*)(EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.MrecAdProxyListener::remove_OnLoaded(System.EventHandler`1<AppodealStack.Monetization.Common.AdLoadedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MrecAdProxyListener_remove_OnLoaded_m238C437D72F72410953B313008965F54309D6DED (MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682* __this, EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_0 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_1 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_2 = NULL;
	{
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_0 = __this->___OnLoaded_1;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_2 = V_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)Castclass((RuntimeObject*)L_4, EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var));
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA** L_5 = (&__this->___OnLoaded_1);
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_6 = V_2;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_7 = V_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_9 = V_0;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)L_9) == ((RuntimeObject*)(EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.MrecAdProxyListener::add_OnFailedToLoad(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MrecAdProxyListener_add_OnFailedToLoad_m7639846A14AD71459FCBC635D757E14701AF87C9 (MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnFailedToLoad_2;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnFailedToLoad_2);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.MrecAdProxyListener::remove_OnFailedToLoad(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MrecAdProxyListener_remove_OnFailedToLoad_m54391E9938FC9D9C5953B19F8CDCA4D5C604425C (MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnFailedToLoad_2;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnFailedToLoad_2);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.MrecAdProxyListener::add_OnShown(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MrecAdProxyListener_add_OnShown_mA37A9F8A87956886705011475C181594BA7FA054 (MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnShown_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnShown_3);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.MrecAdProxyListener::remove_OnShown(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MrecAdProxyListener_remove_OnShown_mC3C94E701E0E9672E56C879DA16F041DA3CE8BDA (MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnShown_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnShown_3);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.MrecAdProxyListener::add_OnShowFailed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MrecAdProxyListener_add_OnShowFailed_mE86A8B9BC2A5FF15FBF9FFC2956CA859DF5A0754 (MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnShowFailed_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnShowFailed_4);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.MrecAdProxyListener::remove_OnShowFailed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MrecAdProxyListener_remove_OnShowFailed_m5C76928AE8E8E52AF980DBA3D8B91CE3EE1564B9 (MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnShowFailed_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnShowFailed_4);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.MrecAdProxyListener::add_OnClicked(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MrecAdProxyListener_add_OnClicked_mD540D49C236CE8A4DD0021CA24D32EFE937FF8B7 (MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnClicked_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnClicked_5);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.MrecAdProxyListener::remove_OnClicked(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MrecAdProxyListener_remove_OnClicked_m1F3AADC80B373BCE03EE505960F83F1854B1A12E (MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnClicked_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnClicked_5);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.MrecAdProxyListener::add_OnExpired(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MrecAdProxyListener_add_OnExpired_mAF9018B47C5F4AC38A1A2F372297F4A006296E05 (MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnExpired_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnExpired_6);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.MrecAdProxyListener::remove_OnExpired(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MrecAdProxyListener_remove_OnExpired_mFBD14567F2BC4A639CFE1998225689DBE4A087FC (MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnExpired_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnExpired_6);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.MrecAdProxyListener::OnMrecLoaded(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MrecAdProxyListener_OnMrecLoaded_mE479F1C8DC2571F4052707EC8D5EA6FFA982946A (MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682* __this, bool ___0_isPrecache, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdLoadedEventArgs_t2F7259B880EABD1911936EA4AFD0D6C50D1330FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMrecAdListener_tE137D04EDF5519329E09E69C094305D8CB9B5519_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* G_B5_0 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* G_B4_0 = NULL;
	{
		// Listener?.OnMrecLoaded(isPrecache);
		RuntimeObject* L_0;
		L_0 = MrecAdProxyListener_get_Listener_m64D1D371B31EA317F93AA8295549CD4911BCC87D_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		bool L_2 = ___0_isPrecache;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void AppodealStack.Monetization.Common.IMrecAdListener::OnMrecLoaded(System.Boolean) */, IMrecAdListener_tE137D04EDF5519329E09E69C094305D8CB9B5519_il2cpp_TypeInfo_var, G_B2_0, L_2);
	}

IL_0012:
	{
		// OnLoaded?.Invoke(this, new AdLoadedEventArgs(isPrecache));
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_3 = __this->___OnLoaded_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_4 = L_3;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		bool L_5 = ___0_isPrecache;
		AdLoadedEventArgs_t2F7259B880EABD1911936EA4AFD0D6C50D1330FA* L_6 = (AdLoadedEventArgs_t2F7259B880EABD1911936EA4AFD0D6C50D1330FA*)il2cpp_codegen_object_new(AdLoadedEventArgs_t2F7259B880EABD1911936EA4AFD0D6C50D1330FA_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		AdLoadedEventArgs__ctor_m3C2DB4FF366EA2675A8BB77B5FF94A9000B5CC83(L_6, L_5, NULL);
		NullCheck(G_B5_0);
		EventHandler_1_Invoke_m0EC2B95824927C7CB96757DA573935AD2EFA990A_inline(G_B5_0, __this, L_6, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.MrecAdProxyListener::OnMrecFailedToLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MrecAdProxyListener_OnMrecFailedToLoad_mB1E2470E0F2212DDAD17EF4B3B810A7A41B5193E (MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMrecAdListener_tE137D04EDF5519329E09E69C094305D8CB9B5519_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B5_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B4_0 = NULL;
	{
		// Listener?.OnMrecFailedToLoad();
		RuntimeObject* L_0;
		L_0 = MrecAdProxyListener_get_Listener_m64D1D371B31EA317F93AA8295549CD4911BCC87D_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void AppodealStack.Monetization.Common.IMrecAdListener::OnMrecFailedToLoad() */, IMrecAdListener_tE137D04EDF5519329E09E69C094305D8CB9B5519_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0011:
	{
		// OnFailedToLoad?.Invoke(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = __this->___OnFailedToLoad_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_4 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(G_B5_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B5_0, __this, L_4, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.MrecAdProxyListener::OnMrecShown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MrecAdProxyListener_OnMrecShown_m9E40448EA0C962CB684B186A56660BEF466F94CD (MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMrecAdListener_tE137D04EDF5519329E09E69C094305D8CB9B5519_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B5_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B4_0 = NULL;
	{
		// Listener?.OnMrecShown();
		RuntimeObject* L_0;
		L_0 = MrecAdProxyListener_get_Listener_m64D1D371B31EA317F93AA8295549CD4911BCC87D_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void AppodealStack.Monetization.Common.IMrecAdListener::OnMrecShown() */, IMrecAdListener_tE137D04EDF5519329E09E69C094305D8CB9B5519_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0011:
	{
		// OnShown?.Invoke(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = __this->___OnShown_3;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_4 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(G_B5_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B5_0, __this, L_4, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.MrecAdProxyListener::OnMrecShowFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MrecAdProxyListener_OnMrecShowFailed_mCF1D780DEF08886BB2153C441E82BBB17B81B850 (MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMrecAdListener_tE137D04EDF5519329E09E69C094305D8CB9B5519_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B5_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B4_0 = NULL;
	{
		// Listener?.OnMrecShowFailed();
		RuntimeObject* L_0;
		L_0 = MrecAdProxyListener_get_Listener_m64D1D371B31EA317F93AA8295549CD4911BCC87D_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void AppodealStack.Monetization.Common.IMrecAdListener::OnMrecShowFailed() */, IMrecAdListener_tE137D04EDF5519329E09E69C094305D8CB9B5519_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0011:
	{
		// OnShowFailed?.Invoke(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = __this->___OnShowFailed_4;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_4 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(G_B5_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B5_0, __this, L_4, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.MrecAdProxyListener::OnMrecClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MrecAdProxyListener_OnMrecClicked_mF2CF330455712498DA029EC058EFD4A0D4FDF899 (MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMrecAdListener_tE137D04EDF5519329E09E69C094305D8CB9B5519_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B5_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B4_0 = NULL;
	{
		// Listener?.OnMrecClicked();
		RuntimeObject* L_0;
		L_0 = MrecAdProxyListener_get_Listener_m64D1D371B31EA317F93AA8295549CD4911BCC87D_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void AppodealStack.Monetization.Common.IMrecAdListener::OnMrecClicked() */, IMrecAdListener_tE137D04EDF5519329E09E69C094305D8CB9B5519_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0011:
	{
		// OnClicked?.Invoke(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = __this->___OnClicked_5;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_4 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(G_B5_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B5_0, __this, L_4, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.MrecAdProxyListener::OnMrecExpired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MrecAdProxyListener_OnMrecExpired_mD42ED2E0DCD0B144EB3194D8072AEFD3E37DC776 (MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMrecAdListener_tE137D04EDF5519329E09E69C094305D8CB9B5519_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B5_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B4_0 = NULL;
	{
		// Listener?.OnMrecExpired();
		RuntimeObject* L_0;
		L_0 = MrecAdProxyListener_get_Listener_m64D1D371B31EA317F93AA8295549CD4911BCC87D_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(5 /* System.Void AppodealStack.Monetization.Common.IMrecAdListener::OnMrecExpired() */, IMrecAdListener_tE137D04EDF5519329E09E69C094305D8CB9B5519_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0011:
	{
		// OnExpired?.Invoke(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = __this->___OnExpired_6;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_4 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(G_B5_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B5_0, __this, L_4, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.MrecAdProxyListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MrecAdProxyListener__ctor_mC38BE349BE97B0C0D5A277B7DD6957FD1D14246A (MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// AppodealStack.Monetization.Common.IRewardedVideoAdListener AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::get_Listener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewardedVideoAdProxyListener_get_Listener_mD15BBB1273334A3712B33EEB5F26AAC3211F9254 (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, const RuntimeMethod* method) 
{
	{
		// public IRewardedVideoAdListener Listener { get; set; }
		RuntimeObject* L_0 = __this->___U3CListenerU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::set_Listener(AppodealStack.Monetization.Common.IRewardedVideoAdListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdProxyListener_set_Listener_m95912A4A04F60E46577B4691F1FDE974D7F11BF0 (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public IRewardedVideoAdListener Listener { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CListenerU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CListenerU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::add_OnLoaded(System.EventHandler`1<AppodealStack.Monetization.Common.AdLoadedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdProxyListener_add_OnLoaded_m34F02AA774BC29AB6204AD41D386CC74022D7059 (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_0 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_1 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_2 = NULL;
	{
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_0 = __this->___OnLoaded_1;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_2 = V_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)Castclass((RuntimeObject*)L_4, EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var));
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA** L_5 = (&__this->___OnLoaded_1);
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_6 = V_2;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_7 = V_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_9 = V_0;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)L_9) == ((RuntimeObject*)(EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::remove_OnLoaded(System.EventHandler`1<AppodealStack.Monetization.Common.AdLoadedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdProxyListener_remove_OnLoaded_m0C2C4E8AE6B40275C39F8AD8777F3678AA173FC3 (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_0 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_1 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_2 = NULL;
	{
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_0 = __this->___OnLoaded_1;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_2 = V_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)Castclass((RuntimeObject*)L_4, EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var));
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA** L_5 = (&__this->___OnLoaded_1);
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_6 = V_2;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_7 = V_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_9 = V_0;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)L_9) == ((RuntimeObject*)(EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::add_OnFailedToLoad(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdProxyListener_add_OnFailedToLoad_m8DE7528B2BBB4772202CAC8D61AD46D6D3C32891 (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnFailedToLoad_2;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnFailedToLoad_2);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::remove_OnFailedToLoad(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdProxyListener_remove_OnFailedToLoad_mDB09B78EA671AE0CC5D81C8C0D14F36EAC0B7691 (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnFailedToLoad_2;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnFailedToLoad_2);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::add_OnShown(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdProxyListener_add_OnShown_m99B1D5F45D4319EC45DD72F8738018C6DE12FF74 (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnShown_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnShown_3);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::remove_OnShown(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdProxyListener_remove_OnShown_m25AB89B3C74DF64778EA54FD16AF184934C0A68C (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnShown_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnShown_3);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::add_OnShowFailed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdProxyListener_add_OnShowFailed_m4AC911C2E08E08D6F77A050BB91156121FE1A38D (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnShowFailed_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnShowFailed_4);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::remove_OnShowFailed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdProxyListener_remove_OnShowFailed_m4AC5EC676EED078401E78E6822BD982A7380C749 (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnShowFailed_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnShowFailed_4);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::add_OnClosed(System.EventHandler`1<AppodealStack.Monetization.Common.RewardedVideoClosedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdProxyListener_add_OnClosed_m6805FB5847A941F5EE607774FF06EAF75CD68FD5 (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* V_0 = NULL;
	EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* V_1 = NULL;
	EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* V_2 = NULL;
	{
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_0 = __this->___OnClosed_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_2 = V_1;
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE*)Castclass((RuntimeObject*)L_4, EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE_il2cpp_TypeInfo_var));
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE** L_5 = (&__this->___OnClosed_5);
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_6 = V_2;
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_7 = V_1;
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_9 = V_0;
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE*)L_9) == ((RuntimeObject*)(EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::remove_OnClosed(System.EventHandler`1<AppodealStack.Monetization.Common.RewardedVideoClosedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdProxyListener_remove_OnClosed_mF8DA0B6ED166308549B5810E92AE560BBCD338B2 (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* V_0 = NULL;
	EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* V_1 = NULL;
	EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* V_2 = NULL;
	{
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_0 = __this->___OnClosed_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_2 = V_1;
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE*)Castclass((RuntimeObject*)L_4, EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE_il2cpp_TypeInfo_var));
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE** L_5 = (&__this->___OnClosed_5);
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_6 = V_2;
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_7 = V_1;
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_9 = V_0;
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE*)L_9) == ((RuntimeObject*)(EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::add_OnFinished(System.EventHandler`1<AppodealStack.Monetization.Common.RewardedVideoFinishedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdProxyListener_add_OnFinished_m37D1B2ECB44877478766B59C61600FB888E2F8ED (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* V_0 = NULL;
	EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* V_1 = NULL;
	EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* V_2 = NULL;
	{
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_0 = __this->___OnFinished_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_2 = V_1;
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113*)Castclass((RuntimeObject*)L_4, EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113_il2cpp_TypeInfo_var));
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113** L_5 = (&__this->___OnFinished_6);
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_6 = V_2;
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_7 = V_1;
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_9 = V_0;
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113*)L_9) == ((RuntimeObject*)(EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::remove_OnFinished(System.EventHandler`1<AppodealStack.Monetization.Common.RewardedVideoFinishedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdProxyListener_remove_OnFinished_m530E308900E1E0A406F09FBEC83BAB2DDF6D893A (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* V_0 = NULL;
	EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* V_1 = NULL;
	EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* V_2 = NULL;
	{
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_0 = __this->___OnFinished_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_2 = V_1;
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113*)Castclass((RuntimeObject*)L_4, EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113_il2cpp_TypeInfo_var));
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113** L_5 = (&__this->___OnFinished_6);
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_6 = V_2;
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_7 = V_1;
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_9 = V_0;
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113*)L_9) == ((RuntimeObject*)(EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::add_OnClicked(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdProxyListener_add_OnClicked_m1474CE27A653E1B5F7705C964EE4DD62C77A5D6E (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnClicked_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnClicked_7);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::remove_OnClicked(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdProxyListener_remove_OnClicked_m14175D05EEEA130B59A11CF58BCE2EEFCB3A0A87 (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnClicked_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnClicked_7);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::add_OnExpired(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdProxyListener_add_OnExpired_mE1AE525E41C11B39ED8145492F82231C1B7672F8 (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnExpired_8;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnExpired_8);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::remove_OnExpired(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdProxyListener_remove_OnExpired_m6F290883DAEB745F0C6ADC01BB6BCBB6601F9D10 (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnExpired_8;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnExpired_8);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::OnRewardedVideoLoaded(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdProxyListener_OnRewardedVideoLoaded_mD832A37B185560B8017FF0D425F862DFC33CF0FC (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, bool ___0_isPrecache, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdLoadedEventArgs_t2F7259B880EABD1911936EA4AFD0D6C50D1330FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* G_B5_0 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* G_B4_0 = NULL;
	{
		// Listener?.OnRewardedVideoLoaded(isPrecache);
		RuntimeObject* L_0;
		L_0 = RewardedVideoAdProxyListener_get_Listener_mD15BBB1273334A3712B33EEB5F26AAC3211F9254_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		bool L_2 = ___0_isPrecache;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void AppodealStack.Monetization.Common.IRewardedVideoAdListener::OnRewardedVideoLoaded(System.Boolean) */, IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var, G_B2_0, L_2);
	}

IL_0012:
	{
		// OnLoaded?.Invoke(this, new AdLoadedEventArgs(isPrecache));
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_3 = __this->___OnLoaded_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_4 = L_3;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		bool L_5 = ___0_isPrecache;
		AdLoadedEventArgs_t2F7259B880EABD1911936EA4AFD0D6C50D1330FA* L_6 = (AdLoadedEventArgs_t2F7259B880EABD1911936EA4AFD0D6C50D1330FA*)il2cpp_codegen_object_new(AdLoadedEventArgs_t2F7259B880EABD1911936EA4AFD0D6C50D1330FA_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		AdLoadedEventArgs__ctor_m3C2DB4FF366EA2675A8BB77B5FF94A9000B5CC83(L_6, L_5, NULL);
		NullCheck(G_B5_0);
		EventHandler_1_Invoke_m0EC2B95824927C7CB96757DA573935AD2EFA990A_inline(G_B5_0, __this, L_6, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::OnRewardedVideoFailedToLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdProxyListener_OnRewardedVideoFailedToLoad_m77DDD375668E4A15194825573213BCA0ADACB051 (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B5_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B4_0 = NULL;
	{
		// Listener?.OnRewardedVideoFailedToLoad();
		RuntimeObject* L_0;
		L_0 = RewardedVideoAdProxyListener_get_Listener_mD15BBB1273334A3712B33EEB5F26AAC3211F9254_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void AppodealStack.Monetization.Common.IRewardedVideoAdListener::OnRewardedVideoFailedToLoad() */, IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0011:
	{
		// OnFailedToLoad?.Invoke(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = __this->___OnFailedToLoad_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_4 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(G_B5_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B5_0, __this, L_4, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::OnRewardedVideoShown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdProxyListener_OnRewardedVideoShown_mD863CB24266728897F4082D8E9F5F3428E753A5E (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B5_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B4_0 = NULL;
	{
		// Listener?.OnRewardedVideoShown();
		RuntimeObject* L_0;
		L_0 = RewardedVideoAdProxyListener_get_Listener_mD15BBB1273334A3712B33EEB5F26AAC3211F9254_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void AppodealStack.Monetization.Common.IRewardedVideoAdListener::OnRewardedVideoShown() */, IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0011:
	{
		// OnShown?.Invoke(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = __this->___OnShown_3;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_4 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(G_B5_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B5_0, __this, L_4, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::OnRewardedVideoShowFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdProxyListener_OnRewardedVideoShowFailed_mD8FC98A8520B4BDB48D8C5511877BF1DF4EBDD65 (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B5_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B4_0 = NULL;
	{
		// Listener?.OnRewardedVideoShowFailed();
		RuntimeObject* L_0;
		L_0 = RewardedVideoAdProxyListener_get_Listener_mD15BBB1273334A3712B33EEB5F26AAC3211F9254_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void AppodealStack.Monetization.Common.IRewardedVideoAdListener::OnRewardedVideoShowFailed() */, IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0011:
	{
		// OnShowFailed?.Invoke(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = __this->___OnShowFailed_4;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_4 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(G_B5_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B5_0, __this, L_4, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::OnRewardedVideoClosed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdProxyListener_OnRewardedVideoClosed_mC0F3CACF9AFAF290CFE0D6B101E818D8B86972B5 (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, bool ___0_finished, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoClosedEventArgs_t4FC78F06AC8480C706595468368B1105D2216590_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* G_B5_0 = NULL;
	EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* G_B4_0 = NULL;
	{
		// Listener?.OnRewardedVideoClosed(finished);
		RuntimeObject* L_0;
		L_0 = RewardedVideoAdProxyListener_get_Listener_mD15BBB1273334A3712B33EEB5F26AAC3211F9254_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		bool L_2 = ___0_finished;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< bool >::Invoke(5 /* System.Void AppodealStack.Monetization.Common.IRewardedVideoAdListener::OnRewardedVideoClosed(System.Boolean) */, IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var, G_B2_0, L_2);
	}

IL_0012:
	{
		// OnClosed?.Invoke(this, new RewardedVideoClosedEventArgs(finished));
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_3 = __this->___OnClosed_5;
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_4 = L_3;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		bool L_5 = ___0_finished;
		RewardedVideoClosedEventArgs_t4FC78F06AC8480C706595468368B1105D2216590* L_6 = (RewardedVideoClosedEventArgs_t4FC78F06AC8480C706595468368B1105D2216590*)il2cpp_codegen_object_new(RewardedVideoClosedEventArgs_t4FC78F06AC8480C706595468368B1105D2216590_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		RewardedVideoClosedEventArgs__ctor_m5DFF5482567229B0F177F078F3087B8725762FF3(L_6, L_5, NULL);
		NullCheck(G_B5_0);
		EventHandler_1_Invoke_m2B9EE3792EED23A2ED4FDEBFAB575C327C8E8213_inline(G_B5_0, __this, L_6, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::OnRewardedVideoFinished(System.Double,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdProxyListener_OnRewardedVideoFinished_mAEE9EE5BEAD5E5B9635A8115B4B94FB83C452423 (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, double ___0_amount, String_t* ___1_currency, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoFinishedEventArgs_tC53B8C04520C77DA8044F5687E99CB57DF45135C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* G_B5_0 = NULL;
	EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* G_B4_0 = NULL;
	{
		// Listener?.OnRewardedVideoFinished(amount, currency);
		RuntimeObject* L_0;
		L_0 = RewardedVideoAdProxyListener_get_Listener_mD15BBB1273334A3712B33EEB5F26AAC3211F9254_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		double L_2 = ___0_amount;
		String_t* L_3 = ___1_currency;
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< double, String_t* >::Invoke(4 /* System.Void AppodealStack.Monetization.Common.IRewardedVideoAdListener::OnRewardedVideoFinished(System.Double,System.String) */, IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var, G_B2_0, L_2, L_3);
	}

IL_0013:
	{
		// OnFinished?.Invoke(this, new RewardedVideoFinishedEventArgs(amount, currency));
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_4 = __this->___OnFinished_6;
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_5 = L_4;
		G_B4_0 = L_5;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		double L_6 = ___0_amount;
		String_t* L_7 = ___1_currency;
		RewardedVideoFinishedEventArgs_tC53B8C04520C77DA8044F5687E99CB57DF45135C* L_8 = (RewardedVideoFinishedEventArgs_tC53B8C04520C77DA8044F5687E99CB57DF45135C*)il2cpp_codegen_object_new(RewardedVideoFinishedEventArgs_tC53B8C04520C77DA8044F5687E99CB57DF45135C_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		RewardedVideoFinishedEventArgs__ctor_m03555EA26D5A81759F9516454925EA76D0AB61E9(L_8, L_6, L_7, NULL);
		NullCheck(G_B5_0);
		EventHandler_1_Invoke_m14395E51DB80C22CBACB91FE5CDC48EC09895040_inline(G_B5_0, __this, L_8, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::OnRewardedVideoClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdProxyListener_OnRewardedVideoClicked_m2FA208498A3ADF28FFEA6A8304F70A6349FD325A (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B5_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B4_0 = NULL;
	{
		// Listener?.OnRewardedVideoClicked();
		RuntimeObject* L_0;
		L_0 = RewardedVideoAdProxyListener_get_Listener_mD15BBB1273334A3712B33EEB5F26AAC3211F9254_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(7 /* System.Void AppodealStack.Monetization.Common.IRewardedVideoAdListener::OnRewardedVideoClicked() */, IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0011:
	{
		// OnClicked?.Invoke(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = __this->___OnClicked_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_4 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(G_B5_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B5_0, __this, L_4, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::OnRewardedVideoExpired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdProxyListener_OnRewardedVideoExpired_m0081E411BD0112C6FE0384E52E766AF0B7A6EAA5 (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B5_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B4_0 = NULL;
	{
		// Listener?.OnRewardedVideoExpired();
		RuntimeObject* L_0;
		L_0 = RewardedVideoAdProxyListener_get_Listener_mD15BBB1273334A3712B33EEB5F26AAC3211F9254_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(6 /* System.Void AppodealStack.Monetization.Common.IRewardedVideoAdListener::OnRewardedVideoExpired() */, IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0011:
	{
		// OnExpired?.Invoke(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = __this->___OnExpired_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_4 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(G_B5_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B5_0, __this, L_4, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.RewardedVideoAdProxyListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdProxyListener__ctor_m2D749B5DEC64BC448A8B851FDF2402CA76EAA4CB (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// AppodealStack.Monetization.Common.IAppodealInitializationListener AppodealStack.Monetization.Common.SdkProxyListener::get_InitListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SdkProxyListener_get_InitListener_m51AA77D0867E2ED0EB505B67864D935E1CD1D1C5 (SdkProxyListener_t8B86FCD3D4F7D42A0DFF581EF5AF9B15F656D388* __this, const RuntimeMethod* method) 
{
	{
		// public IAppodealInitializationListener InitListener { get; set; }
		RuntimeObject* L_0 = __this->___U3CInitListenerU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void AppodealStack.Monetization.Common.SdkProxyListener::set_InitListener(AppodealStack.Monetization.Common.IAppodealInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SdkProxyListener_set_InitListener_mEF00BD7931AC379BCDE801E9C923956F21494B9B (SdkProxyListener_t8B86FCD3D4F7D42A0DFF581EF5AF9B15F656D388* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public IAppodealInitializationListener InitListener { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CInitListenerU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInitListenerU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.SdkProxyListener::add_OnInitialized(System.EventHandler`1<AppodealStack.Monetization.Common.SdkInitializedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SdkProxyListener_add_OnInitialized_m07129A23C4571F7F0DF407A2BDC9BB67D4944519 (SdkProxyListener_t8B86FCD3D4F7D42A0DFF581EF5AF9B15F656D388* __this, EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* V_0 = NULL;
	EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* V_1 = NULL;
	EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* V_2 = NULL;
	{
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_0 = __this->___OnInitialized_1;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_2 = V_1;
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B*)Castclass((RuntimeObject*)L_4, EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B_il2cpp_TypeInfo_var));
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B** L_5 = (&__this->___OnInitialized_1);
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_6 = V_2;
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_7 = V_1;
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_9 = V_0;
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B*)L_9) == ((RuntimeObject*)(EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.SdkProxyListener::remove_OnInitialized(System.EventHandler`1<AppodealStack.Monetization.Common.SdkInitializedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SdkProxyListener_remove_OnInitialized_mD9C4EB2B64E26A3E000805A7633942B527E200D0 (SdkProxyListener_t8B86FCD3D4F7D42A0DFF581EF5AF9B15F656D388* __this, EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* V_0 = NULL;
	EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* V_1 = NULL;
	EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* V_2 = NULL;
	{
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_0 = __this->___OnInitialized_1;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_2 = V_1;
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B*)Castclass((RuntimeObject*)L_4, EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B_il2cpp_TypeInfo_var));
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B** L_5 = (&__this->___OnInitialized_1);
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_6 = V_2;
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_7 = V_1;
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_9 = V_0;
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B*)L_9) == ((RuntimeObject*)(EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.SdkProxyListener::OnInitializationFinished(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SdkProxyListener_OnInitializationFinished_mF9E8D1170FA417928D824632CEB08987645C3AAA (SdkProxyListener_t8B86FCD3D4F7D42A0DFF581EF5AF9B15F656D388* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_errors, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppodealInitializationListener_tE391C3AC8EB20933A7F002B4A19AF18271F093CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SdkInitializedEventArgs_t78A87E4997F422DFF4923A44CDCAE8693AA21005_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* G_B5_0 = NULL;
	EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* G_B4_0 = NULL;
	{
		// InitListener?.OnInitializationFinished(errors);
		RuntimeObject* L_0;
		L_0 = SdkProxyListener_get_InitListener_m51AA77D0867E2ED0EB505B67864D935E1CD1D1C5_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = ___0_errors;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* >::Invoke(0 /* System.Void AppodealStack.Monetization.Common.IAppodealInitializationListener::OnInitializationFinished(System.Collections.Generic.List`1<System.String>) */, IAppodealInitializationListener_tE391C3AC8EB20933A7F002B4A19AF18271F093CB_il2cpp_TypeInfo_var, G_B2_0, L_2);
	}

IL_0012:
	{
		// OnInitialized?.Invoke(this, new SdkInitializedEventArgs(errors));
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_3 = __this->___OnInitialized_1;
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_4 = L_3;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = ___0_errors;
		SdkInitializedEventArgs_t78A87E4997F422DFF4923A44CDCAE8693AA21005* L_6 = (SdkInitializedEventArgs_t78A87E4997F422DFF4923A44CDCAE8693AA21005*)il2cpp_codegen_object_new(SdkInitializedEventArgs_t78A87E4997F422DFF4923A44CDCAE8693AA21005_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		SdkInitializedEventArgs__ctor_mF9B530F272105C78D11C9102B85803DF9E709D6C(L_6, L_5, NULL);
		NullCheck(G_B5_0);
		EventHandler_1_Invoke_m9E27442C9F90879AE025D20DE8242A6F35DCCB1A_inline(G_B5_0, __this, L_6, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.SdkProxyListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SdkProxyListener__ctor_m59BE89EBF2D9515DD89B0BB1638AB7BCEE38B658 (SdkProxyListener_t8B86FCD3D4F7D42A0DFF581EF5AF9B15F656D388* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean AppodealStack.Monetization.Common.AdLoadedEventArgs::get_IsPrecache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdLoadedEventArgs_get_IsPrecache_m7CE8FB752B6096497F42F143EAC45D1E64C81B4F (AdLoadedEventArgs_t2F7259B880EABD1911936EA4AFD0D6C50D1330FA* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPrecache { get; }
		bool L_0 = __this->___U3CIsPrecacheU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void AppodealStack.Monetization.Common.AdLoadedEventArgs::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoadedEventArgs__ctor_m3C2DB4FF366EA2675A8BB77B5FF94A9000B5CC83 (AdLoadedEventArgs_t2F7259B880EABD1911936EA4AFD0D6C50D1330FA* __this, bool ___0_isPrecache, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AdLoadedEventArgs(bool isPrecache)
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		// IsPrecache = isPrecache;
		bool L_0 = ___0_isPrecache;
		__this->___U3CIsPrecacheU3Ek__BackingField_1 = L_0;
		// }
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
// AppodealStack.Monetization.Common.AppodealAdRevenue AppodealStack.Monetization.Common.AdRevenueEventArgs::get_Ad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14* AdRevenueEventArgs_get_Ad_m233C3DCCBBE5B1D074F9DE4FBBB8B505337AB9B9 (AdRevenueEventArgs_t5197C274C4238877BFC0EB90043E3598CB867786* __this, const RuntimeMethod* method) 
{
	{
		// public AppodealAdRevenue Ad { get; }
		AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14* L_0 = __this->___U3CAdU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void AppodealStack.Monetization.Common.AdRevenueEventArgs::.ctor(AppodealStack.Monetization.Common.AppodealAdRevenue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdRevenueEventArgs__ctor_m64C0B7CEEC6D276851EFCBF10D1513A2A6002C36 (AdRevenueEventArgs_t5197C274C4238877BFC0EB90043E3598CB867786* __this, AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14* ___0_ad, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AdRevenueEventArgs(AppodealAdRevenue ad)
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		// Ad = ad;
		AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14* L_0 = ___0_ad;
		__this->___U3CAdU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAdU3Ek__BackingField_1), (void*)L_0);
		// }
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
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Sdk::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sdk__ctor_m26851BF388DF28A177FDC20EE9E48F7C98A607F1 (Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594* __this, const RuntimeMethod* method) 
{
	{
		// private Sdk() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// private Sdk() { }
		return;
	}
}
// AppodealStack.Monetization.Common.AppodealCallbacks/Sdk AppodealStack.Monetization.Common.AppodealCallbacks/Sdk::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594* Sdk_get_Instance_mE24B89FA7BD5811A2366FBD59E5770CBF80D124E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// if (_instance == null)
		il2cpp_codegen_runtime_class_init_inline(Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var);
		Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594* L_0 = ((Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_StaticFields*)il2cpp_codegen_static_fields_for(Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var))->____instance_0;
		if (L_0)
		{
			goto IL_003e;
		}
	}
	{
		// lock (Lock)
		il2cpp_codegen_runtime_class_init_inline(Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_StaticFields*)il2cpp_codegen_static_fields_for(Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var))->___Lock_1;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_003d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				// if (_instance == null)
				il2cpp_codegen_runtime_class_init_inline(Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var);
				Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594* L_5 = ((Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_StaticFields*)il2cpp_codegen_static_fields_for(Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var))->____instance_0;
				if (L_5)
				{
					goto IL_0032_1;
				}
			}
			{
				// _instance = new Sdk();
				Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594* L_6 = (Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594*)il2cpp_codegen_object_new(Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				Sdk__ctor_m26851BF388DF28A177FDC20EE9E48F7C98A607F1(L_6, NULL);
				il2cpp_codegen_runtime_class_init_inline(Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var);
				((Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_StaticFields*)il2cpp_codegen_static_fields_for(Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var))->____instance_0 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&((Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_StaticFields*)il2cpp_codegen_static_fields_for(Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var))->____instance_0), (void*)L_6);
				// _instance.InitializeCallbacks();
				Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594* L_7 = ((Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_StaticFields*)il2cpp_codegen_static_fields_for(Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var))->____instance_0;
				NullCheck(L_7);
				Sdk_InitializeCallbacks_mD4D31C741992483DA1126C0F1E9E619FE724AD51(L_7, NULL);
			}

IL_0032_1:
			{
				// }
				goto IL_003e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// return _instance;
		il2cpp_codegen_runtime_class_init_inline(Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var);
		Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594* L_8 = ((Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_StaticFields*)il2cpp_codegen_static_fields_for(Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var))->____instance_0;
		return L_8;
	}
}
// AppodealStack.Monetization.Common.ISdkProxyListener AppodealStack.Monetization.Common.AppodealCallbacks/Sdk::get_SdkEventsImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Sdk_get_SdkEventsImpl_m0087BF99F719EE6D7D1CA69AD18748175CE97123 (Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SdkProxyListener_t8B86FCD3D4F7D42A0DFF581EF5AF9B15F656D388_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// public ISdkProxyListener SdkEventsImpl => _sdkEventsImpl ?? (_sdkEventsImpl = new SdkProxyListener());
		RuntimeObject* L_0 = __this->____sdkEventsImpl_2;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		SdkProxyListener_t8B86FCD3D4F7D42A0DFF581EF5AF9B15F656D388* L_2 = (SdkProxyListener_t8B86FCD3D4F7D42A0DFF581EF5AF9B15F656D388*)il2cpp_codegen_object_new(SdkProxyListener_t8B86FCD3D4F7D42A0DFF581EF5AF9B15F656D388_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SdkProxyListener__ctor_m59BE89EBF2D9515DD89B0BB1638AB7BCEE38B658(L_2, NULL);
		SdkProxyListener_t8B86FCD3D4F7D42A0DFF581EF5AF9B15F656D388* L_3 = L_2;
		V_0 = L_3;
		__this->____sdkEventsImpl_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sdkEventsImpl_2), (void*)L_3);
		RuntimeObject* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Sdk::add_OnInitialized(System.EventHandler`1<AppodealStack.Monetization.Common.SdkInitializedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sdk_add_OnInitialized_m7267112BBA8E34B99F29F2766E3BB8BB89C182CD (EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* V_0 = NULL;
	EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* V_1 = NULL;
	EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var);
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_0 = ((Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_StaticFields*)il2cpp_codegen_static_fields_for(Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var))->___OnInitialized_3;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_2 = V_1;
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B*)Castclass((RuntimeObject*)L_4, EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var);
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_5 = V_2;
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_6 = V_1;
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B*>((&((Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_StaticFields*)il2cpp_codegen_static_fields_for(Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var))->___OnInitialized_3), L_5, L_6);
		V_0 = L_7;
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_8 = V_0;
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B*)L_8) == ((RuntimeObject*)(EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Sdk::remove_OnInitialized(System.EventHandler`1<AppodealStack.Monetization.Common.SdkInitializedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sdk_remove_OnInitialized_mF03A54BDBA111611C1F058365EFC3E18E2510231 (EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* V_0 = NULL;
	EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* V_1 = NULL;
	EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var);
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_0 = ((Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_StaticFields*)il2cpp_codegen_static_fields_for(Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var))->___OnInitialized_3;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_2 = V_1;
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B*)Castclass((RuntimeObject*)L_4, EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var);
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_5 = V_2;
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_6 = V_1;
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B*>((&((Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_StaticFields*)il2cpp_codegen_static_fields_for(Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var))->___OnInitialized_3), L_5, L_6);
		V_0 = L_7;
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_8 = V_0;
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B*)L_8) == ((RuntimeObject*)(EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Sdk::InitializeCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sdk_InitializeCallbacks_mD4D31C741992483DA1126C0F1E9E619FE724AD51 (Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISdkProxyListener_t9690157AB76C6FB197B67A06E92332B3806220DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sdk_U3CInitializeCallbacksU3Eb__11_0_m1C5B1E8EECDE6DCBDE0ADF07D75BD53D18B7AAEB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SdkEventsImpl.OnInitialized += (sender, args) => OnInitialized?.Invoke(this, args);
		RuntimeObject* L_0;
		L_0 = Sdk_get_SdkEventsImpl_m0087BF99F719EE6D7D1CA69AD18748175CE97123(__this, NULL);
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_1 = (EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B*)il2cpp_codegen_object_new(EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler_1__ctor_mA69FA904AF151EE3FC7A711CCB2E76EB34219FFC(L_1, __this, (intptr_t)((void*)Sdk_U3CInitializeCallbacksU3Eb__11_0_m1C5B1E8EECDE6DCBDE0ADF07D75BD53D18B7AAEB_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* >::Invoke(2 /* System.Void AppodealStack.Monetization.Common.ISdkProxyListener::add_OnInitialized(System.EventHandler`1<AppodealStack.Monetization.Common.SdkInitializedEventArgs>) */, ISdkProxyListener_t9690157AB76C6FB197B67A06E92332B3806220DD_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Sdk::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sdk__cctor_m40D9B4903EBCEF8A8DB1B2CFA59F3E2C8B039CE4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly object Lock = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_StaticFields*)il2cpp_codegen_static_fields_for(Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var))->___Lock_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_StaticFields*)il2cpp_codegen_static_fields_for(Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var))->___Lock_1), (void*)L_0);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Sdk::<InitializeCallbacks>b__11_0(System.Object,AppodealStack.Monetization.Common.SdkInitializedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sdk_U3CInitializeCallbacksU3Eb__11_0_m1C5B1E8EECDE6DCBDE0ADF07D75BD53D18B7AAEB (Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594* __this, RuntimeObject* ___0_sender, SdkInitializedEventArgs_t78A87E4997F422DFF4923A44CDCAE8693AA21005* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* G_B2_0 = NULL;
	EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* G_B1_0 = NULL;
	{
		// SdkEventsImpl.OnInitialized += (sender, args) => OnInitialized?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var);
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_0 = ((Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_StaticFields*)il2cpp_codegen_static_fields_for(Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var))->___OnInitialized_3;
		EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		SdkInitializedEventArgs_t78A87E4997F422DFF4923A44CDCAE8693AA21005* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_1_Invoke_m9E27442C9F90879AE025D20DE8242A6F35DCCB1A_inline(G_B2_0, __this, L_2, NULL);
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
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/AdRevenue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdRevenue__ctor_mE953106E1EE76640838E095FD5EA35F740ADC284 (AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402* __this, const RuntimeMethod* method) 
{
	{
		// private AdRevenue() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// private AdRevenue() { }
		return;
	}
}
// AppodealStack.Monetization.Common.AppodealCallbacks/AdRevenue AppodealStack.Monetization.Common.AppodealCallbacks/AdRevenue::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402* AdRevenue_get_Instance_m3454295A18A935C02679152B254E3B95F0925650 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// if (_instance == null)
		il2cpp_codegen_runtime_class_init_inline(AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var);
		AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402* L_0 = ((AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_StaticFields*)il2cpp_codegen_static_fields_for(AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var))->____instance_0;
		if (L_0)
		{
			goto IL_003e;
		}
	}
	{
		// lock (Lock)
		il2cpp_codegen_runtime_class_init_inline(AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_StaticFields*)il2cpp_codegen_static_fields_for(AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var))->___Lock_1;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_003d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				// if (_instance == null)
				il2cpp_codegen_runtime_class_init_inline(AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var);
				AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402* L_5 = ((AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_StaticFields*)il2cpp_codegen_static_fields_for(AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var))->____instance_0;
				if (L_5)
				{
					goto IL_0032_1;
				}
			}
			{
				// _instance = new AdRevenue();
				AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402* L_6 = (AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402*)il2cpp_codegen_object_new(AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				AdRevenue__ctor_mE953106E1EE76640838E095FD5EA35F740ADC284(L_6, NULL);
				il2cpp_codegen_runtime_class_init_inline(AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var);
				((AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_StaticFields*)il2cpp_codegen_static_fields_for(AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var))->____instance_0 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&((AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_StaticFields*)il2cpp_codegen_static_fields_for(AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var))->____instance_0), (void*)L_6);
				// _instance.InitializeCallbacks();
				AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402* L_7 = ((AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_StaticFields*)il2cpp_codegen_static_fields_for(AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var))->____instance_0;
				NullCheck(L_7);
				AdRevenue_InitializeCallbacks_mAD40F269F18DFB3F795ACB062161166ACDF57324(L_7, NULL);
			}

IL_0032_1:
			{
				// }
				goto IL_003e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// return _instance;
		il2cpp_codegen_runtime_class_init_inline(AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var);
		AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402* L_8 = ((AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_StaticFields*)il2cpp_codegen_static_fields_for(AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var))->____instance_0;
		return L_8;
	}
}
// AppodealStack.Monetization.Common.IAdRevenueProxyListener AppodealStack.Monetization.Common.AppodealCallbacks/AdRevenue::get_AdRevenueEventsImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AdRevenue_get_AdRevenueEventsImpl_m6F986C339AF944BBA73CA81FA7F3D5008618262B (AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdRevenueProxyListener_t30DC0858DAEB497DB660FC8E23E33FAE95D96BD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// public IAdRevenueProxyListener AdRevenueEventsImpl => _adRevenueEventsImpl ?? (_adRevenueEventsImpl = new AdRevenueProxyListener());
		RuntimeObject* L_0 = __this->____adRevenueEventsImpl_2;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		AdRevenueProxyListener_t30DC0858DAEB497DB660FC8E23E33FAE95D96BD8* L_2 = (AdRevenueProxyListener_t30DC0858DAEB497DB660FC8E23E33FAE95D96BD8*)il2cpp_codegen_object_new(AdRevenueProxyListener_t30DC0858DAEB497DB660FC8E23E33FAE95D96BD8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AdRevenueProxyListener__ctor_m7E92F82090CA08DE1C74EE7886AFD69AF32E83E9(L_2, NULL);
		AdRevenueProxyListener_t30DC0858DAEB497DB660FC8E23E33FAE95D96BD8* L_3 = L_2;
		V_0 = L_3;
		__this->____adRevenueEventsImpl_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____adRevenueEventsImpl_2), (void*)L_3);
		RuntimeObject* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/AdRevenue::add_OnReceived(System.EventHandler`1<AppodealStack.Monetization.Common.AdRevenueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdRevenue_add_OnReceived_mEBC20181887BD92B86BFB52C3480170A8EE584C0 (EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* V_0 = NULL;
	EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* V_1 = NULL;
	EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var);
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_0 = ((AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_StaticFields*)il2cpp_codegen_static_fields_for(AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var))->___OnReceived_3;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_2 = V_1;
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308*)Castclass((RuntimeObject*)L_4, EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var);
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_5 = V_2;
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_6 = V_1;
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308*>((&((AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_StaticFields*)il2cpp_codegen_static_fields_for(AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var))->___OnReceived_3), L_5, L_6);
		V_0 = L_7;
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_8 = V_0;
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308*)L_8) == ((RuntimeObject*)(EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/AdRevenue::remove_OnReceived(System.EventHandler`1<AppodealStack.Monetization.Common.AdRevenueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdRevenue_remove_OnReceived_m8E3ECCA64CDFEB6F2188F85A47785B0CCB8C472E (EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* V_0 = NULL;
	EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* V_1 = NULL;
	EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var);
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_0 = ((AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_StaticFields*)il2cpp_codegen_static_fields_for(AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var))->___OnReceived_3;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_2 = V_1;
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308*)Castclass((RuntimeObject*)L_4, EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var);
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_5 = V_2;
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_6 = V_1;
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308*>((&((AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_StaticFields*)il2cpp_codegen_static_fields_for(AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var))->___OnReceived_3), L_5, L_6);
		V_0 = L_7;
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_8 = V_0;
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308*)L_8) == ((RuntimeObject*)(EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/AdRevenue::InitializeCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdRevenue_InitializeCallbacks_mAD40F269F18DFB3F795ACB062161166ACDF57324 (AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdRevenue_U3CInitializeCallbacksU3Eb__11_0_mD1DDDF7204FD177F64B7F2FF525A3BC4AB6A6DB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAdRevenueProxyListener_tD175694515923B973B749A368207DE6973EA3FFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AdRevenueEventsImpl.OnReceived += (sender, args) => OnReceived?.Invoke(this, args);
		RuntimeObject* L_0;
		L_0 = AdRevenue_get_AdRevenueEventsImpl_m6F986C339AF944BBA73CA81FA7F3D5008618262B(__this, NULL);
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_1 = (EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308*)il2cpp_codegen_object_new(EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler_1__ctor_mD1C691C56DF522A687302BA9B8A6FFE1FC3BF1CE(L_1, __this, (intptr_t)((void*)AdRevenue_U3CInitializeCallbacksU3Eb__11_0_mD1DDDF7204FD177F64B7F2FF525A3BC4AB6A6DB4_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* >::Invoke(2 /* System.Void AppodealStack.Monetization.Common.IAdRevenueProxyListener::add_OnReceived(System.EventHandler`1<AppodealStack.Monetization.Common.AdRevenueEventArgs>) */, IAdRevenueProxyListener_tD175694515923B973B749A368207DE6973EA3FFE_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/AdRevenue::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdRevenue__cctor_m3BC290447F0D60907A4EA848B8EA246F65CDE8E0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly object Lock = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_StaticFields*)il2cpp_codegen_static_fields_for(AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var))->___Lock_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_StaticFields*)il2cpp_codegen_static_fields_for(AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var))->___Lock_1), (void*)L_0);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/AdRevenue::<InitializeCallbacks>b__11_0(System.Object,AppodealStack.Monetization.Common.AdRevenueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdRevenue_U3CInitializeCallbacksU3Eb__11_0_mD1DDDF7204FD177F64B7F2FF525A3BC4AB6A6DB4 (AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402* __this, RuntimeObject* ___0_sender, AdRevenueEventArgs_t5197C274C4238877BFC0EB90043E3598CB867786* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* G_B2_0 = NULL;
	EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* G_B1_0 = NULL;
	{
		// AdRevenueEventsImpl.OnReceived += (sender, args) => OnReceived?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var);
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_0 = ((AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_StaticFields*)il2cpp_codegen_static_fields_for(AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var))->___OnReceived_3;
		EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		AdRevenueEventArgs_t5197C274C4238877BFC0EB90043E3598CB867786* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_1_Invoke_m12F3786E087ECB3C4EBF1FB48C3BFBA94041D611_inline(G_B2_0, __this, L_2, NULL);
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
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/InAppPurchase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppPurchase__ctor_mA933AC23CBCCF50BA2AD7D5B4F8823ACB9485EB2 (InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097* __this, const RuntimeMethod* method) 
{
	{
		// private InAppPurchase() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// private InAppPurchase() { }
		return;
	}
}
// AppodealStack.Monetization.Common.AppodealCallbacks/InAppPurchase AppodealStack.Monetization.Common.AppodealCallbacks/InAppPurchase::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097* InAppPurchase_get_Instance_m3BAC92175BEECD3C6ED6ABD026E216310CFA7DEE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// if (_instance == null)
		il2cpp_codegen_runtime_class_init_inline(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var);
		InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097* L_0 = ((InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_StaticFields*)il2cpp_codegen_static_fields_for(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var))->____instance_0;
		if (L_0)
		{
			goto IL_003e;
		}
	}
	{
		// lock (Lock)
		il2cpp_codegen_runtime_class_init_inline(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_StaticFields*)il2cpp_codegen_static_fields_for(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var))->___Lock_1;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_003d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				// if (_instance == null)
				il2cpp_codegen_runtime_class_init_inline(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var);
				InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097* L_5 = ((InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_StaticFields*)il2cpp_codegen_static_fields_for(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var))->____instance_0;
				if (L_5)
				{
					goto IL_0032_1;
				}
			}
			{
				// _instance = new InAppPurchase();
				InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097* L_6 = (InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097*)il2cpp_codegen_object_new(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				InAppPurchase__ctor_mA933AC23CBCCF50BA2AD7D5B4F8823ACB9485EB2(L_6, NULL);
				il2cpp_codegen_runtime_class_init_inline(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var);
				((InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_StaticFields*)il2cpp_codegen_static_fields_for(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var))->____instance_0 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&((InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_StaticFields*)il2cpp_codegen_static_fields_for(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var))->____instance_0), (void*)L_6);
				// _instance.InitializeCallbacks();
				InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097* L_7 = ((InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_StaticFields*)il2cpp_codegen_static_fields_for(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var))->____instance_0;
				NullCheck(L_7);
				InAppPurchase_InitializeCallbacks_m0342EAC32414D8BFCF727F33D51CD43361349343(L_7, NULL);
			}

IL_0032_1:
			{
				// }
				goto IL_003e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// return _instance;
		il2cpp_codegen_runtime_class_init_inline(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var);
		InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097* L_8 = ((InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_StaticFields*)il2cpp_codegen_static_fields_for(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var))->____instance_0;
		return L_8;
	}
}
// AppodealStack.Monetization.Common.IInAppPurchaseValidationProxyListener AppodealStack.Monetization.Common.AppodealCallbacks/InAppPurchase::get_PurchaseEventsImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InAppPurchase_get_PurchaseEventsImpl_m2D2762B5118F9D3DDE336D24852A307DDCE33E0E (InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InAppPurchaseValidationProxyListener_tEF4A4E377F15B2E799679C630E558BCEA46D3685_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// public IInAppPurchaseValidationProxyListener PurchaseEventsImpl => _purchaseEventsImpl ?? (_purchaseEventsImpl = new InAppPurchaseValidationProxyListener());
		RuntimeObject* L_0 = __this->____purchaseEventsImpl_2;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		InAppPurchaseValidationProxyListener_tEF4A4E377F15B2E799679C630E558BCEA46D3685* L_2 = (InAppPurchaseValidationProxyListener_tEF4A4E377F15B2E799679C630E558BCEA46D3685*)il2cpp_codegen_object_new(InAppPurchaseValidationProxyListener_tEF4A4E377F15B2E799679C630E558BCEA46D3685_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InAppPurchaseValidationProxyListener__ctor_mD005B823FCC966869F74A7787511E2D5C9331A24(L_2, NULL);
		InAppPurchaseValidationProxyListener_tEF4A4E377F15B2E799679C630E558BCEA46D3685* L_3 = L_2;
		V_0 = L_3;
		__this->____purchaseEventsImpl_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____purchaseEventsImpl_2), (void*)L_3);
		RuntimeObject* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/InAppPurchase::add_OnValidationSucceeded(System.EventHandler`1<AppodealStack.Monetization.Common.InAppPurchaseEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppPurchase_add_OnValidationSucceeded_m071C09B462D42273A3C286B33092052E8C460A9A (EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* V_0 = NULL;
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* V_1 = NULL;
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var);
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_0 = ((InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_StaticFields*)il2cpp_codegen_static_fields_for(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var))->___OnValidationSucceeded_3;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_2 = V_1;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*)Castclass((RuntimeObject*)L_4, EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var);
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_5 = V_2;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_6 = V_1;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*>((&((InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_StaticFields*)il2cpp_codegen_static_fields_for(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var))->___OnValidationSucceeded_3), L_5, L_6);
		V_0 = L_7;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_8 = V_0;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*)L_8) == ((RuntimeObject*)(EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/InAppPurchase::remove_OnValidationSucceeded(System.EventHandler`1<AppodealStack.Monetization.Common.InAppPurchaseEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppPurchase_remove_OnValidationSucceeded_m616D0A048593256C18D33CC14C9208EE41058DD6 (EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* V_0 = NULL;
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* V_1 = NULL;
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var);
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_0 = ((InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_StaticFields*)il2cpp_codegen_static_fields_for(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var))->___OnValidationSucceeded_3;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_2 = V_1;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*)Castclass((RuntimeObject*)L_4, EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var);
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_5 = V_2;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_6 = V_1;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*>((&((InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_StaticFields*)il2cpp_codegen_static_fields_for(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var))->___OnValidationSucceeded_3), L_5, L_6);
		V_0 = L_7;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_8 = V_0;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*)L_8) == ((RuntimeObject*)(EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/InAppPurchase::add_OnValidationFailed(System.EventHandler`1<AppodealStack.Monetization.Common.InAppPurchaseEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppPurchase_add_OnValidationFailed_m4538B768592365819BE4AFAD990DA260D85D5917 (EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* V_0 = NULL;
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* V_1 = NULL;
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var);
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_0 = ((InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_StaticFields*)il2cpp_codegen_static_fields_for(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var))->___OnValidationFailed_4;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_2 = V_1;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*)Castclass((RuntimeObject*)L_4, EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var);
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_5 = V_2;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_6 = V_1;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*>((&((InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_StaticFields*)il2cpp_codegen_static_fields_for(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var))->___OnValidationFailed_4), L_5, L_6);
		V_0 = L_7;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_8 = V_0;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*)L_8) == ((RuntimeObject*)(EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/InAppPurchase::remove_OnValidationFailed(System.EventHandler`1<AppodealStack.Monetization.Common.InAppPurchaseEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppPurchase_remove_OnValidationFailed_mD51E2DD3E4F18EA827A3542E9B2986B89C3BA70B (EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* V_0 = NULL;
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* V_1 = NULL;
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var);
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_0 = ((InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_StaticFields*)il2cpp_codegen_static_fields_for(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var))->___OnValidationFailed_4;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_2 = V_1;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*)Castclass((RuntimeObject*)L_4, EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var);
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_5 = V_2;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_6 = V_1;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*>((&((InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_StaticFields*)il2cpp_codegen_static_fields_for(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var))->___OnValidationFailed_4), L_5, L_6);
		V_0 = L_7;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_8 = V_0;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*)L_8) == ((RuntimeObject*)(EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/InAppPurchase::InitializeCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppPurchase_InitializeCallbacks_m0342EAC32414D8BFCF727F33D51CD43361349343 (InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInAppPurchaseValidationProxyListener_t410B2CB29C4A7016D9DA879C6B2014AAF1EDBCFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InAppPurchase_U3CInitializeCallbacksU3Eb__14_0_m25E1591B91B8CB3533F5063C5CD82B225292FA44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InAppPurchase_U3CInitializeCallbacksU3Eb__14_1_m76FD9FAE873E839D4C0974B668C9528B36EFF1EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PurchaseEventsImpl.OnValidationSucceeded += (sender, args) => OnValidationSucceeded?.Invoke(this, args);
		RuntimeObject* L_0;
		L_0 = InAppPurchase_get_PurchaseEventsImpl_m2D2762B5118F9D3DDE336D24852A307DDCE33E0E(__this, NULL);
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_1 = (EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*)il2cpp_codegen_object_new(EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler_1__ctor_mC9C057645F081D90D9D8AB68A28A5E28144A131E(L_1, __this, (intptr_t)((void*)InAppPurchase_U3CInitializeCallbacksU3Eb__14_0_m25E1591B91B8CB3533F5063C5CD82B225292FA44_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* >::Invoke(2 /* System.Void AppodealStack.Monetization.Common.IInAppPurchaseValidationProxyListener::add_OnValidationSucceeded(System.EventHandler`1<AppodealStack.Monetization.Common.InAppPurchaseEventArgs>) */, IInAppPurchaseValidationProxyListener_t410B2CB29C4A7016D9DA879C6B2014AAF1EDBCFA_il2cpp_TypeInfo_var, L_0, L_1);
		// PurchaseEventsImpl.OnValidationFailed += (sender, args) => OnValidationFailed?.Invoke(this, args);
		RuntimeObject* L_2;
		L_2 = InAppPurchase_get_PurchaseEventsImpl_m2D2762B5118F9D3DDE336D24852A307DDCE33E0E(__this, NULL);
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_3 = (EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6*)il2cpp_codegen_object_new(EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EventHandler_1__ctor_mC9C057645F081D90D9D8AB68A28A5E28144A131E(L_3, __this, (intptr_t)((void*)InAppPurchase_U3CInitializeCallbacksU3Eb__14_1_m76FD9FAE873E839D4C0974B668C9528B36EFF1EB_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* >::Invoke(4 /* System.Void AppodealStack.Monetization.Common.IInAppPurchaseValidationProxyListener::add_OnValidationFailed(System.EventHandler`1<AppodealStack.Monetization.Common.InAppPurchaseEventArgs>) */, IInAppPurchaseValidationProxyListener_t410B2CB29C4A7016D9DA879C6B2014AAF1EDBCFA_il2cpp_TypeInfo_var, L_2, L_3);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/InAppPurchase::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppPurchase__cctor_m7A1A3F4A9BDE8CB3D3B59A86D23C51C2036BCCCF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly object Lock = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_StaticFields*)il2cpp_codegen_static_fields_for(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var))->___Lock_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_StaticFields*)il2cpp_codegen_static_fields_for(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var))->___Lock_1), (void*)L_0);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/InAppPurchase::<InitializeCallbacks>b__14_0(System.Object,AppodealStack.Monetization.Common.InAppPurchaseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppPurchase_U3CInitializeCallbacksU3Eb__14_0_m25E1591B91B8CB3533F5063C5CD82B225292FA44 (InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097* __this, RuntimeObject* ___0_sender, InAppPurchaseEventArgs_t78C43610CE4ACAA37E1588542415921FCE470C73* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* G_B2_0 = NULL;
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* G_B1_0 = NULL;
	{
		// PurchaseEventsImpl.OnValidationSucceeded += (sender, args) => OnValidationSucceeded?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var);
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_0 = ((InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_StaticFields*)il2cpp_codegen_static_fields_for(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var))->___OnValidationSucceeded_3;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		InAppPurchaseEventArgs_t78C43610CE4ACAA37E1588542415921FCE470C73* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_1_Invoke_m64FD3E3EF117F559A56D7A2541DFC7FD072231DB_inline(G_B2_0, __this, L_2, NULL);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/InAppPurchase::<InitializeCallbacks>b__14_1(System.Object,AppodealStack.Monetization.Common.InAppPurchaseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppPurchase_U3CInitializeCallbacksU3Eb__14_1_m76FD9FAE873E839D4C0974B668C9528B36EFF1EB (InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097* __this, RuntimeObject* ___0_sender, InAppPurchaseEventArgs_t78C43610CE4ACAA37E1588542415921FCE470C73* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* G_B2_0 = NULL;
	EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* G_B1_0 = NULL;
	{
		// PurchaseEventsImpl.OnValidationFailed += (sender, args) => OnValidationFailed?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var);
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_0 = ((InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_StaticFields*)il2cpp_codegen_static_fields_for(InAppPurchase_tA087782279F4DC2D3B750FB14B95C07587151097_il2cpp_TypeInfo_var))->___OnValidationFailed_4;
		EventHandler_1_tC369B49AD5D929A8B71A8C1E6FE93C6A66E25FA6* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		InAppPurchaseEventArgs_t78C43610CE4ACAA37E1588542415921FCE470C73* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_1_Invoke_m64FD3E3EF117F559A56D7A2541DFC7FD072231DB_inline(G_B2_0, __this, L_2, NULL);
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
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mrec__ctor_mAF44270F15AFA83E91A9D800C45199E2890321DF (Mrec_t843799EFC43FACAD42BCB139872F609137368D0A* __this, const RuntimeMethod* method) 
{
	{
		// private Mrec() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// private Mrec() { }
		return;
	}
}
// AppodealStack.Monetization.Common.AppodealCallbacks/Mrec AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mrec_t843799EFC43FACAD42BCB139872F609137368D0A* Mrec_get_Instance_m3DD6B802DDCE547D59B3354731E317F6FFC1387A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// if (_instance == null)
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		Mrec_t843799EFC43FACAD42BCB139872F609137368D0A* L_0 = ((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->____instance_0;
		if (L_0)
		{
			goto IL_003e;
		}
	}
	{
		// lock (Lock)
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___Lock_1;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_003d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				// if (_instance == null)
				il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
				Mrec_t843799EFC43FACAD42BCB139872F609137368D0A* L_5 = ((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->____instance_0;
				if (L_5)
				{
					goto IL_0032_1;
				}
			}
			{
				// _instance = new Mrec();
				Mrec_t843799EFC43FACAD42BCB139872F609137368D0A* L_6 = (Mrec_t843799EFC43FACAD42BCB139872F609137368D0A*)il2cpp_codegen_object_new(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				Mrec__ctor_mAF44270F15AFA83E91A9D800C45199E2890321DF(L_6, NULL);
				il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
				((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->____instance_0 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->____instance_0), (void*)L_6);
				// _instance.InitializeCallbacks();
				Mrec_t843799EFC43FACAD42BCB139872F609137368D0A* L_7 = ((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->____instance_0;
				NullCheck(L_7);
				Mrec_InitializeCallbacks_m663CBFF8B3CF7FD9CD7064373B3A06183DEC3E31(L_7, NULL);
			}

IL_0032_1:
			{
				// }
				goto IL_003e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// return _instance;
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		Mrec_t843799EFC43FACAD42BCB139872F609137368D0A* L_8 = ((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->____instance_0;
		return L_8;
	}
}
// AppodealStack.Monetization.Common.IMrecAdProxyListener AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::get_MrecAdEventsImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Mrec_get_MrecAdEventsImpl_mE5687CD4C9AA551E067880A7916AFCC54F1CA3E6 (Mrec_t843799EFC43FACAD42BCB139872F609137368D0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// public IMrecAdProxyListener MrecAdEventsImpl => _mrecAdEventsImpl ?? (_mrecAdEventsImpl = new MrecAdProxyListener());
		RuntimeObject* L_0 = __this->____mrecAdEventsImpl_2;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682* L_2 = (MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682*)il2cpp_codegen_object_new(MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MrecAdProxyListener__ctor_mC38BE349BE97B0C0D5A277B7DD6957FD1D14246A(L_2, NULL);
		MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682* L_3 = L_2;
		V_0 = L_3;
		__this->____mrecAdEventsImpl_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mrecAdEventsImpl_2), (void*)L_3);
		RuntimeObject* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::add_OnLoaded(System.EventHandler`1<AppodealStack.Monetization.Common.AdLoadedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mrec_add_OnLoaded_m9B85F2D04867FF8BDDEACA78A67431044E120F96 (EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_0 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_1 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_0 = ((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnLoaded_3;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_2 = V_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)Castclass((RuntimeObject*)L_4, EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_5 = V_2;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_6 = V_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*>((&((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnLoaded_3), L_5, L_6);
		V_0 = L_7;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_8 = V_0;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)L_8) == ((RuntimeObject*)(EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::remove_OnLoaded(System.EventHandler`1<AppodealStack.Monetization.Common.AdLoadedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mrec_remove_OnLoaded_m8528FCE8E0543B2A022391F21484C57D3DB04619 (EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_0 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_1 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_0 = ((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnLoaded_3;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_2 = V_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)Castclass((RuntimeObject*)L_4, EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_5 = V_2;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_6 = V_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*>((&((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnLoaded_3), L_5, L_6);
		V_0 = L_7;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_8 = V_0;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)L_8) == ((RuntimeObject*)(EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::add_OnFailedToLoad(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mrec_add_OnFailedToLoad_m89228A155304A7D100A4390887F5F67B7403E406 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnFailedToLoad_4;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnFailedToLoad_4), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::remove_OnFailedToLoad(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mrec_remove_OnFailedToLoad_m9B91D2B36D6ADB9798C1EB8BC4C5FF61CD4F3DC9 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnFailedToLoad_4;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnFailedToLoad_4), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::add_OnShown(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mrec_add_OnShown_mE6B9FE931A3848E00A7957E25FEAAD158BFD920B (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnShown_5;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnShown_5), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::remove_OnShown(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mrec_remove_OnShown_mB0981D9AF66CF23726900F10D498D05774D10687 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnShown_5;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnShown_5), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::add_OnShowFailed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mrec_add_OnShowFailed_mC99ED6FEE702CE892571B5A2E1AA5910C0C32506 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnShowFailed_6;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnShowFailed_6), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::remove_OnShowFailed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mrec_remove_OnShowFailed_mA530D55CA531A2E4C52B4FF874157485B5FDE1E8 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnShowFailed_6;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnShowFailed_6), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::add_OnClicked(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mrec_add_OnClicked_mF48BC080542D3CF515E8FFFE0F4359879A542465 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnClicked_7;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnClicked_7), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::remove_OnClicked(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mrec_remove_OnClicked_mBAEA655F590730A9E77F07772225A85B062349A7 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnClicked_7;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnClicked_7), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::add_OnExpired(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mrec_add_OnExpired_m313E2EC5D546D7BA7994CB01A722499C88B32AAE (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnExpired_8;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnExpired_8), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::remove_OnExpired(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mrec_remove_OnExpired_m9DCC3E333E628BDA4D3A734817097BBBBA5C35AD (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnExpired_8;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnExpired_8), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::InitializeCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mrec_InitializeCallbacks_m663CBFF8B3CF7FD9CD7064373B3A06183DEC3E31 (Mrec_t843799EFC43FACAD42BCB139872F609137368D0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMrecAdProxyListener_tB1A11CCF8E542F43EDD41424240E33660E036083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mrec_U3CInitializeCallbacksU3Eb__26_0_mE2076DDBE675E42D1B066E46F27C42F3C3E40980_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mrec_U3CInitializeCallbacksU3Eb__26_1_m13E6EFB12304ED7318B89B847587E0D9A0E4E13B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mrec_U3CInitializeCallbacksU3Eb__26_2_m364AD00656032EF7E559459ABFB7CBB94D845685_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mrec_U3CInitializeCallbacksU3Eb__26_3_m56849A82AD6C6A3BEB8CD9BD136DBC7223DD3988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mrec_U3CInitializeCallbacksU3Eb__26_4_m1FDE500C6101F4CD12AD445FBD305EE500FD09B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mrec_U3CInitializeCallbacksU3Eb__26_5_mF4400BC100AB9CA0002D569B0E1FCCA0D6702185_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MrecAdEventsImpl.OnLoaded += (sender, args) => OnLoaded?.Invoke(this, args);
		RuntimeObject* L_0;
		L_0 = Mrec_get_MrecAdEventsImpl_mE5687CD4C9AA551E067880A7916AFCC54F1CA3E6(__this, NULL);
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_1 = (EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)il2cpp_codegen_object_new(EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler_1__ctor_m52FC96CD3492CAAFE02D597B18D7702F14DDE1F0(L_1, __this, (intptr_t)((void*)Mrec_U3CInitializeCallbacksU3Eb__26_0_mE2076DDBE675E42D1B066E46F27C42F3C3E40980_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* >::Invoke(2 /* System.Void AppodealStack.Monetization.Common.IMrecAdProxyListener::add_OnLoaded(System.EventHandler`1<AppodealStack.Monetization.Common.AdLoadedEventArgs>) */, IMrecAdProxyListener_tB1A11CCF8E542F43EDD41424240E33660E036083_il2cpp_TypeInfo_var, L_0, L_1);
		// MrecAdEventsImpl.OnFailedToLoad += (sender, args) => OnFailedToLoad?.Invoke(this, args);
		RuntimeObject* L_2;
		L_2 = Mrec_get_MrecAdEventsImpl_mE5687CD4C9AA551E067880A7916AFCC54F1CA3E6(__this, NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_3, __this, (intptr_t)((void*)Mrec_U3CInitializeCallbacksU3Eb__26_1_m13E6EFB12304ED7318B89B847587E0D9A0E4E13B_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* >::Invoke(4 /* System.Void AppodealStack.Monetization.Common.IMrecAdProxyListener::add_OnFailedToLoad(System.EventHandler) */, IMrecAdProxyListener_tB1A11CCF8E542F43EDD41424240E33660E036083_il2cpp_TypeInfo_var, L_2, L_3);
		// MrecAdEventsImpl.OnShown += (sender, args) => OnShown?.Invoke(this, args);
		RuntimeObject* L_4;
		L_4 = Mrec_get_MrecAdEventsImpl_mE5687CD4C9AA551E067880A7916AFCC54F1CA3E6(__this, NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_5, __this, (intptr_t)((void*)Mrec_U3CInitializeCallbacksU3Eb__26_2_m364AD00656032EF7E559459ABFB7CBB94D845685_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* >::Invoke(6 /* System.Void AppodealStack.Monetization.Common.IMrecAdProxyListener::add_OnShown(System.EventHandler) */, IMrecAdProxyListener_tB1A11CCF8E542F43EDD41424240E33660E036083_il2cpp_TypeInfo_var, L_4, L_5);
		// MrecAdEventsImpl.OnShowFailed += (sender, args) => OnShowFailed?.Invoke(this, args);
		RuntimeObject* L_6;
		L_6 = Mrec_get_MrecAdEventsImpl_mE5687CD4C9AA551E067880A7916AFCC54F1CA3E6(__this, NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_7, __this, (intptr_t)((void*)Mrec_U3CInitializeCallbacksU3Eb__26_3_m56849A82AD6C6A3BEB8CD9BD136DBC7223DD3988_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* >::Invoke(8 /* System.Void AppodealStack.Monetization.Common.IMrecAdProxyListener::add_OnShowFailed(System.EventHandler) */, IMrecAdProxyListener_tB1A11CCF8E542F43EDD41424240E33660E036083_il2cpp_TypeInfo_var, L_6, L_7);
		// MrecAdEventsImpl.OnClicked += (sender, args) => OnClicked?.Invoke(this, args);
		RuntimeObject* L_8;
		L_8 = Mrec_get_MrecAdEventsImpl_mE5687CD4C9AA551E067880A7916AFCC54F1CA3E6(__this, NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_9, __this, (intptr_t)((void*)Mrec_U3CInitializeCallbacksU3Eb__26_4_m1FDE500C6101F4CD12AD445FBD305EE500FD09B1_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* >::Invoke(10 /* System.Void AppodealStack.Monetization.Common.IMrecAdProxyListener::add_OnClicked(System.EventHandler) */, IMrecAdProxyListener_tB1A11CCF8E542F43EDD41424240E33660E036083_il2cpp_TypeInfo_var, L_8, L_9);
		// MrecAdEventsImpl.OnExpired += (sender, args) => OnExpired?.Invoke(this, args);
		RuntimeObject* L_10;
		L_10 = Mrec_get_MrecAdEventsImpl_mE5687CD4C9AA551E067880A7916AFCC54F1CA3E6(__this, NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_11 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_11, __this, (intptr_t)((void*)Mrec_U3CInitializeCallbacksU3Eb__26_5_mF4400BC100AB9CA0002D569B0E1FCCA0D6702185_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* >::Invoke(12 /* System.Void AppodealStack.Monetization.Common.IMrecAdProxyListener::add_OnExpired(System.EventHandler) */, IMrecAdProxyListener_tB1A11CCF8E542F43EDD41424240E33660E036083_il2cpp_TypeInfo_var, L_10, L_11);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mrec__cctor_mC0541815CA482CBF110DB18CC7F273F0F3544E01 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly object Lock = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___Lock_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___Lock_1), (void*)L_0);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::<InitializeCallbacks>b__26_0(System.Object,AppodealStack.Monetization.Common.AdLoadedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mrec_U3CInitializeCallbacksU3Eb__26_0_mE2076DDBE675E42D1B066E46F27C42F3C3E40980 (Mrec_t843799EFC43FACAD42BCB139872F609137368D0A* __this, RuntimeObject* ___0_sender, AdLoadedEventArgs_t2F7259B880EABD1911936EA4AFD0D6C50D1330FA* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* G_B2_0 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* G_B1_0 = NULL;
	{
		// MrecAdEventsImpl.OnLoaded += (sender, args) => OnLoaded?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_0 = ((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnLoaded_3;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		AdLoadedEventArgs_t2F7259B880EABD1911936EA4AFD0D6C50D1330FA* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_1_Invoke_m0EC2B95824927C7CB96757DA573935AD2EFA990A_inline(G_B2_0, __this, L_2, NULL);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::<InitializeCallbacks>b__26_1(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mrec_U3CInitializeCallbacksU3Eb__26_1_m13E6EFB12304ED7318B89B847587E0D9A0E4E13B (Mrec_t843799EFC43FACAD42BCB139872F609137368D0A* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B1_0 = NULL;
	{
		// MrecAdEventsImpl.OnFailedToLoad += (sender, args) => OnFailedToLoad?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnFailedToLoad_4;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B2_0, __this, L_2, NULL);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::<InitializeCallbacks>b__26_2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mrec_U3CInitializeCallbacksU3Eb__26_2_m364AD00656032EF7E559459ABFB7CBB94D845685 (Mrec_t843799EFC43FACAD42BCB139872F609137368D0A* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B1_0 = NULL;
	{
		// MrecAdEventsImpl.OnShown += (sender, args) => OnShown?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnShown_5;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B2_0, __this, L_2, NULL);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::<InitializeCallbacks>b__26_3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mrec_U3CInitializeCallbacksU3Eb__26_3_m56849A82AD6C6A3BEB8CD9BD136DBC7223DD3988 (Mrec_t843799EFC43FACAD42BCB139872F609137368D0A* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B1_0 = NULL;
	{
		// MrecAdEventsImpl.OnShowFailed += (sender, args) => OnShowFailed?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnShowFailed_6;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B2_0, __this, L_2, NULL);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::<InitializeCallbacks>b__26_4(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mrec_U3CInitializeCallbacksU3Eb__26_4_m1FDE500C6101F4CD12AD445FBD305EE500FD09B1 (Mrec_t843799EFC43FACAD42BCB139872F609137368D0A* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B1_0 = NULL;
	{
		// MrecAdEventsImpl.OnClicked += (sender, args) => OnClicked?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnClicked_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B2_0, __this, L_2, NULL);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::<InitializeCallbacks>b__26_5(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mrec_U3CInitializeCallbacksU3Eb__26_5_mF4400BC100AB9CA0002D569B0E1FCCA0D6702185 (Mrec_t843799EFC43FACAD42BCB139872F609137368D0A* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B1_0 = NULL;
	{
		// MrecAdEventsImpl.OnExpired += (sender, args) => OnExpired?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_StaticFields*)il2cpp_codegen_static_fields_for(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var))->___OnExpired_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B2_0, __this, L_2, NULL);
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
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Banner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner__ctor_mFB66AF5BD263764360FE189D2E280C545646087C (Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9* __this, const RuntimeMethod* method) 
{
	{
		// private Banner() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// private Banner() { }
		return;
	}
}
// AppodealStack.Monetization.Common.AppodealCallbacks/Banner AppodealStack.Monetization.Common.AppodealCallbacks/Banner::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9* Banner_get_Instance_m98C3F0BF91B14703B4F483415E7BC5EE246A9326 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// if (_instance == null)
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9* L_0 = ((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->____instance_0;
		if (L_0)
		{
			goto IL_003e;
		}
	}
	{
		// lock (Lock)
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___Lock_1;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_003d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				// if (_instance == null)
				il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
				Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9* L_5 = ((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->____instance_0;
				if (L_5)
				{
					goto IL_0032_1;
				}
			}
			{
				// _instance = new Banner();
				Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9* L_6 = (Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9*)il2cpp_codegen_object_new(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				Banner__ctor_mFB66AF5BD263764360FE189D2E280C545646087C(L_6, NULL);
				il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
				((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->____instance_0 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->____instance_0), (void*)L_6);
				// _instance.InitializeCallbacks();
				Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9* L_7 = ((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->____instance_0;
				NullCheck(L_7);
				Banner_InitializeCallbacks_m81D466DE94BADA986B6CDAB126A61E9F38790245(L_7, NULL);
			}

IL_0032_1:
			{
				// }
				goto IL_003e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// return _instance;
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9* L_8 = ((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->____instance_0;
		return L_8;
	}
}
// AppodealStack.Monetization.Common.IBannerAdProxyListener AppodealStack.Monetization.Common.AppodealCallbacks/Banner::get_BannerAdEventsImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Banner_get_BannerAdEventsImpl_m66B3D26B5CD222FD6D128BE0B62992F34F2502C3 (Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// public IBannerAdProxyListener BannerAdEventsImpl => _bannerAdEventsImpl ?? (_bannerAdEventsImpl = new BannerAdProxyListener());
		RuntimeObject* L_0 = __this->____bannerAdEventsImpl_2;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4* L_2 = (BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4*)il2cpp_codegen_object_new(BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BannerAdProxyListener__ctor_mB0ADA12C9F0542F278BCEA541492177025A3E333(L_2, NULL);
		BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4* L_3 = L_2;
		V_0 = L_3;
		__this->____bannerAdEventsImpl_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bannerAdEventsImpl_2), (void*)L_3);
		RuntimeObject* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Banner::add_OnLoaded(System.EventHandler`1<AppodealStack.Monetization.Common.BannerLoadedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_add_OnLoaded_mD8AC7EBDDA3D299E62F0E2AF2086F487A0B660E3 (EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* V_0 = NULL;
	EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* V_1 = NULL;
	EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_0 = ((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnLoaded_3;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_2 = V_1;
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD*)Castclass((RuntimeObject*)L_4, EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_5 = V_2;
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_6 = V_1;
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD*>((&((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnLoaded_3), L_5, L_6);
		V_0 = L_7;
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_8 = V_0;
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD*)L_8) == ((RuntimeObject*)(EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Banner::remove_OnLoaded(System.EventHandler`1<AppodealStack.Monetization.Common.BannerLoadedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_remove_OnLoaded_m75C7BEAE686425D3344F3822FD5FC5BFA519214D (EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* V_0 = NULL;
	EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* V_1 = NULL;
	EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_0 = ((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnLoaded_3;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_2 = V_1;
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD*)Castclass((RuntimeObject*)L_4, EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_5 = V_2;
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_6 = V_1;
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD*>((&((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnLoaded_3), L_5, L_6);
		V_0 = L_7;
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_8 = V_0;
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD*)L_8) == ((RuntimeObject*)(EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Banner::add_OnFailedToLoad(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_add_OnFailedToLoad_m384834F87404F6235A4D26979729A8377025DA8C (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnFailedToLoad_4;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnFailedToLoad_4), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Banner::remove_OnFailedToLoad(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_remove_OnFailedToLoad_m4A8D415054B08B724CCD7ACCE8DB197BFE649559 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnFailedToLoad_4;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnFailedToLoad_4), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Banner::add_OnShown(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_add_OnShown_m8437383929E0F468227C6BCE2FC53A21DB13BE76 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnShown_5;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnShown_5), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Banner::remove_OnShown(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_remove_OnShown_m095EC3EF687A7BA33356B4975BE77D06705085AB (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnShown_5;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnShown_5), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Banner::add_OnShowFailed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_add_OnShowFailed_m79D7904620DB84C377B31F45CF0126C4BF98D34D (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnShowFailed_6;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnShowFailed_6), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Banner::remove_OnShowFailed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_remove_OnShowFailed_mE418EDC7CD2540BCF7C20CC71099AC1E9F0FF895 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnShowFailed_6;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnShowFailed_6), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Banner::add_OnClicked(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_add_OnClicked_mE9B1CA1F8F168ABC33ACF50F47E218AE75EE45AE (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnClicked_7;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnClicked_7), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Banner::remove_OnClicked(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_remove_OnClicked_m1F85D36BF523D29FFDDDF7ECB1ED6CD1A5ADA839 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnClicked_7;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnClicked_7), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Banner::add_OnExpired(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_add_OnExpired_m9B549F47C735BDD778D0782491E9AC9F0C03BDB6 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnExpired_8;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnExpired_8), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Banner::remove_OnExpired(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_remove_OnExpired_m709083EF7495505F5B296D84FB746C2816409FA6 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnExpired_8;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnExpired_8), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Banner::InitializeCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_InitializeCallbacks_m81D466DE94BADA986B6CDAB126A61E9F38790245 (Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_U3CInitializeCallbacksU3Eb__26_0_mBCF1D67CF9CA9B2379F4C9BFF6EE94573D095BAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_U3CInitializeCallbacksU3Eb__26_1_m3DA345A2D6FE4FFE328AF14AB93DA558E20EF590_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_U3CInitializeCallbacksU3Eb__26_2_m8F2D24A82343FAAD380263113DAE169039A52D9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_U3CInitializeCallbacksU3Eb__26_3_mC469257E039508927EB66AB5C0FC4781C9E3EB64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_U3CInitializeCallbacksU3Eb__26_4_m281E5CD352EE5BCC2ED8A45FC15899C2536F26C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_U3CInitializeCallbacksU3Eb__26_5_m65EAA7DB27EBD918D30DDDF4793875E615B8CE27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerAdProxyListener_tAC08C823CDBFE91AABAE61DCD83B05377125CE1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BannerAdEventsImpl.OnLoaded += (sender, args) => OnLoaded?.Invoke(this, args);
		RuntimeObject* L_0;
		L_0 = Banner_get_BannerAdEventsImpl_m66B3D26B5CD222FD6D128BE0B62992F34F2502C3(__this, NULL);
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_1 = (EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD*)il2cpp_codegen_object_new(EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler_1__ctor_m765C6CE26CEF179AAA54C1CBB6D474F9F5BDDDF1(L_1, __this, (intptr_t)((void*)Banner_U3CInitializeCallbacksU3Eb__26_0_mBCF1D67CF9CA9B2379F4C9BFF6EE94573D095BAF_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* >::Invoke(2 /* System.Void AppodealStack.Monetization.Common.IBannerAdProxyListener::add_OnLoaded(System.EventHandler`1<AppodealStack.Monetization.Common.BannerLoadedEventArgs>) */, IBannerAdProxyListener_tAC08C823CDBFE91AABAE61DCD83B05377125CE1C_il2cpp_TypeInfo_var, L_0, L_1);
		// BannerAdEventsImpl.OnFailedToLoad += (sender, args) => OnFailedToLoad?.Invoke(this, args);
		RuntimeObject* L_2;
		L_2 = Banner_get_BannerAdEventsImpl_m66B3D26B5CD222FD6D128BE0B62992F34F2502C3(__this, NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_3, __this, (intptr_t)((void*)Banner_U3CInitializeCallbacksU3Eb__26_1_m3DA345A2D6FE4FFE328AF14AB93DA558E20EF590_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* >::Invoke(4 /* System.Void AppodealStack.Monetization.Common.IBannerAdProxyListener::add_OnFailedToLoad(System.EventHandler) */, IBannerAdProxyListener_tAC08C823CDBFE91AABAE61DCD83B05377125CE1C_il2cpp_TypeInfo_var, L_2, L_3);
		// BannerAdEventsImpl.OnShown += (sender, args) => OnShown?.Invoke(this, args);
		RuntimeObject* L_4;
		L_4 = Banner_get_BannerAdEventsImpl_m66B3D26B5CD222FD6D128BE0B62992F34F2502C3(__this, NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_5, __this, (intptr_t)((void*)Banner_U3CInitializeCallbacksU3Eb__26_2_m8F2D24A82343FAAD380263113DAE169039A52D9A_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* >::Invoke(6 /* System.Void AppodealStack.Monetization.Common.IBannerAdProxyListener::add_OnShown(System.EventHandler) */, IBannerAdProxyListener_tAC08C823CDBFE91AABAE61DCD83B05377125CE1C_il2cpp_TypeInfo_var, L_4, L_5);
		// BannerAdEventsImpl.OnShowFailed += (sender, args) => OnShowFailed?.Invoke(this, args);
		RuntimeObject* L_6;
		L_6 = Banner_get_BannerAdEventsImpl_m66B3D26B5CD222FD6D128BE0B62992F34F2502C3(__this, NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_7, __this, (intptr_t)((void*)Banner_U3CInitializeCallbacksU3Eb__26_3_mC469257E039508927EB66AB5C0FC4781C9E3EB64_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* >::Invoke(8 /* System.Void AppodealStack.Monetization.Common.IBannerAdProxyListener::add_OnShowFailed(System.EventHandler) */, IBannerAdProxyListener_tAC08C823CDBFE91AABAE61DCD83B05377125CE1C_il2cpp_TypeInfo_var, L_6, L_7);
		// BannerAdEventsImpl.OnClicked += (sender, args) => OnClicked?.Invoke(this, args);
		RuntimeObject* L_8;
		L_8 = Banner_get_BannerAdEventsImpl_m66B3D26B5CD222FD6D128BE0B62992F34F2502C3(__this, NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_9, __this, (intptr_t)((void*)Banner_U3CInitializeCallbacksU3Eb__26_4_m281E5CD352EE5BCC2ED8A45FC15899C2536F26C9_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* >::Invoke(10 /* System.Void AppodealStack.Monetization.Common.IBannerAdProxyListener::add_OnClicked(System.EventHandler) */, IBannerAdProxyListener_tAC08C823CDBFE91AABAE61DCD83B05377125CE1C_il2cpp_TypeInfo_var, L_8, L_9);
		// BannerAdEventsImpl.OnExpired += (sender, args) => OnExpired?.Invoke(this, args);
		RuntimeObject* L_10;
		L_10 = Banner_get_BannerAdEventsImpl_m66B3D26B5CD222FD6D128BE0B62992F34F2502C3(__this, NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_11 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_11, __this, (intptr_t)((void*)Banner_U3CInitializeCallbacksU3Eb__26_5_m65EAA7DB27EBD918D30DDDF4793875E615B8CE27_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* >::Invoke(12 /* System.Void AppodealStack.Monetization.Common.IBannerAdProxyListener::add_OnExpired(System.EventHandler) */, IBannerAdProxyListener_tAC08C823CDBFE91AABAE61DCD83B05377125CE1C_il2cpp_TypeInfo_var, L_10, L_11);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Banner::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner__cctor_m7DE49E776FE199261AAFEC790ECBB32FF06209B5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly object Lock = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___Lock_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___Lock_1), (void*)L_0);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Banner::<InitializeCallbacks>b__26_0(System.Object,AppodealStack.Monetization.Common.BannerLoadedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_U3CInitializeCallbacksU3Eb__26_0_mBCF1D67CF9CA9B2379F4C9BFF6EE94573D095BAF (Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9* __this, RuntimeObject* ___0_sender, BannerLoadedEventArgs_t17EE25930EFBF4B368D44C0F357AC2B45C212CE7* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* G_B2_0 = NULL;
	EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* G_B1_0 = NULL;
	{
		// BannerAdEventsImpl.OnLoaded += (sender, args) => OnLoaded?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_0 = ((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnLoaded_3;
		EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		BannerLoadedEventArgs_t17EE25930EFBF4B368D44C0F357AC2B45C212CE7* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_1_Invoke_m4AF34759DA5947F3AD3B0D8C75DE0C1265ABA6CE_inline(G_B2_0, __this, L_2, NULL);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Banner::<InitializeCallbacks>b__26_1(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_U3CInitializeCallbacksU3Eb__26_1_m3DA345A2D6FE4FFE328AF14AB93DA558E20EF590 (Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B1_0 = NULL;
	{
		// BannerAdEventsImpl.OnFailedToLoad += (sender, args) => OnFailedToLoad?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnFailedToLoad_4;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B2_0, __this, L_2, NULL);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Banner::<InitializeCallbacks>b__26_2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_U3CInitializeCallbacksU3Eb__26_2_m8F2D24A82343FAAD380263113DAE169039A52D9A (Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B1_0 = NULL;
	{
		// BannerAdEventsImpl.OnShown += (sender, args) => OnShown?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnShown_5;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B2_0, __this, L_2, NULL);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Banner::<InitializeCallbacks>b__26_3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_U3CInitializeCallbacksU3Eb__26_3_mC469257E039508927EB66AB5C0FC4781C9E3EB64 (Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B1_0 = NULL;
	{
		// BannerAdEventsImpl.OnShowFailed += (sender, args) => OnShowFailed?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnShowFailed_6;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B2_0, __this, L_2, NULL);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Banner::<InitializeCallbacks>b__26_4(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_U3CInitializeCallbacksU3Eb__26_4_m281E5CD352EE5BCC2ED8A45FC15899C2536F26C9 (Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B1_0 = NULL;
	{
		// BannerAdEventsImpl.OnClicked += (sender, args) => OnClicked?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnClicked_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B2_0, __this, L_2, NULL);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Banner::<InitializeCallbacks>b__26_5(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_U3CInitializeCallbacksU3Eb__26_5_m65EAA7DB27EBD918D30DDDF4793875E615B8CE27 (Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B1_0 = NULL;
	{
		// BannerAdEventsImpl.OnExpired += (sender, args) => OnExpired?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_StaticFields*)il2cpp_codegen_static_fields_for(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var))->___OnExpired_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B2_0, __this, L_2, NULL);
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
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial__ctor_mE775BFC4FCCDC32B7A775BC7553DE73F457D0BB7 (Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11* __this, const RuntimeMethod* method) 
{
	{
		// private Interstitial() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// private Interstitial() { }
		return;
	}
}
// AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11* Interstitial_get_Instance_m182791E578675DA150A84803139FE245994EAFB8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// if (_instance == null)
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11* L_0 = ((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->____instance_0;
		if (L_0)
		{
			goto IL_003e;
		}
	}
	{
		// lock (Lock)
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___Lock_1;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_003d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				// if (_instance == null)
				il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
				Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11* L_5 = ((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->____instance_0;
				if (L_5)
				{
					goto IL_0032_1;
				}
			}
			{
				// _instance = new Interstitial();
				Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11* L_6 = (Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11*)il2cpp_codegen_object_new(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				Interstitial__ctor_mE775BFC4FCCDC32B7A775BC7553DE73F457D0BB7(L_6, NULL);
				il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
				((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->____instance_0 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->____instance_0), (void*)L_6);
				// _instance.InitializeCallbacks();
				Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11* L_7 = ((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->____instance_0;
				NullCheck(L_7);
				Interstitial_InitializeCallbacks_m418BDA6594264EF1810A66709708CA0BF0A87E24(L_7, NULL);
			}

IL_0032_1:
			{
				// }
				goto IL_003e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// return _instance;
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11* L_8 = ((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->____instance_0;
		return L_8;
	}
}
// AppodealStack.Monetization.Common.IInterstitialAdProxyListener AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::get_InterstitialAdEventsImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Interstitial_get_InterstitialAdEventsImpl_m1C5DC5C1B51C5A3BC9108ACD9F7174BA3853E0E0 (Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// public IInterstitialAdProxyListener InterstitialAdEventsImpl => _interstitialAdEventsImpl ?? (_interstitialAdEventsImpl = new InterstitialAdProxyListener());
		RuntimeObject* L_0 = __this->____interstitialAdEventsImpl_2;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4* L_2 = (InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4*)il2cpp_codegen_object_new(InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InterstitialAdProxyListener__ctor_mE16A54AB68A01BFA47C14671850791206ACBB5B5(L_2, NULL);
		InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4* L_3 = L_2;
		V_0 = L_3;
		__this->____interstitialAdEventsImpl_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interstitialAdEventsImpl_2), (void*)L_3);
		RuntimeObject* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::add_OnLoaded(System.EventHandler`1<AppodealStack.Monetization.Common.AdLoadedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_add_OnLoaded_mCC7A44122AAEC1EDF3EEC2E7339D2BD867C8A3A8 (EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_0 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_1 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_0 = ((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnLoaded_3;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_2 = V_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)Castclass((RuntimeObject*)L_4, EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_5 = V_2;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_6 = V_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*>((&((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnLoaded_3), L_5, L_6);
		V_0 = L_7;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_8 = V_0;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)L_8) == ((RuntimeObject*)(EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::remove_OnLoaded(System.EventHandler`1<AppodealStack.Monetization.Common.AdLoadedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_remove_OnLoaded_m044A082466BBDD147B1D839254AD5F6D8FC756AD (EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_0 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_1 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_0 = ((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnLoaded_3;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_2 = V_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)Castclass((RuntimeObject*)L_4, EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_5 = V_2;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_6 = V_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*>((&((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnLoaded_3), L_5, L_6);
		V_0 = L_7;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_8 = V_0;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)L_8) == ((RuntimeObject*)(EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::add_OnFailedToLoad(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_add_OnFailedToLoad_m020184C800BF1FA38FB5E22FCBD9879B4025B4E1 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnFailedToLoad_4;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnFailedToLoad_4), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::remove_OnFailedToLoad(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_remove_OnFailedToLoad_mAB689F26B374B9F60EE7AAC9BE052380E57F1482 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnFailedToLoad_4;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnFailedToLoad_4), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::add_OnShown(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_add_OnShown_mD8B4115C4CAD4288A477C30B964DCFC021CCEEF9 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnShown_5;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnShown_5), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::remove_OnShown(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_remove_OnShown_mB86D965EF7E2D39558BADF4FFF0BA491D9C006A2 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnShown_5;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnShown_5), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::add_OnShowFailed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_add_OnShowFailed_m924AE02551E81F338CE55ECD15F7070C4C92B01F (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnShowFailed_6;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnShowFailed_6), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::remove_OnShowFailed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_remove_OnShowFailed_mE90842953345A3530F165181974123E2DB837B1D (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnShowFailed_6;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnShowFailed_6), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::add_OnClosed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_add_OnClosed_mAA858DF51006BE52EC297B049C7C2D089C62C797 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnClosed_7;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnClosed_7), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::remove_OnClosed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_remove_OnClosed_m815EDB4FDF837F261708FB79A70F1317D48253BD (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnClosed_7;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnClosed_7), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::add_OnClicked(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_add_OnClicked_m4BE949D024EE2379FE89719BEBD466108DAA6DA5 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnClicked_8;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnClicked_8), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::remove_OnClicked(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_remove_OnClicked_m41E46F4A9B77BE0009FBA43540A45FAB7CD163D5 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnClicked_8;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnClicked_8), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::add_OnExpired(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_add_OnExpired_m840AB5FE0478175AB06F0D80C5C580ACF83FF331 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnExpired_9;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnExpired_9), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::remove_OnExpired(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_remove_OnExpired_m1F0131479DFB2FB489801E76F3ADEF72F0F76962 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnExpired_9;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnExpired_9), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::InitializeCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_InitializeCallbacks_m418BDA6594264EF1810A66709708CA0BF0A87E24 (Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialAdProxyListener_t08AA56BE5B736E771161C83E8E0EC9189EAAE786_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_U3CInitializeCallbacksU3Eb__29_0_m95B185D386EF73DAE3BFE2B4F2B41F7084911161_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_U3CInitializeCallbacksU3Eb__29_1_mF792594F9FB3F0E325D5D7D1B0F9C48E4AB739CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_U3CInitializeCallbacksU3Eb__29_2_m070691446EEDB5AB7659A1C0DC294134D393DCCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_U3CInitializeCallbacksU3Eb__29_3_mD454DDFF361D192CFF3952DC5455E8CD72EF5C7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_U3CInitializeCallbacksU3Eb__29_4_m17A7525DA5EB1D99FC92D4D831E60ED93EAE5D04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_U3CInitializeCallbacksU3Eb__29_5_m1009E4E1D1705C09C08F99CC1674307C9A3C0C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_U3CInitializeCallbacksU3Eb__29_6_m4140CCB3B3CC73A5B35DE79B3E13768F4058E692_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InterstitialAdEventsImpl.OnLoaded += (sender, args) => OnLoaded?.Invoke(this, args);
		RuntimeObject* L_0;
		L_0 = Interstitial_get_InterstitialAdEventsImpl_m1C5DC5C1B51C5A3BC9108ACD9F7174BA3853E0E0(__this, NULL);
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_1 = (EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)il2cpp_codegen_object_new(EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler_1__ctor_m52FC96CD3492CAAFE02D597B18D7702F14DDE1F0(L_1, __this, (intptr_t)((void*)Interstitial_U3CInitializeCallbacksU3Eb__29_0_m95B185D386EF73DAE3BFE2B4F2B41F7084911161_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* >::Invoke(2 /* System.Void AppodealStack.Monetization.Common.IInterstitialAdProxyListener::add_OnLoaded(System.EventHandler`1<AppodealStack.Monetization.Common.AdLoadedEventArgs>) */, IInterstitialAdProxyListener_t08AA56BE5B736E771161C83E8E0EC9189EAAE786_il2cpp_TypeInfo_var, L_0, L_1);
		// InterstitialAdEventsImpl.OnFailedToLoad += (sender, args) => OnFailedToLoad?.Invoke(this, args);
		RuntimeObject* L_2;
		L_2 = Interstitial_get_InterstitialAdEventsImpl_m1C5DC5C1B51C5A3BC9108ACD9F7174BA3853E0E0(__this, NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_3, __this, (intptr_t)((void*)Interstitial_U3CInitializeCallbacksU3Eb__29_1_mF792594F9FB3F0E325D5D7D1B0F9C48E4AB739CA_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* >::Invoke(4 /* System.Void AppodealStack.Monetization.Common.IInterstitialAdProxyListener::add_OnFailedToLoad(System.EventHandler) */, IInterstitialAdProxyListener_t08AA56BE5B736E771161C83E8E0EC9189EAAE786_il2cpp_TypeInfo_var, L_2, L_3);
		// InterstitialAdEventsImpl.OnShown += (sender, args) => OnShown?.Invoke(this, args);
		RuntimeObject* L_4;
		L_4 = Interstitial_get_InterstitialAdEventsImpl_m1C5DC5C1B51C5A3BC9108ACD9F7174BA3853E0E0(__this, NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_5, __this, (intptr_t)((void*)Interstitial_U3CInitializeCallbacksU3Eb__29_2_m070691446EEDB5AB7659A1C0DC294134D393DCCB_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* >::Invoke(6 /* System.Void AppodealStack.Monetization.Common.IInterstitialAdProxyListener::add_OnShown(System.EventHandler) */, IInterstitialAdProxyListener_t08AA56BE5B736E771161C83E8E0EC9189EAAE786_il2cpp_TypeInfo_var, L_4, L_5);
		// InterstitialAdEventsImpl.OnShowFailed += (sender, args) => OnShowFailed?.Invoke(this, args);
		RuntimeObject* L_6;
		L_6 = Interstitial_get_InterstitialAdEventsImpl_m1C5DC5C1B51C5A3BC9108ACD9F7174BA3853E0E0(__this, NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_7, __this, (intptr_t)((void*)Interstitial_U3CInitializeCallbacksU3Eb__29_3_mD454DDFF361D192CFF3952DC5455E8CD72EF5C7B_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* >::Invoke(8 /* System.Void AppodealStack.Monetization.Common.IInterstitialAdProxyListener::add_OnShowFailed(System.EventHandler) */, IInterstitialAdProxyListener_t08AA56BE5B736E771161C83E8E0EC9189EAAE786_il2cpp_TypeInfo_var, L_6, L_7);
		// InterstitialAdEventsImpl.OnClosed += (sender, args) => OnClosed?.Invoke(this, args);
		RuntimeObject* L_8;
		L_8 = Interstitial_get_InterstitialAdEventsImpl_m1C5DC5C1B51C5A3BC9108ACD9F7174BA3853E0E0(__this, NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_9, __this, (intptr_t)((void*)Interstitial_U3CInitializeCallbacksU3Eb__29_4_m17A7525DA5EB1D99FC92D4D831E60ED93EAE5D04_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* >::Invoke(10 /* System.Void AppodealStack.Monetization.Common.IInterstitialAdProxyListener::add_OnClosed(System.EventHandler) */, IInterstitialAdProxyListener_t08AA56BE5B736E771161C83E8E0EC9189EAAE786_il2cpp_TypeInfo_var, L_8, L_9);
		// InterstitialAdEventsImpl.OnClicked += (sender, args) => OnClicked?.Invoke(this, args);
		RuntimeObject* L_10;
		L_10 = Interstitial_get_InterstitialAdEventsImpl_m1C5DC5C1B51C5A3BC9108ACD9F7174BA3853E0E0(__this, NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_11 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_11, __this, (intptr_t)((void*)Interstitial_U3CInitializeCallbacksU3Eb__29_5_m1009E4E1D1705C09C08F99CC1674307C9A3C0C49_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* >::Invoke(12 /* System.Void AppodealStack.Monetization.Common.IInterstitialAdProxyListener::add_OnClicked(System.EventHandler) */, IInterstitialAdProxyListener_t08AA56BE5B736E771161C83E8E0EC9189EAAE786_il2cpp_TypeInfo_var, L_10, L_11);
		// InterstitialAdEventsImpl.OnExpired += (sender, args) => OnExpired?.Invoke(this, args);
		RuntimeObject* L_12;
		L_12 = Interstitial_get_InterstitialAdEventsImpl_m1C5DC5C1B51C5A3BC9108ACD9F7174BA3853E0E0(__this, NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_13 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_13, __this, (intptr_t)((void*)Interstitial_U3CInitializeCallbacksU3Eb__29_6_m4140CCB3B3CC73A5B35DE79B3E13768F4058E692_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		InterfaceActionInvoker1< EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* >::Invoke(14 /* System.Void AppodealStack.Monetization.Common.IInterstitialAdProxyListener::add_OnExpired(System.EventHandler) */, IInterstitialAdProxyListener_t08AA56BE5B736E771161C83E8E0EC9189EAAE786_il2cpp_TypeInfo_var, L_12, L_13);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial__cctor_m2C1353FA0A56D1A18C8883754DB6F0E8125988FE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly object Lock = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___Lock_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___Lock_1), (void*)L_0);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::<InitializeCallbacks>b__29_0(System.Object,AppodealStack.Monetization.Common.AdLoadedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_U3CInitializeCallbacksU3Eb__29_0_m95B185D386EF73DAE3BFE2B4F2B41F7084911161 (Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11* __this, RuntimeObject* ___0_sender, AdLoadedEventArgs_t2F7259B880EABD1911936EA4AFD0D6C50D1330FA* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* G_B2_0 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* G_B1_0 = NULL;
	{
		// InterstitialAdEventsImpl.OnLoaded += (sender, args) => OnLoaded?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_0 = ((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnLoaded_3;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		AdLoadedEventArgs_t2F7259B880EABD1911936EA4AFD0D6C50D1330FA* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_1_Invoke_m0EC2B95824927C7CB96757DA573935AD2EFA990A_inline(G_B2_0, __this, L_2, NULL);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::<InitializeCallbacks>b__29_1(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_U3CInitializeCallbacksU3Eb__29_1_mF792594F9FB3F0E325D5D7D1B0F9C48E4AB739CA (Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B1_0 = NULL;
	{
		// InterstitialAdEventsImpl.OnFailedToLoad += (sender, args) => OnFailedToLoad?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnFailedToLoad_4;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B2_0, __this, L_2, NULL);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::<InitializeCallbacks>b__29_2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_U3CInitializeCallbacksU3Eb__29_2_m070691446EEDB5AB7659A1C0DC294134D393DCCB (Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B1_0 = NULL;
	{
		// InterstitialAdEventsImpl.OnShown += (sender, args) => OnShown?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnShown_5;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B2_0, __this, L_2, NULL);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::<InitializeCallbacks>b__29_3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_U3CInitializeCallbacksU3Eb__29_3_mD454DDFF361D192CFF3952DC5455E8CD72EF5C7B (Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B1_0 = NULL;
	{
		// InterstitialAdEventsImpl.OnShowFailed += (sender, args) => OnShowFailed?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnShowFailed_6;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B2_0, __this, L_2, NULL);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::<InitializeCallbacks>b__29_4(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_U3CInitializeCallbacksU3Eb__29_4_m17A7525DA5EB1D99FC92D4D831E60ED93EAE5D04 (Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B1_0 = NULL;
	{
		// InterstitialAdEventsImpl.OnClosed += (sender, args) => OnClosed?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnClosed_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B2_0, __this, L_2, NULL);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::<InitializeCallbacks>b__29_5(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_U3CInitializeCallbacksU3Eb__29_5_m1009E4E1D1705C09C08F99CC1674307C9A3C0C49 (Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B1_0 = NULL;
	{
		// InterstitialAdEventsImpl.OnClicked += (sender, args) => OnClicked?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnClicked_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B2_0, __this, L_2, NULL);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::<InitializeCallbacks>b__29_6(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_U3CInitializeCallbacksU3Eb__29_6_m4140CCB3B3CC73A5B35DE79B3E13768F4058E692 (Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B1_0 = NULL;
	{
		// InterstitialAdEventsImpl.OnExpired += (sender, args) => OnExpired?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_StaticFields*)il2cpp_codegen_static_fields_for(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var))->___OnExpired_9;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B2_0, __this, L_2, NULL);
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
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideo__ctor_m406FBC2CAFD3BD7106CF344813BC335C9227D321 (RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0* __this, const RuntimeMethod* method) 
{
	{
		// private RewardedVideo() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// private RewardedVideo() { }
		return;
	}
}
// AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0* RewardedVideo_get_Instance_mEE60E0050ECDFF153114847F1D31D8BA66B5540F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// if (_instance == null)
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0* L_0 = ((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->____instance_0;
		if (L_0)
		{
			goto IL_003e;
		}
	}
	{
		// lock (Lock)
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___Lock_1;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_003d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				// if (_instance == null)
				il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
				RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0* L_5 = ((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->____instance_0;
				if (L_5)
				{
					goto IL_0032_1;
				}
			}
			{
				// _instance = new RewardedVideo();
				RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0* L_6 = (RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0*)il2cpp_codegen_object_new(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				RewardedVideo__ctor_m406FBC2CAFD3BD7106CF344813BC335C9227D321(L_6, NULL);
				il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
				((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->____instance_0 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->____instance_0), (void*)L_6);
				// _instance.InitializeCallbacks();
				RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0* L_7 = ((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->____instance_0;
				NullCheck(L_7);
				RewardedVideo_InitializeCallbacks_m3E382A3922A3430A6DDA97B78EF98826C29A4368(L_7, NULL);
			}

IL_0032_1:
			{
				// }
				goto IL_003e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// return _instance;
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0* L_8 = ((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->____instance_0;
		return L_8;
	}
}
// AppodealStack.Monetization.Common.IRewardedVideoAdProxyListener AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::get_RewardedVideoAdEventsImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewardedVideo_get_RewardedVideoAdEventsImpl_m35016F1E056CDA1F8640AF48ADCA8A8BF97EDD73 (RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// public IRewardedVideoAdProxyListener RewardedVideoAdEventsImpl => _rewardedVideoAdEventsImpl ?? (_rewardedVideoAdEventsImpl = new RewardedVideoAdProxyListener());
		RuntimeObject* L_0 = __this->____rewardedVideoAdEventsImpl_2;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* L_2 = (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A*)il2cpp_codegen_object_new(RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		RewardedVideoAdProxyListener__ctor_m2D749B5DEC64BC448A8B851FDF2402CA76EAA4CB(L_2, NULL);
		RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* L_3 = L_2;
		V_0 = L_3;
		__this->____rewardedVideoAdEventsImpl_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rewardedVideoAdEventsImpl_2), (void*)L_3);
		RuntimeObject* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::add_OnLoaded(System.EventHandler`1<AppodealStack.Monetization.Common.AdLoadedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideo_add_OnLoaded_mB041D7D5F500E83E4B9EC703645658DE2B6CCCCF (EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_0 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_1 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_0 = ((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnLoaded_3;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_2 = V_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)Castclass((RuntimeObject*)L_4, EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_5 = V_2;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_6 = V_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*>((&((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnLoaded_3), L_5, L_6);
		V_0 = L_7;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_8 = V_0;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)L_8) == ((RuntimeObject*)(EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::remove_OnLoaded(System.EventHandler`1<AppodealStack.Monetization.Common.AdLoadedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideo_remove_OnLoaded_m9E33E35131A5B3EB50E9BD388ECB3AE803C4BFC0 (EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_0 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_1 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_0 = ((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnLoaded_3;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_2 = V_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)Castclass((RuntimeObject*)L_4, EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_5 = V_2;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_6 = V_1;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*>((&((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnLoaded_3), L_5, L_6);
		V_0 = L_7;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_8 = V_0;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)L_8) == ((RuntimeObject*)(EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::add_OnFailedToLoad(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideo_add_OnFailedToLoad_m2A9AE86DD1906E8AFE3F6A8A0879CCADC9ACDEEE (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnFailedToLoad_4;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnFailedToLoad_4), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::remove_OnFailedToLoad(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideo_remove_OnFailedToLoad_m4F6C1932FD8244E2011590B16ECD7C9AFE7C288E (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnFailedToLoad_4;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnFailedToLoad_4), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::add_OnShown(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideo_add_OnShown_mD747AE36F780E15948CA101918E2B61A681F2B8E (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnShown_5;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnShown_5), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::remove_OnShown(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideo_remove_OnShown_m18046A0AC58AEE447D908F3541D4F20D37195C41 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnShown_5;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnShown_5), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::add_OnShowFailed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideo_add_OnShowFailed_m6ECD089A31313819A372EF330D9835542B84AAF0 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnShowFailed_6;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnShowFailed_6), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::remove_OnShowFailed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideo_remove_OnShowFailed_mE5C7A8AFCC868A221309910B63E7F55068A64104 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnShowFailed_6;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnShowFailed_6), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::add_OnClosed(System.EventHandler`1<AppodealStack.Monetization.Common.RewardedVideoClosedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideo_add_OnClosed_m910108CB114842B12286D8695FC19C73D6C25379 (EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* V_0 = NULL;
	EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* V_1 = NULL;
	EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_0 = ((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnClosed_7;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_2 = V_1;
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE*)Castclass((RuntimeObject*)L_4, EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_5 = V_2;
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_6 = V_1;
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE*>((&((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnClosed_7), L_5, L_6);
		V_0 = L_7;
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_8 = V_0;
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE*)L_8) == ((RuntimeObject*)(EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::remove_OnClosed(System.EventHandler`1<AppodealStack.Monetization.Common.RewardedVideoClosedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideo_remove_OnClosed_m136AE33E6C8AD7AC8465039ADDD98CA3C7031B02 (EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* V_0 = NULL;
	EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* V_1 = NULL;
	EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_0 = ((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnClosed_7;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_2 = V_1;
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE*)Castclass((RuntimeObject*)L_4, EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_5 = V_2;
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_6 = V_1;
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE*>((&((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnClosed_7), L_5, L_6);
		V_0 = L_7;
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_8 = V_0;
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE*)L_8) == ((RuntimeObject*)(EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::add_OnFinished(System.EventHandler`1<AppodealStack.Monetization.Common.RewardedVideoFinishedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideo_add_OnFinished_mAA58F288C74A33BCB2D6CE00460556AD0B6F44E9 (EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* V_0 = NULL;
	EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* V_1 = NULL;
	EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_0 = ((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnFinished_8;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_2 = V_1;
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113*)Castclass((RuntimeObject*)L_4, EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_5 = V_2;
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_6 = V_1;
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113*>((&((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnFinished_8), L_5, L_6);
		V_0 = L_7;
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_8 = V_0;
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113*)L_8) == ((RuntimeObject*)(EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::remove_OnFinished(System.EventHandler`1<AppodealStack.Monetization.Common.RewardedVideoFinishedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideo_remove_OnFinished_m9469D098DF82D3E05BC9B7FEF4D764BC87A1BDB8 (EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* V_0 = NULL;
	EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* V_1 = NULL;
	EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_0 = ((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnFinished_8;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_2 = V_1;
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113*)Castclass((RuntimeObject*)L_4, EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_5 = V_2;
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_6 = V_1;
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113*>((&((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnFinished_8), L_5, L_6);
		V_0 = L_7;
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_8 = V_0;
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113*)L_8) == ((RuntimeObject*)(EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::add_OnClicked(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideo_add_OnClicked_m00FEB9196A7A17061CA6727F539F9ACC08726B23 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnClicked_9;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnClicked_9), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::remove_OnClicked(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideo_remove_OnClicked_m374C7C15628483D84D93716D6752CFF6A5B039C2 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnClicked_9;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnClicked_9), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::add_OnExpired(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideo_add_OnExpired_m7A17A26656D4F26A4DC89A5A68C9D4E965CF7AD3 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnExpired_10;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnExpired_10), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::remove_OnExpired(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideo_remove_OnExpired_mC7B0B3054611F582CEA3C36130397BA6B75A3A51 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnExpired_10;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>((&((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnExpired_10), L_5, L_6);
		V_0 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_8) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::InitializeCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideo_InitializeCallbacks_m3E382A3922A3430A6DDA97B78EF98826C29A4368 (RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdProxyListener_tE234E4C058611167104301C38E6DDE2B3794FFB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_U3CInitializeCallbacksU3Eb__32_0_m980AA814A7D66C0C19AE6AB37D03556654DB9DB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_U3CInitializeCallbacksU3Eb__32_1_mA22BB18D57F0AFB4A65784314E6505D10E582532_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_U3CInitializeCallbacksU3Eb__32_2_mC4A87D98D4D4D6E2D46B9F0694F602C34A157BFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_U3CInitializeCallbacksU3Eb__32_3_m7A5959B156D49726E4C7645C519A553EEBC8E65A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_U3CInitializeCallbacksU3Eb__32_4_m8F95B85FF402895630A57FAA7C19DCA07163D352_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_U3CInitializeCallbacksU3Eb__32_5_m67A6C642589D76EEAC111BE24D32A8CF7AEA69B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_U3CInitializeCallbacksU3Eb__32_6_mA7C0C9348835714D08F50500B2C5B12D4AE42C8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_U3CInitializeCallbacksU3Eb__32_7_mE14BFC1C2C412046CCF0CEBB4D7B392499D2377B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RewardedVideoAdEventsImpl.OnLoaded += (sender, args) => OnLoaded?.Invoke(this, args);
		RuntimeObject* L_0;
		L_0 = RewardedVideo_get_RewardedVideoAdEventsImpl_m35016F1E056CDA1F8640AF48ADCA8A8BF97EDD73(__this, NULL);
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_1 = (EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA*)il2cpp_codegen_object_new(EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler_1__ctor_m52FC96CD3492CAAFE02D597B18D7702F14DDE1F0(L_1, __this, (intptr_t)((void*)RewardedVideo_U3CInitializeCallbacksU3Eb__32_0_m980AA814A7D66C0C19AE6AB37D03556654DB9DB9_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* >::Invoke(2 /* System.Void AppodealStack.Monetization.Common.IRewardedVideoAdProxyListener::add_OnLoaded(System.EventHandler`1<AppodealStack.Monetization.Common.AdLoadedEventArgs>) */, IRewardedVideoAdProxyListener_tE234E4C058611167104301C38E6DDE2B3794FFB2_il2cpp_TypeInfo_var, L_0, L_1);
		// RewardedVideoAdEventsImpl.OnFailedToLoad += (sender, args) => OnFailedToLoad?.Invoke(this, args);
		RuntimeObject* L_2;
		L_2 = RewardedVideo_get_RewardedVideoAdEventsImpl_m35016F1E056CDA1F8640AF48ADCA8A8BF97EDD73(__this, NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_3, __this, (intptr_t)((void*)RewardedVideo_U3CInitializeCallbacksU3Eb__32_1_mA22BB18D57F0AFB4A65784314E6505D10E582532_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* >::Invoke(4 /* System.Void AppodealStack.Monetization.Common.IRewardedVideoAdProxyListener::add_OnFailedToLoad(System.EventHandler) */, IRewardedVideoAdProxyListener_tE234E4C058611167104301C38E6DDE2B3794FFB2_il2cpp_TypeInfo_var, L_2, L_3);
		// RewardedVideoAdEventsImpl.OnShown += (sender, args) => OnShown?.Invoke(this, args);
		RuntimeObject* L_4;
		L_4 = RewardedVideo_get_RewardedVideoAdEventsImpl_m35016F1E056CDA1F8640AF48ADCA8A8BF97EDD73(__this, NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_5, __this, (intptr_t)((void*)RewardedVideo_U3CInitializeCallbacksU3Eb__32_2_mC4A87D98D4D4D6E2D46B9F0694F602C34A157BFF_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* >::Invoke(6 /* System.Void AppodealStack.Monetization.Common.IRewardedVideoAdProxyListener::add_OnShown(System.EventHandler) */, IRewardedVideoAdProxyListener_tE234E4C058611167104301C38E6DDE2B3794FFB2_il2cpp_TypeInfo_var, L_4, L_5);
		// RewardedVideoAdEventsImpl.OnShowFailed += (sender, args) => OnShowFailed?.Invoke(this, args);
		RuntimeObject* L_6;
		L_6 = RewardedVideo_get_RewardedVideoAdEventsImpl_m35016F1E056CDA1F8640AF48ADCA8A8BF97EDD73(__this, NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_7, __this, (intptr_t)((void*)RewardedVideo_U3CInitializeCallbacksU3Eb__32_3_m7A5959B156D49726E4C7645C519A553EEBC8E65A_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* >::Invoke(8 /* System.Void AppodealStack.Monetization.Common.IRewardedVideoAdProxyListener::add_OnShowFailed(System.EventHandler) */, IRewardedVideoAdProxyListener_tE234E4C058611167104301C38E6DDE2B3794FFB2_il2cpp_TypeInfo_var, L_6, L_7);
		// RewardedVideoAdEventsImpl.OnClosed += (sender, args) => OnClosed?.Invoke(this, args);
		RuntimeObject* L_8;
		L_8 = RewardedVideo_get_RewardedVideoAdEventsImpl_m35016F1E056CDA1F8640AF48ADCA8A8BF97EDD73(__this, NULL);
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_9 = (EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE*)il2cpp_codegen_object_new(EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EventHandler_1__ctor_mCA0B440B14E603867D8711FC7CC1B56A897A49D4(L_9, __this, (intptr_t)((void*)RewardedVideo_U3CInitializeCallbacksU3Eb__32_4_m8F95B85FF402895630A57FAA7C19DCA07163D352_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* >::Invoke(10 /* System.Void AppodealStack.Monetization.Common.IRewardedVideoAdProxyListener::add_OnClosed(System.EventHandler`1<AppodealStack.Monetization.Common.RewardedVideoClosedEventArgs>) */, IRewardedVideoAdProxyListener_tE234E4C058611167104301C38E6DDE2B3794FFB2_il2cpp_TypeInfo_var, L_8, L_9);
		// RewardedVideoAdEventsImpl.OnFinished += (sender, args) => OnFinished?.Invoke(this, args);
		RuntimeObject* L_10;
		L_10 = RewardedVideo_get_RewardedVideoAdEventsImpl_m35016F1E056CDA1F8640AF48ADCA8A8BF97EDD73(__this, NULL);
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_11 = (EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113*)il2cpp_codegen_object_new(EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		EventHandler_1__ctor_m1EBA632CB44E2100B87565A6B901DF5B15A5850A(L_11, __this, (intptr_t)((void*)RewardedVideo_U3CInitializeCallbacksU3Eb__32_5_m67A6C642589D76EEAC111BE24D32A8CF7AEA69B0_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* >::Invoke(12 /* System.Void AppodealStack.Monetization.Common.IRewardedVideoAdProxyListener::add_OnFinished(System.EventHandler`1<AppodealStack.Monetization.Common.RewardedVideoFinishedEventArgs>) */, IRewardedVideoAdProxyListener_tE234E4C058611167104301C38E6DDE2B3794FFB2_il2cpp_TypeInfo_var, L_10, L_11);
		// RewardedVideoAdEventsImpl.OnClicked += (sender, args) => OnClicked?.Invoke(this, args);
		RuntimeObject* L_12;
		L_12 = RewardedVideo_get_RewardedVideoAdEventsImpl_m35016F1E056CDA1F8640AF48ADCA8A8BF97EDD73(__this, NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_13 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_13, __this, (intptr_t)((void*)RewardedVideo_U3CInitializeCallbacksU3Eb__32_6_mA7C0C9348835714D08F50500B2C5B12D4AE42C8E_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		InterfaceActionInvoker1< EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* >::Invoke(14 /* System.Void AppodealStack.Monetization.Common.IRewardedVideoAdProxyListener::add_OnClicked(System.EventHandler) */, IRewardedVideoAdProxyListener_tE234E4C058611167104301C38E6DDE2B3794FFB2_il2cpp_TypeInfo_var, L_12, L_13);
		// RewardedVideoAdEventsImpl.OnExpired += (sender, args) => OnExpired?.Invoke(this, args);
		RuntimeObject* L_14;
		L_14 = RewardedVideo_get_RewardedVideoAdEventsImpl_m35016F1E056CDA1F8640AF48ADCA8A8BF97EDD73(__this, NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_15 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_15, __this, (intptr_t)((void*)RewardedVideo_U3CInitializeCallbacksU3Eb__32_7_mE14BFC1C2C412046CCF0CEBB4D7B392499D2377B_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		InterfaceActionInvoker1< EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* >::Invoke(16 /* System.Void AppodealStack.Monetization.Common.IRewardedVideoAdProxyListener::add_OnExpired(System.EventHandler) */, IRewardedVideoAdProxyListener_tE234E4C058611167104301C38E6DDE2B3794FFB2_il2cpp_TypeInfo_var, L_14, L_15);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideo__cctor_m218391E412A0B88AFE75061E7FB58F71D479E8B1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly object Lock = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___Lock_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___Lock_1), (void*)L_0);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::<InitializeCallbacks>b__32_0(System.Object,AppodealStack.Monetization.Common.AdLoadedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideo_U3CInitializeCallbacksU3Eb__32_0_m980AA814A7D66C0C19AE6AB37D03556654DB9DB9 (RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0* __this, RuntimeObject* ___0_sender, AdLoadedEventArgs_t2F7259B880EABD1911936EA4AFD0D6C50D1330FA* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* G_B2_0 = NULL;
	EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* G_B1_0 = NULL;
	{
		// RewardedVideoAdEventsImpl.OnLoaded += (sender, args) => OnLoaded?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_0 = ((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnLoaded_3;
		EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		AdLoadedEventArgs_t2F7259B880EABD1911936EA4AFD0D6C50D1330FA* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_1_Invoke_m0EC2B95824927C7CB96757DA573935AD2EFA990A_inline(G_B2_0, __this, L_2, NULL);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::<InitializeCallbacks>b__32_1(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideo_U3CInitializeCallbacksU3Eb__32_1_mA22BB18D57F0AFB4A65784314E6505D10E582532 (RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B1_0 = NULL;
	{
		// RewardedVideoAdEventsImpl.OnFailedToLoad += (sender, args) => OnFailedToLoad?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnFailedToLoad_4;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B2_0, __this, L_2, NULL);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::<InitializeCallbacks>b__32_2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideo_U3CInitializeCallbacksU3Eb__32_2_mC4A87D98D4D4D6E2D46B9F0694F602C34A157BFF (RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B1_0 = NULL;
	{
		// RewardedVideoAdEventsImpl.OnShown += (sender, args) => OnShown?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnShown_5;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B2_0, __this, L_2, NULL);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::<InitializeCallbacks>b__32_3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideo_U3CInitializeCallbacksU3Eb__32_3_m7A5959B156D49726E4C7645C519A553EEBC8E65A (RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B1_0 = NULL;
	{
		// RewardedVideoAdEventsImpl.OnShowFailed += (sender, args) => OnShowFailed?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnShowFailed_6;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B2_0, __this, L_2, NULL);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::<InitializeCallbacks>b__32_4(System.Object,AppodealStack.Monetization.Common.RewardedVideoClosedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideo_U3CInitializeCallbacksU3Eb__32_4_m8F95B85FF402895630A57FAA7C19DCA07163D352 (RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0* __this, RuntimeObject* ___0_sender, RewardedVideoClosedEventArgs_t4FC78F06AC8480C706595468368B1105D2216590* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* G_B2_0 = NULL;
	EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* G_B1_0 = NULL;
	{
		// RewardedVideoAdEventsImpl.OnClosed += (sender, args) => OnClosed?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_0 = ((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnClosed_7;
		EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		RewardedVideoClosedEventArgs_t4FC78F06AC8480C706595468368B1105D2216590* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_1_Invoke_m2B9EE3792EED23A2ED4FDEBFAB575C327C8E8213_inline(G_B2_0, __this, L_2, NULL);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::<InitializeCallbacks>b__32_5(System.Object,AppodealStack.Monetization.Common.RewardedVideoFinishedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideo_U3CInitializeCallbacksU3Eb__32_5_m67A6C642589D76EEAC111BE24D32A8CF7AEA69B0 (RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0* __this, RuntimeObject* ___0_sender, RewardedVideoFinishedEventArgs_tC53B8C04520C77DA8044F5687E99CB57DF45135C* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* G_B2_0 = NULL;
	EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* G_B1_0 = NULL;
	{
		// RewardedVideoAdEventsImpl.OnFinished += (sender, args) => OnFinished?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_0 = ((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnFinished_8;
		EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		RewardedVideoFinishedEventArgs_tC53B8C04520C77DA8044F5687E99CB57DF45135C* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_1_Invoke_m14395E51DB80C22CBACB91FE5CDC48EC09895040_inline(G_B2_0, __this, L_2, NULL);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::<InitializeCallbacks>b__32_6(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideo_U3CInitializeCallbacksU3Eb__32_6_mA7C0C9348835714D08F50500B2C5B12D4AE42C8E (RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B1_0 = NULL;
	{
		// RewardedVideoAdEventsImpl.OnClicked += (sender, args) => OnClicked?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnClicked_9;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B2_0, __this, L_2, NULL);
		return;
	}
}
// System.Void AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::<InitializeCallbacks>b__32_7(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideo_U3CInitializeCallbacksU3Eb__32_7_mE14BFC1C2C412046CCF0CEBB4D7B392499D2377B (RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B1_0 = NULL;
	{
		// RewardedVideoAdEventsImpl.OnExpired += (sender, args) => OnExpired?.Invoke(this, args);
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var))->___OnExpired_10;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___1_args;
		NullCheck(G_B2_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B2_0, __this, L_2, NULL);
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
// System.Int32 AppodealStack.Monetization.Common.BannerLoadedEventArgs::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BannerLoadedEventArgs_get_Height_mA213B30A8BBFCBFEE46468282A25AD892A2E7E85 (BannerLoadedEventArgs_t17EE25930EFBF4B368D44C0F357AC2B45C212CE7* __this, const RuntimeMethod* method) 
{
	{
		// public int Height { get; }
		int32_t L_0 = __this->___U3CHeightU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Boolean AppodealStack.Monetization.Common.BannerLoadedEventArgs::get_IsPrecache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BannerLoadedEventArgs_get_IsPrecache_mFB0639B7A7BB92499959BAED2A3C05B0BC87F2FE (BannerLoadedEventArgs_t17EE25930EFBF4B368D44C0F357AC2B45C212CE7* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPrecache { get; }
		bool L_0 = __this->___U3CIsPrecacheU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void AppodealStack.Monetization.Common.BannerLoadedEventArgs::.ctor(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerLoadedEventArgs__ctor_mA883853BCC0CA05CF0393567B79A613A0083E15D (BannerLoadedEventArgs_t17EE25930EFBF4B368D44C0F357AC2B45C212CE7* __this, int32_t ___0_height, bool ___1_isPrecache, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public BannerLoadedEventArgs(int height, bool isPrecache)
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		// Height = height;
		int32_t L_0 = ___0_height;
		__this->___U3CHeightU3Ek__BackingField_1 = L_0;
		// IsPrecache = isPrecache;
		bool L_1 = ___1_isPrecache;
		__this->___U3CIsPrecacheU3Ek__BackingField_2 = L_1;
		// }
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
// System.String AppodealStack.Monetization.Common.InAppPurchaseEventArgs::get_Json()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InAppPurchaseEventArgs_get_Json_m75FD46882175DE98E137568BEE88347ADDF33BD3 (InAppPurchaseEventArgs_t78C43610CE4ACAA37E1588542415921FCE470C73* __this, const RuntimeMethod* method) 
{
	{
		// public string Json { get; }
		String_t* L_0 = __this->___U3CJsonU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void AppodealStack.Monetization.Common.InAppPurchaseEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppPurchaseEventArgs__ctor_mF7790920A563659DF2EC8379247DE31DE077F970 (InAppPurchaseEventArgs_t78C43610CE4ACAA37E1588542415921FCE470C73* __this, String_t* ___0_json, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public InAppPurchaseEventArgs(string json)
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		// Json = json;
		String_t* L_0 = ___0_json;
		__this->___U3CJsonU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonU3Ek__BackingField_1), (void*)L_0);
		// }
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
// System.Boolean AppodealStack.Monetization.Common.RewardedVideoClosedEventArgs::get_Finished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RewardedVideoClosedEventArgs_get_Finished_m5C9920EB4DE875826B7A18E46F810B5D97AD1E4F (RewardedVideoClosedEventArgs_t4FC78F06AC8480C706595468368B1105D2216590* __this, const RuntimeMethod* method) 
{
	{
		// public bool Finished { get; }
		bool L_0 = __this->___U3CFinishedU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void AppodealStack.Monetization.Common.RewardedVideoClosedEventArgs::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoClosedEventArgs__ctor_m5DFF5482567229B0F177F078F3087B8725762FF3 (RewardedVideoClosedEventArgs_t4FC78F06AC8480C706595468368B1105D2216590* __this, bool ___0_finished, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RewardedVideoClosedEventArgs(bool finished)
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		// Finished = finished;
		bool L_0 = ___0_finished;
		__this->___U3CFinishedU3Ek__BackingField_1 = L_0;
		// }
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
// System.Double AppodealStack.Monetization.Common.RewardedVideoFinishedEventArgs::get_Amount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double RewardedVideoFinishedEventArgs_get_Amount_m2D8F820A685A53CF40F48F78C1FB11B8FCBD2652 (RewardedVideoFinishedEventArgs_tC53B8C04520C77DA8044F5687E99CB57DF45135C* __this, const RuntimeMethod* method) 
{
	{
		// public double Amount { get; }
		double L_0 = __this->___U3CAmountU3Ek__BackingField_1;
		return L_0;
	}
}
// System.String AppodealStack.Monetization.Common.RewardedVideoFinishedEventArgs::get_Currency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RewardedVideoFinishedEventArgs_get_Currency_mCA6F307075B3A8EAF8B6613618EFAC61C46684FB (RewardedVideoFinishedEventArgs_tC53B8C04520C77DA8044F5687E99CB57DF45135C* __this, const RuntimeMethod* method) 
{
	{
		// public string Currency { get; }
		String_t* L_0 = __this->___U3CCurrencyU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void AppodealStack.Monetization.Common.RewardedVideoFinishedEventArgs::.ctor(System.Double,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoFinishedEventArgs__ctor_m03555EA26D5A81759F9516454925EA76D0AB61E9 (RewardedVideoFinishedEventArgs_tC53B8C04520C77DA8044F5687E99CB57DF45135C* __this, double ___0_amount, String_t* ___1_currency, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RewardedVideoFinishedEventArgs(double amount, string currency)
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		// Amount = amount;
		double L_0 = ___0_amount;
		__this->___U3CAmountU3Ek__BackingField_1 = L_0;
		// Currency = currency;
		String_t* L_1 = ___1_currency;
		__this->___U3CCurrencyU3Ek__BackingField_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrencyU3Ek__BackingField_2), (void*)L_1);
		// }
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
// System.Collections.Generic.List`1<System.String> AppodealStack.Monetization.Common.SdkInitializedEventArgs::get_Errors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* SdkInitializedEventArgs_get_Errors_m0C2F58CACBB6A4CEC3360849DF346877F0C74345 (SdkInitializedEventArgs_t78A87E4997F422DFF4923A44CDCAE8693AA21005* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Errors { get; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CErrorsU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void AppodealStack.Monetization.Common.SdkInitializedEventArgs::.ctor(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SdkInitializedEventArgs__ctor_mF9B530F272105C78D11C9102B85803DF9E709D6C (SdkInitializedEventArgs_t78A87E4997F422DFF4923A44CDCAE8693AA21005* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_errors, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SdkInitializedEventArgs(List<string> errors)
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		// Errors = errors;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___0_errors;
		__this->___U3CErrorsU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorsU3Ek__BackingField_1), (void*)L_0);
		// }
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AdRevenueProxyListener_get_Listener_m5D57DCD7A3FBC688A80E4351467E800C86C8970E_inline (AdRevenueProxyListener_t30DC0858DAEB497DB660FC8E23E33FAE95D96BD8* __this, const RuntimeMethod* method) 
{
	{
		// public IAdRevenueListener Listener { get; set; }
		RuntimeObject* L_0 = __this->___U3CListenerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BannerAdProxyListener_get_Listener_m89D183EE9C48705AF7228B88A91C9C739110B116_inline (BannerAdProxyListener_t06D071D77AC552BD44D965E237E2BF23EF55B6B4* __this, const RuntimeMethod* method) 
{
	{
		// public IBannerAdListener Listener { get; set; }
		RuntimeObject* L_0 = __this->___U3CListenerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InAppPurchaseValidationProxyListener_get_Listener_mB34D728D3DDA2DCD6FC45BDD484CFB32AF79DAD9_inline (InAppPurchaseValidationProxyListener_tEF4A4E377F15B2E799679C630E558BCEA46D3685* __this, const RuntimeMethod* method) 
{
	{
		// public IInAppPurchaseValidationListener Listener { get; set; }
		RuntimeObject* L_0 = __this->___U3CListenerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InterstitialAdProxyListener_get_Listener_m63ED68762B7BDD43BF1F8E07F732CEAA77F2D47C_inline (InterstitialAdProxyListener_t4E5033E43955E6D87E7534249A68D9E059C177F4* __this, const RuntimeMethod* method) 
{
	{
		// public IInterstitialAdListener Listener { get; set; }
		RuntimeObject* L_0 = __this->___U3CListenerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MrecAdProxyListener_get_Listener_m64D1D371B31EA317F93AA8295549CD4911BCC87D_inline (MrecAdProxyListener_t78D0FE667A1F37F4ECBA9BC9561E8385741FC682* __this, const RuntimeMethod* method) 
{
	{
		// public IMrecAdListener Listener { get; set; }
		RuntimeObject* L_0 = __this->___U3CListenerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RewardedVideoAdProxyListener_get_Listener_mD15BBB1273334A3712B33EEB5F26AAC3211F9254_inline (RewardedVideoAdProxyListener_t185530F5D252F449D9F810724073AFCCFC9E893A* __this, const RuntimeMethod* method) 
{
	{
		// public IRewardedVideoAdListener Listener { get; set; }
		RuntimeObject* L_0 = __this->___U3CListenerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SdkProxyListener_get_InitListener_m51AA77D0867E2ED0EB505B67864D935E1CD1D1C5_inline (SdkProxyListener_t8B86FCD3D4F7D42A0DFF581EF5AF9B15F656D388* __this, const RuntimeMethod* method) 
{
	{
		// public IAppodealInitializationListener InitListener { get; set; }
		RuntimeObject* L_0 = __this->___U3CInitListenerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mB8EBD394BCA1574F4FE9C1C05A4F246099C4DA48_gshared_inline (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577* __this, RuntimeObject* ___0_sender, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
