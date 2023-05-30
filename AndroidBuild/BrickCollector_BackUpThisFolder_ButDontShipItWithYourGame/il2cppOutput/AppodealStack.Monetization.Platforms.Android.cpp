#include "pch-cpp.hpp"

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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

// System.EventHandler`1<AppodealStack.Monetization.Common.AdLoadedEventArgs>
struct EventHandler_1_t2B565FF3DD2EBAD29AB8BF9A19854CAD987E8BDA;
// System.EventHandler`1<AppodealStack.Monetization.Common.AdRevenueEventArgs>
struct EventHandler_1_t4C6EB12DD8550749AB1EBC040E740837CAD71308;
// System.EventHandler`1<AppodealStack.Monetization.Common.BannerLoadedEventArgs>
struct EventHandler_1_tA5E1A990BA7212E7794C600B402C6FE9F4E7F5BD;
// System.EventHandler`1<AppodealStack.Monetization.Common.RewardedVideoClosedEventArgs>
struct EventHandler_1_tBA14AD1171D39708971FD4E3A281A5EEB68CB3CE;
// System.EventHandler`1<AppodealStack.Monetization.Common.RewardedVideoFinishedEventArgs>
struct EventHandler_1_tBA5925E9C4EFE148800407A8C7B9945FFBA73113;
// System.EventHandler`1<AppodealStack.Monetization.Common.SdkInitializedEventArgs>
struct EventHandler_1_t75FD414C2DB363F6CE1DD82DF2863EA2A54BA80B;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// AppodealStack.Monetization.Platforms.Android.AndroidAppodealClient
struct AndroidAppodealClient_tB133501732F495D51E8FC291A2B3112AC1F04EA9;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase
struct AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15;
// AppodealStack.Monetization.Common.AppodealAdRevenue
struct AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14;
// AppodealStack.Monetization.Platforms.Android.AppodealAdRevenueCallback
struct AppodealAdRevenueCallback_t2985919255750784D355FFBDAAA6A3B1458ABFB5;
// AppodealStack.Monetization.Platforms.Android.AppodealBannerCallbacks
struct AppodealBannerCallbacks_tD08F3D43EF9F9F3BF5752A394E61465AC5BAD39D;
// AppodealStack.Monetization.Platforms.Android.AppodealInitializationCallback
struct AppodealInitializationCallback_t99FB1E04ACA3C9B387D8D17063CF1CEEC6EFB0DB;
// AppodealStack.Monetization.Platforms.Android.AppodealInterstitialCallbacks
struct AppodealInterstitialCallbacks_t64E953CC4D482E39B3C1EC285E1FD47D8C2CCAAA;
// AppodealStack.Monetization.Platforms.Android.AppodealMrecCallbacks
struct AppodealMrecCallbacks_t468DB9B535238C18329A8D6B78D3C8CBBF1C6A30;
// AppodealStack.Monetization.Platforms.Android.AppodealRewardedVideoCallbacks
struct AppodealRewardedVideoCallbacks_tCD33813C5E39FEC50E367019AF8DB215A7451476;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
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
// AppodealStack.Monetization.Common.IInterstitialAdListener
struct IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97;
// AppodealStack.Monetization.Common.IInterstitialAdProxyListener
struct IInterstitialAdProxyListener_t08AA56BE5B736E771161C83E8E0EC9189EAAE786;
// AppodealStack.Monetization.Common.IMrecAdListener
struct IMrecAdListener_tE137D04EDF5519329E09E69C094305D8CB9B5519;
// AppodealStack.Monetization.Common.IMrecAdProxyListener
struct IMrecAdProxyListener_tB1A11CCF8E542F43EDD41424240E33660E036083;
// AppodealStack.Monetization.Common.IPlayStoreInAppPurchase
struct IPlayStoreInAppPurchase_t8DBFBC4D95BA06F10E99C40C6BC60CA9399506B7;
// AppodealStack.Monetization.Common.IRewardedVideoAdListener
struct IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619;
// AppodealStack.Monetization.Common.IRewardedVideoAdProxyListener
struct IRewardedVideoAdProxyListener_tE234E4C058611167104301C38E6DDE2B3794FFB2;
// AppodealStack.Monetization.Common.ISdkProxyListener
struct ISdkProxyListener_t9690157AB76C6FB197B67A06E92332B3806220DD;
// AppodealStack.Monetization.Platforms.Android.InAppPurchaseValidationCallbacks
struct InAppPurchaseValidationCallbacks_tA9CB89CA137F2483DBC5F9796ABBECFB29C80020;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// AppodealStack.Monetization.Common.AppodealCallbacks/AdRevenue
struct AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402;
// AppodealStack.Monetization.Common.AppodealCallbacks/Banner
struct Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9;
// AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial
struct Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11;
// AppodealStack.Monetization.Common.AppodealCallbacks/Mrec
struct Mrec_t843799EFC43FACAD42BCB139872F609137368D0A;
// AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo
struct RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0;
// AppodealStack.Monetization.Common.AppodealCallbacks/Sdk
struct Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594;

IL2CPP_EXTERN_C RuntimeClass* AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppodealAdRevenueCallback_t2985919255750784D355FFBDAAA6A3B1458ABFB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppodealBannerCallbacks_tD08F3D43EF9F9F3BF5752A394E61465AC5BAD39D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppodealInitializationCallback_t99FB1E04ACA3C9B387D8D17063CF1CEEC6EFB0DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppodealInterstitialCallbacks_t64E953CC4D482E39B3C1EC285E1FD47D8C2CCAAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppodealMrecCallbacks_t468DB9B535238C18329A8D6B78D3C8CBBF1C6A30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppodealRewardedVideoCallbacks_tCD33813C5E39FEC50E367019AF8DB215A7451476_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAdRevenueListener_t4EA61CE68DC2AA7CABF8DFE002B359888AFFA2A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAppodealInitializationListener_tE391C3AC8EB20933A7F002B4A19AF18271F093CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBannerAdListener_tDFE091DE412D0D00B1B46E1E599D2649812A2FD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInAppPurchaseValidationListener_t2FC5FE145015D81E2F6A7EC4FD9C2E0BD84B7CD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMrecAdListener_tE137D04EDF5519329E09E69C094305D8CB9B5519_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISdkProxyListener_t9690157AB76C6FB197B67A06E92332B3806220DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04D30B74F0EF28A06E40A22A94C4297190C9C274;
IL2CPP_EXTERN_C String_t* _stringLiteral085CA762DFD4E627B76384B47D4F54E56DEC33E5;
IL2CPP_EXTERN_C String_t* _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral0DF4717FF3744ADC9D6594D138594510773E8221;
IL2CPP_EXTERN_C String_t* _stringLiteral114BCE5E07B2B89600E7B0C1E7991AC7281CDDA6;
IL2CPP_EXTERN_C String_t* _stringLiteral1777140D8D97044FF8F311251352F9296D503C01;
IL2CPP_EXTERN_C String_t* _stringLiteral1A0B29A05CEA7D30C594250785FD0F1CF9CDD25A;
IL2CPP_EXTERN_C String_t* _stringLiteral1A569D2EAEB9C57AE0D180CFA9396A30C0267A44;
IL2CPP_EXTERN_C String_t* _stringLiteral23D35608A295DEFB439CB815D8269265E7296685;
IL2CPP_EXTERN_C String_t* _stringLiteral2FF58A167C336D13CA80AE58D050204C3168A45B;
IL2CPP_EXTERN_C String_t* _stringLiteral32B6D4AD9F28EA69D0AA3CEA3501652D618991D6;
IL2CPP_EXTERN_C String_t* _stringLiteral3C94639EA36C2C0CE4A2DFCABFB11AD51B52DA80;
IL2CPP_EXTERN_C String_t* _stringLiteral3D5F37E59D7D4579EEFA5C6561A3BAD236BDCB08;
IL2CPP_EXTERN_C String_t* _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B;
IL2CPP_EXTERN_C String_t* _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192;
IL2CPP_EXTERN_C String_t* _stringLiteral4474E3FC85B339D6DAA5AA1F5E9B07B6A29AA928;
IL2CPP_EXTERN_C String_t* _stringLiteral450C8EF3D0450ABCD23C53730AAA221835C6A350;
IL2CPP_EXTERN_C String_t* _stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A;
IL2CPP_EXTERN_C String_t* _stringLiteral4C75F8761CF7E943CE7421225ACD69C6114921A4;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral4EAA2D04D4A3094B6B04F49C3159FCF4FB7747C4;
IL2CPP_EXTERN_C String_t* _stringLiteral506C0E6CB8E3CD27A270A5E257850A9F05E5203E;
IL2CPP_EXTERN_C String_t* _stringLiteral5251A946FA09A100AA16211026391756DF6AC82F;
IL2CPP_EXTERN_C String_t* _stringLiteral540027E5658E3DE55A4CA9332805DBB54BF0D776;
IL2CPP_EXTERN_C String_t* _stringLiteral5585FBF388577B51954D55CD9718B071F714A5B2;
IL2CPP_EXTERN_C String_t* _stringLiteral69B7D751F701ADE7E4311D601ED53CC18A34E7A7;
IL2CPP_EXTERN_C String_t* _stringLiteral6EE0C4A55C87FC05F35050460E614E0F888DDEAA;
IL2CPP_EXTERN_C String_t* _stringLiteral79EE773D85B5761664A30C7E8A5E129F1D9D1D0C;
IL2CPP_EXTERN_C String_t* _stringLiteral9104BA60C8C4178B041DE362336117E38E7D8E7C;
IL2CPP_EXTERN_C String_t* _stringLiteral986F7E1347EB5F4871D70861FDD3EAB83E9D520C;
IL2CPP_EXTERN_C String_t* _stringLiteral9A3ACC2D6DDA0D13C397ED45CC28B2C2ACE336DD;
IL2CPP_EXTERN_C String_t* _stringLiteralA564625C6CA0F5732921C8BEFF122CD85B8A599E;
IL2CPP_EXTERN_C String_t* _stringLiteralAB0F60F9B04828141D75CFADC1B0AB1D1F4805FC;
IL2CPP_EXTERN_C String_t* _stringLiteralB228AF03A708F87F86E3CD79BAFC8DD662AFAA3E;
IL2CPP_EXTERN_C String_t* _stringLiteralB6691EB799198D2F2DE5792A6C876A683BD655D9;
IL2CPP_EXTERN_C String_t* _stringLiteralBB706991AFB0D73D3ADDB49926DDF66CC8EF7385;
IL2CPP_EXTERN_C String_t* _stringLiteralBC1453603F9A6DE2102D6964D14E662C2E92AFB2;
IL2CPP_EXTERN_C String_t* _stringLiteralBC66AAE25429F9873B9E49C5D0F79323A7BEF08C;
IL2CPP_EXTERN_C String_t* _stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralC86E87BE20BE59C11EE2B8116555ED286D629170;
IL2CPP_EXTERN_C String_t* _stringLiteralC8EDDF8E870B50B041129E2A567902ECC562914E;
IL2CPP_EXTERN_C String_t* _stringLiteralD1BC95382E937429BD5741792056300D87684F48;
IL2CPP_EXTERN_C String_t* _stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1;
IL2CPP_EXTERN_C String_t* _stringLiteralD5F2751FCD979A5D75A2B143601934884E0565F4;
IL2CPP_EXTERN_C String_t* _stringLiteralD735BF7C82CB95BA33D103BB89639B9FD74E305E;
IL2CPP_EXTERN_C String_t* _stringLiteralD97076D98BAD4AA1D41CA1DEB7F160048EA39F77;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE4245D5B4962E0B91A8D1B5B6D00FC13E9FC56D6;
IL2CPP_EXTERN_C String_t* _stringLiteralE57FAAC2C3C1EC57A75C1EDA3400FA2E996BC5D7;
IL2CPP_EXTERN_C String_t* _stringLiteralED4CAD4F3756DB831C64F699611A51C21DAD8E53;
IL2CPP_EXTERN_C String_t* _stringLiteralF169275544223C785E8F3C2E7F2BB05FB2885329;
IL2CPP_EXTERN_C String_t* _stringLiteralF76E1644BDA01F3B1B4DB13F619B751E9A16D5B8;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFCBA8944E223367D783E62BAB112FD4CF35FEA6C;
IL2CPP_EXTERN_C String_t* _stringLiteralFDD40F6428D110E58E60F2903740B6628CF45726;
IL2CPP_EXTERN_C String_t* _stringLiteralFE0A78FD02140CB53F6246C99C5BB89ECF281FCF;
IL2CPP_EXTERN_C String_t* _stringLiteralFF301F3CDDD31E54985AE46B877A49B2E44D0E80;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t482EEFC739E4FE6176E013E036137D0FFC701B5F 
{
};

// System.EmptyArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80  : public RuntimeObject
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

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// AppodealStack.Monetization.Platforms.Android.AndroidAppodealClient
struct AndroidAppodealClient_tB133501732F495D51E8FC291A2B3112AC1F04EA9  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass AppodealStack.Monetization.Platforms.Android.AndroidAppodealClient::_appodealClass
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ____appodealClass_0;
	// UnityEngine.AndroidJavaObject AppodealStack.Monetization.Platforms.Android.AndroidAppodealClient::_activity
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____activity_1;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase
struct AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15  : public RuntimeObject
{
	// AppodealStack.Monetization.Common.IPlayStoreInAppPurchase AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase::<NativeInAppPurchase>k__BackingField
	RuntimeObject* ___U3CNativeInAppPurchaseU3Ek__BackingField_0;
	// UnityEngine.AndroidJavaObject AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase::_inAppPurchase
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____inAppPurchase_1;
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

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
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

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
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

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
};

// AppodealStack.Monetization.Platforms.Android.AppodealAdRevenueCallback
struct AppodealAdRevenueCallback_t2985919255750784D355FFBDAAA6A3B1458ABFB5  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// AppodealStack.Monetization.Common.IAdRevenueListener AppodealStack.Monetization.Platforms.Android.AppodealAdRevenueCallback::_listener
	RuntimeObject* ____listener_4;
};

// AppodealStack.Monetization.Platforms.Android.AppodealBannerCallbacks
struct AppodealBannerCallbacks_tD08F3D43EF9F9F3BF5752A394E61465AC5BAD39D  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// AppodealStack.Monetization.Common.IBannerAdListener AppodealStack.Monetization.Platforms.Android.AppodealBannerCallbacks::_listener
	RuntimeObject* ____listener_4;
};

// AppodealStack.Monetization.Platforms.Android.AppodealInitializationCallback
struct AppodealInitializationCallback_t99FB1E04ACA3C9B387D8D17063CF1CEEC6EFB0DB  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// AppodealStack.Monetization.Common.IAppodealInitializationListener AppodealStack.Monetization.Platforms.Android.AppodealInitializationCallback::_listener
	RuntimeObject* ____listener_4;
};

// AppodealStack.Monetization.Platforms.Android.AppodealInterstitialCallbacks
struct AppodealInterstitialCallbacks_t64E953CC4D482E39B3C1EC285E1FD47D8C2CCAAA  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// AppodealStack.Monetization.Common.IInterstitialAdListener AppodealStack.Monetization.Platforms.Android.AppodealInterstitialCallbacks::_listener
	RuntimeObject* ____listener_4;
};

// AppodealStack.Monetization.Platforms.Android.AppodealMrecCallbacks
struct AppodealMrecCallbacks_t468DB9B535238C18329A8D6B78D3C8CBBF1C6A30  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// AppodealStack.Monetization.Common.IMrecAdListener AppodealStack.Monetization.Platforms.Android.AppodealMrecCallbacks::_listener
	RuntimeObject* ____listener_4;
};

// AppodealStack.Monetization.Platforms.Android.AppodealRewardedVideoCallbacks
struct AppodealRewardedVideoCallbacks_tCD33813C5E39FEC50E367019AF8DB215A7451476  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// AppodealStack.Monetization.Common.IRewardedVideoAdListener AppodealStack.Monetization.Platforms.Android.AppodealRewardedVideoCallbacks::_listener
	RuntimeObject* ____listener_4;
};

// AppodealStack.Monetization.Platforms.Android.InAppPurchaseValidationCallbacks
struct InAppPurchaseValidationCallbacks_tA9CB89CA137F2483DBC5F9796ABBECFB29C80020  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// AppodealStack.Monetization.Common.IInAppPurchaseValidationListener AppodealStack.Monetization.Platforms.Android.InAppPurchaseValidationCallbacks::_listener
	RuntimeObject* ____listener_4;
};

// <Module>

// <Module>

// System.EmptyArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields
{
	// T[] System.EmptyArray`1::Value
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___Value_0;
};

// System.EmptyArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// AppodealStack.Monetization.Platforms.Android.AndroidAppodealClient

// AppodealStack.Monetization.Platforms.Android.AndroidAppodealClient

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase

// AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase

// AppodealStack.Monetization.Common.AppodealAdRevenue

// AppodealStack.Monetization.Common.AppodealAdRevenue

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

// UnityEngine.AndroidJavaClass

// UnityEngine.AndroidJavaClass

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

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Void

// System.Void

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
};

// UnityEngine.AndroidJavaProxy

// AppodealStack.Monetization.Platforms.Android.AppodealAdRevenueCallback

// AppodealStack.Monetization.Platforms.Android.AppodealAdRevenueCallback

// AppodealStack.Monetization.Platforms.Android.AppodealBannerCallbacks

// AppodealStack.Monetization.Platforms.Android.AppodealBannerCallbacks

// AppodealStack.Monetization.Platforms.Android.AppodealInitializationCallback

// AppodealStack.Monetization.Platforms.Android.AppodealInitializationCallback

// AppodealStack.Monetization.Platforms.Android.AppodealInterstitialCallbacks

// AppodealStack.Monetization.Platforms.Android.AppodealInterstitialCallbacks

// AppodealStack.Monetization.Platforms.Android.AppodealMrecCallbacks

// AppodealStack.Monetization.Platforms.Android.AppodealMrecCallbacks

// AppodealStack.Monetization.Platforms.Android.AppodealRewardedVideoCallbacks

// AppodealStack.Monetization.Platforms.Android.AppodealRewardedVideoCallbacks

// AppodealStack.Monetization.Platforms.Android.InAppPurchaseValidationCallbacks

// AppodealStack.Monetization.Platforms.Android.InAppPurchaseValidationCallbacks
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


// FieldType UnityEngine.AndroidJavaObject::GetStatic<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_GetStatic_TisIl2CppFullySharedGenericAny_mDD5B83921F6078373B85EB4F803492A68545BA7E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_m7843D14A0537A1190C739261EF49C05B1FF2ED90_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T[] System.Array::Empty<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mCA7EED8FFBB862858FF426BD7D6B191F9C24234B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;

// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* il2cppRetVal;
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisIl2CppFullySharedGenericAny_mDD5B83921F6078373B85EB4F803492A68545BA7E_gshared)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this, ___0_fieldName, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.AndroidJavaClass AppodealStack.Monetization.Platforms.Android.AndroidAppodealClient::GetAppodealClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* AndroidAppodealClient_GetAppodealClass_m9F7C395D3A36DBB1BCD43E7716DC80142C496841 (AndroidAppodealClient_tB133501732F495D51E8FC291A2B3112AC1F04EA9* __this, const RuntimeMethod* method) ;
// AppodealStack.Monetization.Common.AppodealCallbacks/Mrec AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mrec_t843799EFC43FACAD42BCB139872F609137368D0A* Mrec_get_Instance_m3DD6B802DDCE547D59B3354731E317F6FFC1387A (const RuntimeMethod* method) ;
// AppodealStack.Monetization.Common.IMrecAdProxyListener AppodealStack.Monetization.Common.AppodealCallbacks/Mrec::get_MrecAdEventsImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Mrec_get_MrecAdEventsImpl_mE5687CD4C9AA551E067880A7916AFCC54F1CA3E6 (Mrec_t843799EFC43FACAD42BCB139872F609137368D0A* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealMrecCallbacks::.ctor(AppodealStack.Monetization.Common.IMrecAdListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealMrecCallbacks__ctor_mEF1D604955C81EEA599901E06898251B8D4932DB (AppodealMrecCallbacks_t468DB9B535238C18329A8D6B78D3C8CBBF1C6A30* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// AppodealStack.Monetization.Common.AppodealCallbacks/Banner AppodealStack.Monetization.Common.AppodealCallbacks/Banner::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9* Banner_get_Instance_m98C3F0BF91B14703B4F483415E7BC5EE246A9326 (const RuntimeMethod* method) ;
// AppodealStack.Monetization.Common.IBannerAdProxyListener AppodealStack.Monetization.Common.AppodealCallbacks/Banner::get_BannerAdEventsImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Banner_get_BannerAdEventsImpl_m66B3D26B5CD222FD6D128BE0B62992F34F2502C3 (Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealBannerCallbacks::.ctor(AppodealStack.Monetization.Common.IBannerAdListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealBannerCallbacks__ctor_m4853C650FD4C4AC0372AC434B054962FB809355A (AppodealBannerCallbacks_tD08F3D43EF9F9F3BF5752A394E61465AC5BAD39D* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) ;
// AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11* Interstitial_get_Instance_m182791E578675DA150A84803139FE245994EAFB8 (const RuntimeMethod* method) ;
// AppodealStack.Monetization.Common.IInterstitialAdProxyListener AppodealStack.Monetization.Common.AppodealCallbacks/Interstitial::get_InterstitialAdEventsImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Interstitial_get_InterstitialAdEventsImpl_m1C5DC5C1B51C5A3BC9108ACD9F7174BA3853E0E0 (Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealInterstitialCallbacks::.ctor(AppodealStack.Monetization.Common.IInterstitialAdListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealInterstitialCallbacks__ctor_mA21E178A2DE273825DD3272B89579052E3494323 (AppodealInterstitialCallbacks_t64E953CC4D482E39B3C1EC285E1FD47D8C2CCAAA* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) ;
// AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0* RewardedVideo_get_Instance_mEE60E0050ECDFF153114847F1D31D8BA66B5540F (const RuntimeMethod* method) ;
// AppodealStack.Monetization.Common.IRewardedVideoAdProxyListener AppodealStack.Monetization.Common.AppodealCallbacks/RewardedVideo::get_RewardedVideoAdEventsImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewardedVideo_get_RewardedVideoAdEventsImpl_m35016F1E056CDA1F8640AF48ADCA8A8BF97EDD73 (RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealRewardedVideoCallbacks::.ctor(AppodealStack.Monetization.Common.IRewardedVideoAdListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealRewardedVideoCallbacks__ctor_m604E18990CDDE819AD43B355C3D2F8368819330C (AppodealRewardedVideoCallbacks_tCD33813C5E39FEC50E367019AF8DB215A7451476* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) ;
// AppodealStack.Monetization.Common.AppodealCallbacks/AdRevenue AppodealStack.Monetization.Common.AppodealCallbacks/AdRevenue::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402* AdRevenue_get_Instance_m3454295A18A935C02679152B254E3B95F0925650 (const RuntimeMethod* method) ;
// AppodealStack.Monetization.Common.IAdRevenueProxyListener AppodealStack.Monetization.Common.AppodealCallbacks/AdRevenue::get_AdRevenueEventsImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AdRevenue_get_AdRevenueEventsImpl_m6F986C339AF944BBA73CA81FA7F3D5008618262B (AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealAdRevenueCallback::.ctor(AppodealStack.Monetization.Common.IAdRevenueListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealAdRevenueCallback__ctor_mA12299998BD70D33F9CA73AA41BBD3BDD6CE5297 (AppodealAdRevenueCallback_t2985919255750784D355FFBDAAA6A3B1458ABFB5* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) ;
// AppodealStack.Monetization.Common.AppodealCallbacks/Sdk AppodealStack.Monetization.Common.AppodealCallbacks/Sdk::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594* Sdk_get_Instance_mE24B89FA7BD5811A2366FBD59E5770CBF80D124E (const RuntimeMethod* method) ;
// AppodealStack.Monetization.Common.ISdkProxyListener AppodealStack.Monetization.Common.AppodealCallbacks/Sdk::get_SdkEventsImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Sdk_get_SdkEventsImpl_m0087BF99F719EE6D7D1CA69AD18748175CE97123 (Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealInitializationCallback::.ctor(AppodealStack.Monetization.Common.IAppodealInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealInitializationCallback__ctor_m6CFF2F48F8264054D6619186216CFAEC16EB1081 (AppodealInitializationCallback_t99FB1E04ACA3C9B387D8D17063CF1CEEC6EFB0DB* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Platforms.Android.AndroidAppodealClient::SetCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidAppodealClient_SetCallbacks_mC821BC2377D3A776FD8E48504A18D05E53DAAB2D (AndroidAppodealClient_tB133501732F495D51E8FC291A2B3112AC1F04EA9* __this, const RuntimeMethod* method) ;
// System.String AppodealStack.Monetization.Common.AppodealVersions::GetPluginVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppodealVersions_GetPluginVersion_mF4EC045AA29117CE065D7CC52C5D72D2ACB66F8D (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.String AppodealStack.Monetization.Common.AppodealVersions::GetUnityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppodealVersions_GetUnityVersion_mF67769796B6BDA9DB0E14E3A6A86D5179C3C50AF (const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject AppodealStack.Monetization.Platforms.Android.AndroidAppodealClient::GetActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidAppodealClient_GetActivity_m79A4F50B2DC0EA9C4ABE896CD547C03380F1210A (AndroidAppodealClient_tB133501732F495D51E8FC291A2B3112AC1F04EA9* __this, const RuntimeMethod* method) ;
// System.Int32 AppodealStack.Monetization.Platforms.Android.AndroidAppodealClient::NativeAdTypesForType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidAppodealClient_NativeAdTypesForType_mF50D56E5CF82CB5F7CF4934A9272FF854C5D3CD9 (int32_t ___0_adTypes, const RuntimeMethod* method) ;
// AppodealStack.Monetization.Platforms.Android.AppodealInitializationCallback AppodealStack.Monetization.Platforms.Android.AndroidAppodealClient::GetInitCallback(AppodealStack.Monetization.Common.IAppodealInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppodealInitializationCallback_t99FB1E04ACA3C9B387D8D17063CF1CEEC6EFB0DB* AndroidAppodealClient_GetInitCallback_m403904FFB3AFCEF1B191F544C24E1B4202CA5BBE (AndroidAppodealClient_tB133501732F495D51E8FC291A2B3112AC1F04EA9* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) ;
// System.Int32 AppodealStack.Monetization.Platforms.Android.AndroidAppodealClient::NativeShowStyleForType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidAppodealClient_NativeShowStyleForType_mFDF1BB48C487EEDB54E427688FE270B4A901BBF2 (int32_t ___0_adTypes, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	bool il2cppRetVal;
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_m7843D14A0537A1190C739261EF49C05B1FF2ED90_gshared)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this, ___0_methodName, ___1_args, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase::GetInAppPurchase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidPlayStoreInAppPurchase_GetInAppPurchase_m0C335F46A61CAF31670DE3916C3EBB47D4DD6240_inline (AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline)(method);
	return (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)il2cppRetVal;
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mCA7EED8FFBB862858FF426BD7D6B191F9C24234B_gshared)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this, ___0_methodName, ___1_args, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int64>(System.String,System.Object[])
inline int64_t AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	int64_t il2cppRetVal;
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mCA7EED8FFBB862858FF426BD7D6B191F9C24234B_gshared)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this, ___0_methodName, ___1_args, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* il2cppRetVal;
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mCA7EED8FFBB862858FF426BD7D6B191F9C24234B_gshared)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this, ___0_methodName, ___1_args, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___0_javaInterface, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Common.AppodealAdRevenue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealAdRevenue__ctor_m0D2A7BFD59BBE488C86F87AD2B99655A1FB503C3 (AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14* __this, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Double>(System.String,System.Object[])
inline double AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	double il2cppRetVal;
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mCA7EED8FFBB862858FF426BD7D6B191F9C24234B_gshared)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this, ___0_methodName, ___1_args, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mCA7EED8FFBB862858FF426BD7D6B191F9C24234B_gshared)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this, ___0_methodName, ___1_args, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.String AppodealStack.Monetization.Platforms.Android.InAppPurchaseValidationCallbacks::CreateResponse(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InAppPurchaseValidationCallbacks_CreateResponse_m07195589767399373A925542F0F4A8C751B85CBB (InAppPurchaseValidationCallbacks_tA9CB89CA137F2483DBC5F9796ABBECFB29C80020* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_purchase, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_errors, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPlayStoreInAppPurchase__ctor_m0B64D80D65E10CA66E478B66EDA954BB118E03EF (AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_inAppPurchase, const RuntimeMethod* method) ;
// System.String AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase::GetPublicKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidPlayStoreInAppPurchase_GetPublicKey_m07EACA89116ED2B48E50D97EA214F3A51B6426C4 (AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.String AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase::GetSignature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidPlayStoreInAppPurchase_GetSignature_m42F76F0821F21C061DD4F8BF793BEC315D24DB84 (AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* __this, const RuntimeMethod* method) ;
// System.String AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase::GetPurchaseData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidPlayStoreInAppPurchase_GetPurchaseData_m0DC659FF59B486347564236F77276549A81EB41A (AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* __this, const RuntimeMethod* method) ;
// System.String AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase::GetPrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidPlayStoreInAppPurchase_GetPrice_m69ABF5700FECC5A1DF8091AEA0F5F14E6B35B3EE (AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* __this, const RuntimeMethod* method) ;
// System.String AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase::GetCurrency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidPlayStoreInAppPurchase_GetCurrency_m93AB53316DED324D2A008B4E299468575B239FF8 (AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* __this, const RuntimeMethod* method) ;
// System.String AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase::GetSku()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidPlayStoreInAppPurchase_GetSku_mDDD2E7E72E4FB9B6932F7B31F06A66432B50526D (AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* __this, const RuntimeMethod* method) ;
// System.String AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase::GetOrderId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidPlayStoreInAppPurchase_GetOrderId_m0FFAF3DB8934509FFB5605F1DB66B66F4F794147 (AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* __this, const RuntimeMethod* method) ;
// System.String AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase::GetPurchaseToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidPlayStoreInAppPurchase_GetPurchaseToken_mADB9ADF1D47D7400C20E19E1D27E9BF82E2D93D6 (AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* __this, const RuntimeMethod* method) ;
// System.Int64 AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase::GetPurchaseTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidPlayStoreInAppPurchase_GetPurchaseTimestamp_mF67E438520E0F5D619659BCEBD921C9D066DD11E (AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.String AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase::GetAdditionalParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidPlayStoreInAppPurchase_GetAdditionalParameters_m963CD58DC00897BF70DA3C609000F08088E95052 (AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* __this, const RuntimeMethod* method) ;
// System.String AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase::GetDeveloperPayload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidPlayStoreInAppPurchase_GetDeveloperPayload_mB7E1FD5B1BFE371120FA76CC406FF2A2CCF3C3A9 (AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.String System.String::Join(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158 (String_t* ___0_separator, RuntimeObject* ___1_values, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
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
// System.Int32 AppodealStack.Monetization.Platforms.Android.AndroidAppodealClient::NativeAdTypesForType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidAppodealClient_NativeAdTypesForType_mF50D56E5CF82CB5F7CF4934A9272FF854C5D3CD9 (int32_t ___0_adTypes, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// var nativeAdTypes = 0;
		V_0 = 0;
		// if ((adTypes & AppodealAdType.Interstitial) > 0)
		int32_t L_0 = ___0_adTypes;
		if ((((int32_t)((int32_t)(L_0&1))) <= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		// nativeAdTypes |= AppodealAdTypeInterstitial;
		int32_t L_1 = V_0;
		V_0 = ((int32_t)(L_1|3));
	}

IL_000c:
	{
		// if ((adTypes & AppodealAdType.Banner) > 0)
		int32_t L_2 = ___0_adTypes;
		if ((((int32_t)((int32_t)(L_2&2))) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		// nativeAdTypes |= AppodealAdTypeBanner;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)(L_3|4));
	}

IL_0016:
	{
		// if ((adTypes & AppodealAdType.Mrec) > 0)
		int32_t L_4 = ___0_adTypes;
		if ((((int32_t)((int32_t)(L_4&8))) <= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		// nativeAdTypes |= AppodealAdTypeMrec;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)(L_5|((int32_t)256)));
	}

IL_0024:
	{
		// if ((adTypes & AppodealAdType.RewardedVideo) > 0)
		int32_t L_6 = ___0_adTypes;
		if ((((int32_t)((int32_t)(L_6&4))) <= ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		// nativeAdTypes |= AppodealAdTypeRewardedVideo;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)(L_7|((int32_t)128)));
	}

IL_0032:
	{
		// return nativeAdTypes;
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Int32 AppodealStack.Monetization.Platforms.Android.AndroidAppodealClient::NativeShowStyleForType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidAppodealClient_NativeShowStyleForType_mFDF1BB48C487EEDB54E427688FE270B4A901BBF2 (int32_t ___0_adTypes, const RuntimeMethod* method) 
{
	{
		// if ((adTypes & AppodealShowStyle.Interstitial) > 0)
		int32_t L_0 = ___0_adTypes;
		if ((((int32_t)((int32_t)(L_0&1))) <= ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		// return AppodealShowStyleInterstitial;
		return 3;
	}

IL_0008:
	{
		// if ((adTypes & AppodealShowStyle.BannerTop) > 0)
		int32_t L_1 = ___0_adTypes;
		if ((((int32_t)((int32_t)(L_1&4))) <= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		// return AppodealShowStyleBannerTop;
		return ((int32_t)16);
	}

IL_0011:
	{
		// if ((adTypes & AppodealShowStyle.BannerBottom) > 0)
		int32_t L_2 = ___0_adTypes;
		if ((((int32_t)((int32_t)(L_2&2))) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		// return AppodealShowStyleBannerBottom;
		return 8;
	}

IL_0019:
	{
		// if ((adTypes & AppodealShowStyle.BannerLeft) > 0)
		int32_t L_3 = ___0_adTypes;
		if ((((int32_t)((int32_t)(L_3&8))) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		// return AppodealShowStyleBannerLeft;
		return ((int32_t)1024);
	}

IL_0025:
	{
		// if ((adTypes & AppodealShowStyle.BannerRight) > 0)
		int32_t L_4 = ___0_adTypes;
		if ((((int32_t)((int32_t)(L_4&((int32_t)16)))) <= ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		// return AppodealShowStyleBannerRight;
		return ((int32_t)2048);
	}

IL_0032:
	{
		// if ((adTypes & AppodealShowStyle.RewardedVideo) > 0)
		int32_t L_5 = ___0_adTypes;
		if ((((int32_t)((int32_t)(L_5&((int32_t)32)))) <= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		// return AppodealShowStyleRewardedVideo;
		return ((int32_t)128);
	}

IL_003f:
	{
		// return 0;
		return 0;
	}
}
// UnityEngine.AndroidJavaClass AppodealStack.Monetization.Platforms.Android.AndroidAppodealClient::GetAppodealClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* AndroidAppodealClient_GetAppodealClass_m9F7C395D3A36DBB1BCD43E7716DC80142C496841 (AndroidAppodealClient_tB133501732F495D51E8FC291A2B3112AC1F04EA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral506C0E6CB8E3CD27A270A5E257850A9F05E5203E);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* G_B2_0 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* G_B1_0 = NULL;
	{
		// return _appodealClass ?? (_appodealClass = new AndroidJavaClass("com.appodeal.ads.Appodeal"));
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = __this->____appodealClass_0;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001d;
		}
	}
	{
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, _stringLiteral506C0E6CB8E3CD27A270A5E257850A9F05E5203E, NULL);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = L_2;
		V_0 = L_3;
		__this->____appodealClass_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____appodealClass_0), (void*)L_3);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_001d:
	{
		return G_B2_0;
	}
}
// UnityEngine.AndroidJavaObject AppodealStack.Monetization.Platforms.Android.AndroidAppodealClient::GetActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidAppodealClient_GetActivity_m79A4F50B2DC0EA9C4ABE896CD547C03380F1210A (AndroidAppodealClient_tB133501732F495D51E8FC291A2B3112AC1F04EA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* G_B2_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* G_B1_0 = NULL;
	{
		// return _activity ?? (_activity = new AndroidJavaClass("com.unity3d.player.UnityPlayer").GetStatic<AndroidJavaObject>("currentActivity"));
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____activity_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0027;
		}
	}
	{
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		NullCheck(L_2);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_2, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = L_3;
		V_0 = L_4;
		__this->____activity_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activity_1), (void*)L_4);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_0027:
	{
		return G_B2_0;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AndroidAppodealClient::SetCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidAppodealClient_SetCallbacks_mC821BC2377D3A776FD8E48504A18D05E53DAAB2D (AndroidAppodealClient_tB133501732F495D51E8FC291A2B3112AC1F04EA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppodealAdRevenueCallback_t2985919255750784D355FFBDAAA6A3B1458ABFB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppodealBannerCallbacks_tD08F3D43EF9F9F3BF5752A394E61465AC5BAD39D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppodealInterstitialCallbacks_t64E953CC4D482E39B3C1EC285E1FD47D8C2CCAAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppodealMrecCallbacks_t468DB9B535238C18329A8D6B78D3C8CBBF1C6A30_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppodealRewardedVideoCallbacks_tCD33813C5E39FEC50E367019AF8DB215A7451476_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1777140D8D97044FF8F311251352F9296D503C01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4474E3FC85B339D6DAA5AA1F5E9B07B6A29AA928);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD97076D98BAD4AA1D41CA1DEB7F160048EA39F77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4245D5B4962E0B91A8D1B5B6D00FC13E9FC56D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE57FAAC2C3C1EC57A75C1EDA3400FA2E996BC5D7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetAppodealClass().CallStatic("setMrecCallbacks", new AppodealMrecCallbacks(AppodealCallbacks.Mrec.Instance.MrecAdEventsImpl));
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0;
		L_0 = AndroidAppodealClient_GetAppodealClass_m9F7C395D3A36DBB1BCD43E7716DC80142C496841(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		il2cpp_codegen_runtime_class_init_inline(Mrec_t843799EFC43FACAD42BCB139872F609137368D0A_il2cpp_TypeInfo_var);
		Mrec_t843799EFC43FACAD42BCB139872F609137368D0A* L_3;
		L_3 = Mrec_get_Instance_m3DD6B802DDCE547D59B3354731E317F6FFC1387A(NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = Mrec_get_MrecAdEventsImpl_mE5687CD4C9AA551E067880A7916AFCC54F1CA3E6(L_3, NULL);
		AppodealMrecCallbacks_t468DB9B535238C18329A8D6B78D3C8CBBF1C6A30* L_5 = (AppodealMrecCallbacks_t468DB9B535238C18329A8D6B78D3C8CBBF1C6A30*)il2cpp_codegen_object_new(AppodealMrecCallbacks_t468DB9B535238C18329A8D6B78D3C8CBBF1C6A30_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AppodealMrecCallbacks__ctor_mEF1D604955C81EEA599901E06898251B8D4932DB(L_5, L_4, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral1777140D8D97044FF8F311251352F9296D503C01, L_2, NULL);
		// GetAppodealClass().CallStatic("setBannerCallbacks", new AppodealBannerCallbacks(AppodealCallbacks.Banner.Instance.BannerAdEventsImpl));
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_6;
		L_6 = AndroidAppodealClient_GetAppodealClass_m9F7C395D3A36DBB1BCD43E7716DC80142C496841(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		il2cpp_codegen_runtime_class_init_inline(Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9_il2cpp_TypeInfo_var);
		Banner_tF9D5222AB2658DC3749AFB045B7F2D501940A6A9* L_9;
		L_9 = Banner_get_Instance_m98C3F0BF91B14703B4F483415E7BC5EE246A9326(NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = Banner_get_BannerAdEventsImpl_m66B3D26B5CD222FD6D128BE0B62992F34F2502C3(L_9, NULL);
		AppodealBannerCallbacks_tD08F3D43EF9F9F3BF5752A394E61465AC5BAD39D* L_11 = (AppodealBannerCallbacks_tD08F3D43EF9F9F3BF5752A394E61465AC5BAD39D*)il2cpp_codegen_object_new(AppodealBannerCallbacks_tD08F3D43EF9F9F3BF5752A394E61465AC5BAD39D_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		AppodealBannerCallbacks__ctor_m4853C650FD4C4AC0372AC434B054962FB809355A(L_11, L_10, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
		NullCheck(L_6);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_6, _stringLiteralE4245D5B4962E0B91A8D1B5B6D00FC13E9FC56D6, L_8, NULL);
		// GetAppodealClass().CallStatic("setInterstitialCallbacks", new AppodealInterstitialCallbacks(AppodealCallbacks.Interstitial.Instance.InterstitialAdEventsImpl));
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_12;
		L_12 = AndroidAppodealClient_GetAppodealClass_m9F7C395D3A36DBB1BCD43E7716DC80142C496841(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		il2cpp_codegen_runtime_class_init_inline(Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11_il2cpp_TypeInfo_var);
		Interstitial_tED1739F1E548B1DF4257BF930BB812E6A7282D11* L_15;
		L_15 = Interstitial_get_Instance_m182791E578675DA150A84803139FE245994EAFB8(NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = Interstitial_get_InterstitialAdEventsImpl_m1C5DC5C1B51C5A3BC9108ACD9F7174BA3853E0E0(L_15, NULL);
		AppodealInterstitialCallbacks_t64E953CC4D482E39B3C1EC285E1FD47D8C2CCAAA* L_17 = (AppodealInterstitialCallbacks_t64E953CC4D482E39B3C1EC285E1FD47D8C2CCAAA*)il2cpp_codegen_object_new(AppodealInterstitialCallbacks_t64E953CC4D482E39B3C1EC285E1FD47D8C2CCAAA_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		AppodealInterstitialCallbacks__ctor_mA21E178A2DE273825DD3272B89579052E3494323(L_17, L_16, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_17);
		NullCheck(L_12);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_12, _stringLiteralD97076D98BAD4AA1D41CA1DEB7F160048EA39F77, L_14, NULL);
		// GetAppodealClass().CallStatic("setRewardedVideoCallbacks", new AppodealRewardedVideoCallbacks(AppodealCallbacks.RewardedVideo.Instance.RewardedVideoAdEventsImpl));
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_18;
		L_18 = AndroidAppodealClient_GetAppodealClass_m9F7C395D3A36DBB1BCD43E7716DC80142C496841(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_19;
		il2cpp_codegen_runtime_class_init_inline(RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0_il2cpp_TypeInfo_var);
		RewardedVideo_tAC6B979B9F7E084CD60B5C2F9D68C56C8B833FA0* L_21;
		L_21 = RewardedVideo_get_Instance_mEE60E0050ECDFF153114847F1D31D8BA66B5540F(NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = RewardedVideo_get_RewardedVideoAdEventsImpl_m35016F1E056CDA1F8640AF48ADCA8A8BF97EDD73(L_21, NULL);
		AppodealRewardedVideoCallbacks_tCD33813C5E39FEC50E367019AF8DB215A7451476* L_23 = (AppodealRewardedVideoCallbacks_tCD33813C5E39FEC50E367019AF8DB215A7451476*)il2cpp_codegen_object_new(AppodealRewardedVideoCallbacks_tCD33813C5E39FEC50E367019AF8DB215A7451476_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		AppodealRewardedVideoCallbacks__ctor_m604E18990CDDE819AD43B355C3D2F8368819330C(L_23, L_22, NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_23);
		NullCheck(L_18);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_18, _stringLiteralE57FAAC2C3C1EC57A75C1EDA3400FA2E996BC5D7, L_20, NULL);
		// GetAppodealClass().CallStatic("setAdRevenueCallbacks", new AppodealAdRevenueCallback(AppodealCallbacks.AdRevenue.Instance.AdRevenueEventsImpl));
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_24;
		L_24 = AndroidAppodealClient_GetAppodealClass_m9F7C395D3A36DBB1BCD43E7716DC80142C496841(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_25;
		il2cpp_codegen_runtime_class_init_inline(AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402_il2cpp_TypeInfo_var);
		AdRevenue_t2389D753FA7AC2A7660C4B6C0CD98A731A523402* L_27;
		L_27 = AdRevenue_get_Instance_m3454295A18A935C02679152B254E3B95F0925650(NULL);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = AdRevenue_get_AdRevenueEventsImpl_m6F986C339AF944BBA73CA81FA7F3D5008618262B(L_27, NULL);
		AppodealAdRevenueCallback_t2985919255750784D355FFBDAAA6A3B1458ABFB5* L_29 = (AppodealAdRevenueCallback_t2985919255750784D355FFBDAAA6A3B1458ABFB5*)il2cpp_codegen_object_new(AppodealAdRevenueCallback_t2985919255750784D355FFBDAAA6A3B1458ABFB5_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		AppodealAdRevenueCallback__ctor_mA12299998BD70D33F9CA73AA41BBD3BDD6CE5297(L_29, L_28, NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_29);
		NullCheck(L_24);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_24, _stringLiteral4474E3FC85B339D6DAA5AA1F5E9B07B6A29AA928, L_26, NULL);
		// }
		return;
	}
}
// AppodealStack.Monetization.Platforms.Android.AppodealInitializationCallback AppodealStack.Monetization.Platforms.Android.AndroidAppodealClient::GetInitCallback(AppodealStack.Monetization.Common.IAppodealInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppodealInitializationCallback_t99FB1E04ACA3C9B387D8D17063CF1CEEC6EFB0DB* AndroidAppodealClient_GetInitCallback_m403904FFB3AFCEF1B191F544C24E1B4202CA5BBE (AndroidAppodealClient_tB133501732F495D51E8FC291A2B3112AC1F04EA9* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppodealInitializationCallback_t99FB1E04ACA3C9B387D8D17063CF1CEEC6EFB0DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISdkProxyListener_t9690157AB76C6FB197B67A06E92332B3806220DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AppodealCallbacks.Sdk.Instance.SdkEventsImpl.InitListener = listener;
		il2cpp_codegen_runtime_class_init_inline(Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594_il2cpp_TypeInfo_var);
		Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594* L_0;
		L_0 = Sdk_get_Instance_mE24B89FA7BD5811A2366FBD59E5770CBF80D124E(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Sdk_get_SdkEventsImpl_m0087BF99F719EE6D7D1CA69AD18748175CE97123(L_0, NULL);
		RuntimeObject* L_2 = ___0_listener;
		NullCheck(L_1);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void AppodealStack.Monetization.Common.ISdkProxyListener::set_InitListener(AppodealStack.Monetization.Common.IAppodealInitializationListener) */, ISdkProxyListener_t9690157AB76C6FB197B67A06E92332B3806220DD_il2cpp_TypeInfo_var, L_1, L_2);
		// return new AppodealInitializationCallback(AppodealCallbacks.Sdk.Instance.SdkEventsImpl);
		Sdk_t92817F011CC064D29CDDC8BD66E4C6517BA5C594* L_3;
		L_3 = Sdk_get_Instance_mE24B89FA7BD5811A2366FBD59E5770CBF80D124E(NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = Sdk_get_SdkEventsImpl_m0087BF99F719EE6D7D1CA69AD18748175CE97123(L_3, NULL);
		AppodealInitializationCallback_t99FB1E04ACA3C9B387D8D17063CF1CEEC6EFB0DB* L_5 = (AppodealInitializationCallback_t99FB1E04ACA3C9B387D8D17063CF1CEEC6EFB0DB*)il2cpp_codegen_object_new(AppodealInitializationCallback_t99FB1E04ACA3C9B387D8D17063CF1CEEC6EFB0DB_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AppodealInitializationCallback__ctor_m6CFF2F48F8264054D6619186216CFAEC16EB1081(L_5, L_4, NULL);
		return L_5;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AndroidAppodealClient::Initialize(System.String,System.Int32,AppodealStack.Monetization.Common.IAppodealInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidAppodealClient_Initialize_m4E4ABD6E4DCA2156B883E194643E18888C9CE689 (AndroidAppodealClient_tB133501732F495D51E8FC291A2B3112AC1F04EA9* __this, String_t* ___0_appKey, int32_t ___1_adTypes, RuntimeObject* ___2_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral114BCE5E07B2B89600E7B0C1E7991AC7281CDDA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C94639EA36C2C0CE4A2DFCABFB11AD51B52DA80);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB0F60F9B04828141D75CFADC1B0AB1D1F4805FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetCallbacks();
		AndroidAppodealClient_SetCallbacks_mC821BC2377D3A776FD8E48504A18D05E53DAAB2D(__this, NULL);
		// GetAppodealClass().CallStatic("setFramework", "unity", $"{AppodealVersions.GetPluginVersion()}-upm", AppodealVersions.GetUnityVersion());
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0;
		L_0 = AndroidAppodealClient_GetAppodealClass_m9F7C395D3A36DBB1BCD43E7716DC80142C496841(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral114BCE5E07B2B89600E7B0C1E7991AC7281CDDA6);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral114BCE5E07B2B89600E7B0C1E7991AC7281CDDA6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4;
		L_4 = AppodealVersions_GetPluginVersion_mF4EC045AA29117CE065D7CC52C5D72D2ACB66F8D(NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, _stringLiteralAB0F60F9B04828141D75CFADC1B0AB1D1F4805FC, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_3;
		String_t* L_7;
		L_7 = AppodealVersions_GetUnityVersion_mF67769796B6BDA9DB0E14E3A6A86D5179C3C50AF(NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral3C94639EA36C2C0CE4A2DFCABFB11AD51B52DA80, L_6, NULL);
		// GetAppodealClass().CallStatic("initialize", GetActivity(), appKey, NativeAdTypesForType(adTypes), GetInitCallback(listener));
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_8;
		L_8 = AndroidAppodealClient_GetAppodealClass_m9F7C395D3A36DBB1BCD43E7716DC80142C496841(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11;
		L_11 = AndroidAppodealClient_GetActivity_m79A4F50B2DC0EA9C4ABE896CD547C03380F1210A(__this, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_10;
		String_t* L_13 = ___0_appKey;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_12;
		int32_t L_15 = ___1_adTypes;
		int32_t L_16;
		L_16 = AndroidAppodealClient_NativeAdTypesForType_mF50D56E5CF82CB5F7CF4934A9272FF854C5D3CD9(L_15, NULL);
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_14;
		RuntimeObject* L_20 = ___2_listener;
		AppodealInitializationCallback_t99FB1E04ACA3C9B387D8D17063CF1CEEC6EFB0DB* L_21;
		L_21 = AndroidAppodealClient_GetInitCallback_m403904FFB3AFCEF1B191F544C24E1B4202CA5BBE(__this, L_20, NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_21);
		NullCheck(L_8);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_8, _stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1, L_19, NULL);
		// }
		return;
	}
}
// System.Boolean AppodealStack.Monetization.Platforms.Android.AndroidAppodealClient::Show(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidAppodealClient_Show_mC470EACF8FB174C0A9E4F0D147D11852CA11E7ED (AndroidAppodealClient_tB133501732F495D51E8FC291A2B3112AC1F04EA9* __this, int32_t ___0_adTypes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetAppodealClass().CallStatic<bool>("show", GetActivity(), NativeShowStyleForType(adTypes));
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0;
		L_0 = AndroidAppodealClient_GetAppodealClass_m9F7C395D3A36DBB1BCD43E7716DC80142C496841(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidAppodealClient_GetActivity_m79A4F50B2DC0EA9C4ABE896CD547C03380F1210A(__this, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		int32_t L_5 = ___0_adTypes;
		int32_t L_6;
		L_6 = AndroidAppodealClient_NativeShowStyleForType_mFDF1BB48C487EEDB54E427688FE270B4A901BBF2(L_5, NULL);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		NullCheck(L_0);
		bool L_9;
		L_9 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_0, _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192, L_4, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		return L_9;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AndroidAppodealClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidAppodealClient__ctor_m7FA1FC90017A0AED05DE92A2589747DE6C58A6F8 (AndroidAppodealClient_tB133501732F495D51E8FC291A2B3112AC1F04EA9* __this, const RuntimeMethod* method) 
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
// System.Void AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPlayStoreInAppPurchase__ctor_m0B64D80D65E10CA66E478B66EDA954BB118E03EF (AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_inAppPurchase, const RuntimeMethod* method) 
{
	{
		// public AndroidPlayStoreInAppPurchase (AndroidJavaObject inAppPurchase)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _inAppPurchase = inAppPurchase;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_inAppPurchase;
		__this->____inAppPurchase_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____inAppPurchase_1), (void*)L_0);
		// NativeInAppPurchase = this;
		__this->___U3CNativeInAppPurchaseU3Ek__BackingField_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNativeInAppPurchaseU3Ek__BackingField_0), (void*)__this);
		// }
		return;
	}
}
// UnityEngine.AndroidJavaObject AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase::GetInAppPurchase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidPlayStoreInAppPurchase_GetInAppPurchase_m0C335F46A61CAF31670DE3916C3EBB47D4DD6240 (AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* __this, const RuntimeMethod* method) 
{
	{
		// return _inAppPurchase;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____inAppPurchase_1;
		return L_0;
	}
}
// System.String AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase::GetPublicKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidPlayStoreInAppPurchase_GetPublicKey_m07EACA89116ED2B48E50D97EA214F3A51B6426C4 (AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC66AAE25429F9873B9E49C5D0F79323A7BEF08C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetInAppPurchase().Call<string>("getPublicKey");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidPlayStoreInAppPurchase_GetInAppPurchase_m0C335F46A61CAF31670DE3916C3EBB47D4DD6240_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, _stringLiteralBC66AAE25429F9873B9E49C5D0F79323A7BEF08C, L_1, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_2;
	}
}
// System.String AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase::GetSignature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidPlayStoreInAppPurchase_GetSignature_m42F76F0821F21C061DD4F8BF793BEC315D24DB84 (AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral450C8EF3D0450ABCD23C53730AAA221835C6A350);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetInAppPurchase().Call<string>("getSignature");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidPlayStoreInAppPurchase_GetInAppPurchase_m0C335F46A61CAF31670DE3916C3EBB47D4DD6240_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, _stringLiteral450C8EF3D0450ABCD23C53730AAA221835C6A350, L_1, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_2;
	}
}
// System.String AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase::GetPurchaseData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidPlayStoreInAppPurchase_GetPurchaseData_m0DC659FF59B486347564236F77276549A81EB41A (AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23D35608A295DEFB439CB815D8269265E7296685);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetInAppPurchase().Call<string>("getPurchaseData");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidPlayStoreInAppPurchase_GetInAppPurchase_m0C335F46A61CAF31670DE3916C3EBB47D4DD6240_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, _stringLiteral23D35608A295DEFB439CB815D8269265E7296685, L_1, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_2;
	}
}
// System.String AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase::GetPrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidPlayStoreInAppPurchase_GetPrice_m69ABF5700FECC5A1DF8091AEA0F5F14E6B35B3EE (AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC1453603F9A6DE2102D6964D14E662C2E92AFB2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetInAppPurchase().Call<string>("getPrice");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidPlayStoreInAppPurchase_GetInAppPurchase_m0C335F46A61CAF31670DE3916C3EBB47D4DD6240_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, _stringLiteralBC1453603F9A6DE2102D6964D14E662C2E92AFB2, L_1, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_2;
	}
}
// System.String AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase::GetCurrency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidPlayStoreInAppPurchase_GetCurrency_m93AB53316DED324D2A008B4E299468575B239FF8 (AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32B6D4AD9F28EA69D0AA3CEA3501652D618991D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetInAppPurchase().Call<string>("getCurrency");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidPlayStoreInAppPurchase_GetInAppPurchase_m0C335F46A61CAF31670DE3916C3EBB47D4DD6240_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, _stringLiteral32B6D4AD9F28EA69D0AA3CEA3501652D618991D6, L_1, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_2;
	}
}
// System.String AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase::GetSku()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidPlayStoreInAppPurchase_GetSku_mDDD2E7E72E4FB9B6932F7B31F06A66432B50526D (AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A569D2EAEB9C57AE0D180CFA9396A30C0267A44);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetInAppPurchase().Call<string>("getSku");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidPlayStoreInAppPurchase_GetInAppPurchase_m0C335F46A61CAF31670DE3916C3EBB47D4DD6240_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, _stringLiteral1A569D2EAEB9C57AE0D180CFA9396A30C0267A44, L_1, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_2;
	}
}
// System.String AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase::GetOrderId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidPlayStoreInAppPurchase_GetOrderId_m0FFAF3DB8934509FFB5605F1DB66B66F4F794147 (AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1BC95382E937429BD5741792056300D87684F48);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetInAppPurchase().Call<string>("getOrderId");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidPlayStoreInAppPurchase_GetInAppPurchase_m0C335F46A61CAF31670DE3916C3EBB47D4DD6240_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, _stringLiteralD1BC95382E937429BD5741792056300D87684F48, L_1, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_2;
	}
}
// System.String AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase::GetPurchaseToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidPlayStoreInAppPurchase_GetPurchaseToken_mADB9ADF1D47D7400C20E19E1D27E9BF82E2D93D6 (AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF169275544223C785E8F3C2E7F2BB05FB2885329);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetInAppPurchase().Call<string>("getPurchaseToken");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidPlayStoreInAppPurchase_GetInAppPurchase_m0C335F46A61CAF31670DE3916C3EBB47D4DD6240_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, _stringLiteralF169275544223C785E8F3C2E7F2BB05FB2885329, L_1, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int64 AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase::GetPurchaseTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidPlayStoreInAppPurchase_GetPurchaseTimestamp_mF67E438520E0F5D619659BCEBD921C9D066DD11E (AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF76E1644BDA01F3B1B4DB13F619B751E9A16D5B8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetInAppPurchase().Call<long>("getPurchaseTimestamp");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidPlayStoreInAppPurchase_GetInAppPurchase_m0C335F46A61CAF31670DE3916C3EBB47D4DD6240_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		int64_t L_2;
		L_2 = AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9(L_0, _stringLiteralF76E1644BDA01F3B1B4DB13F619B751E9A16D5B8, L_1, AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_RuntimeMethod_var);
		return L_2;
	}
}
// System.String AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase::GetAdditionalParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidPlayStoreInAppPurchase_GetAdditionalParameters_m963CD58DC00897BF70DA3C609000F08088E95052 (AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EAA2D04D4A3094B6B04F49C3159FCF4FB7747C4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetInAppPurchase().Call<AndroidJavaObject>("getAdditionalParameters").Call<string>("toString");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidPlayStoreInAppPurchase_GetInAppPurchase_m0C335F46A61CAF31670DE3916C3EBB47D4DD6240_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_0, _stringLiteral4EAA2D04D4A3094B6B04F49C3159FCF4FB7747C4, L_1, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_2, _stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A, L_3, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_4;
	}
}
// System.String AppodealStack.Monetization.Platforms.Android.AndroidPlayStoreInAppPurchase::GetDeveloperPayload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidPlayStoreInAppPurchase_GetDeveloperPayload_mB7E1FD5B1BFE371120FA76CC406FF2A2CCF3C3A9 (AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCBA8944E223367D783E62BAB112FD4CF35FEA6C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetInAppPurchase().Call<string>("getDeveloperPayload");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidPlayStoreInAppPurchase_GetInAppPurchase_m0C335F46A61CAF31670DE3916C3EBB47D4DD6240_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, _stringLiteralFCBA8944E223367D783E62BAB112FD4CF35FEA6C, L_1, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_2;
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
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealAdRevenueCallback::.ctor(AppodealStack.Monetization.Common.IAdRevenueListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealAdRevenueCallback__ctor_mA12299998BD70D33F9CA73AA41BBD3BDD6CE5297 (AppodealAdRevenueCallback_t2985919255750784D355FFBDAAA6A3B1458ABFB5* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EE0C4A55C87FC05F35050460E614E0F888DDEAA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal AppodealAdRevenueCallback(IAdRevenueListener listener) : base("com.appodeal.ads.revenue.AdRevenueCallbacks")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral6EE0C4A55C87FC05F35050460E614E0F888DDEAA, NULL);
		// _listener = listener;
		RuntimeObject* L_0 = ___0_listener;
		__this->____listener_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____listener_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealAdRevenueCallback::onAdRevenueReceive(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealAdRevenueCallback_onAdRevenueReceive_mB4FEA9EF2A0E4540029CF7BA3CA2BB39197F54CC (AppodealAdRevenueCallback_t2985919255750784D355FFBDAAA6A3B1458ABFB5* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_ad, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAdRevenueListener_t4EA61CE68DC2AA7CABF8DFE002B359888AFFA2A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04D30B74F0EF28A06E40A22A94C4297190C9C274);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32B6D4AD9F28EA69D0AA3CEA3501652D618991D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C75F8761CF7E943CE7421225ACD69C6114921A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69B7D751F701ADE7E4311D601ED53CC18A34E7A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6691EB799198D2F2DE5792A6C876A683BD655D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC86E87BE20BE59C11EE2B8116555ED286D629170);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD735BF7C82CB95BA33D103BB89639B9FD74E305E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF301F3CDDD31E54985AE46B877A49B2E44D0E80);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnAdRevenueReceived(
		//     new AppodealAdRevenue
		//     {
		//         AdType = ad.Call<string>("getAdTypeString"),
		//         NetworkName = ad.Call<string>("getNetworkName"),
		//         AdUnitName = ad.Call<string>("getAdUnitName"),
		//         DemandSource = ad.Call<string>("getDemandSource"),
		//         Placement = ad.Call<string>("getPlacement"),
		//         Revenue = ad.Call<double>("getRevenue"),
		//         Currency = ad.Call<string>("getCurrency"),
		//         RevenuePrecision = ad.Call<string>("getRevenuePrecision")
		//     }
		// );
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14* L_2 = (AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14*)il2cpp_codegen_object_new(AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AppodealAdRevenue__ctor_m0D2A7BFD59BBE488C86F87AD2B99655A1FB503C3(L_2, NULL);
		AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ___0_ad;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_4);
		String_t* L_6;
		L_6 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_4, _stringLiteral69B7D751F701ADE7E4311D601ED53CC18A34E7A7, L_5, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->___AdType_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___AdType_0), (void*)L_6);
		AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14* L_7 = L_3;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = ___0_ad;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9;
		L_9 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_8);
		String_t* L_10;
		L_10 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_8, _stringLiteral04D30B74F0EF28A06E40A22A94C4297190C9C274, L_9, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_7);
		L_7->___NetworkName_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___NetworkName_1), (void*)L_10);
		AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14* L_11 = L_7;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = ___0_ad;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13;
		L_13 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_12);
		String_t* L_14;
		L_14 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_12, _stringLiteralC86E87BE20BE59C11EE2B8116555ED286D629170, L_13, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_11);
		L_11->___AdUnitName_2 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___AdUnitName_2), (void*)L_14);
		AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14* L_15 = L_11;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16 = ___0_ad;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17;
		L_17 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_16);
		String_t* L_18;
		L_18 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_16, _stringLiteralD735BF7C82CB95BA33D103BB89639B9FD74E305E, L_17, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_15);
		L_15->___DemandSource_3 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___DemandSource_3), (void*)L_18);
		AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14* L_19 = L_15;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_20 = ___0_ad;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21;
		L_21 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_20);
		String_t* L_22;
		L_22 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_20, _stringLiteralFF301F3CDDD31E54985AE46B877A49B2E44D0E80, L_21, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_19);
		L_19->___Placement_4 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___Placement_4), (void*)L_22);
		AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14* L_23 = L_19;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_24 = ___0_ad;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25;
		L_25 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_24);
		double L_26;
		L_26 = AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362(L_24, _stringLiteral4C75F8761CF7E943CE7421225ACD69C6114921A4, L_25, AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var);
		NullCheck(L_23);
		L_23->___Revenue_5 = L_26;
		AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14* L_27 = L_23;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_28 = ___0_ad;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29;
		L_29 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_28);
		String_t* L_30;
		L_30 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_28, _stringLiteral32B6D4AD9F28EA69D0AA3CEA3501652D618991D6, L_29, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_27);
		L_27->___Currency_6 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->___Currency_6), (void*)L_30);
		AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14* L_31 = L_27;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_32 = ___0_ad;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33;
		L_33 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_32);
		String_t* L_34;
		L_34 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_32, _stringLiteralB6691EB799198D2F2DE5792A6C876A683BD655D9, L_33, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_31);
		L_31->___RevenuePrecision_7 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&L_31->___RevenuePrecision_7), (void*)L_34);
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< AppodealAdRevenue_tE44DD6B14BBCE481FBFDC3444F4F493CE3146E14* >::Invoke(0 /* System.Void AppodealStack.Monetization.Common.IAdRevenueListener::OnAdRevenueReceived(AppodealStack.Monetization.Common.AppodealAdRevenue) */, IAdRevenueListener_t4EA61CE68DC2AA7CABF8DFE002B359888AFFA2A7_il2cpp_TypeInfo_var, G_B2_0, L_31);
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
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealBannerCallbacks::.ctor(AppodealStack.Monetization.Common.IBannerAdListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealBannerCallbacks__ctor_m4853C650FD4C4AC0372AC434B054962FB809355A (AppodealBannerCallbacks_tD08F3D43EF9F9F3BF5752A394E61465AC5BAD39D* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB706991AFB0D73D3ADDB49926DDF66CC8EF7385);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal AppodealBannerCallbacks(IBannerAdListener listener) : base("com.appodeal.ads.BannerCallbacks")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteralBB706991AFB0D73D3ADDB49926DDF66CC8EF7385, NULL);
		// _listener = listener;
		RuntimeObject* L_0 = ___0_listener;
		__this->____listener_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____listener_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealBannerCallbacks::onBannerLoaded(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealBannerCallbacks_onBannerLoaded_m489F0C82C9853D4C47341DF678768EC0A8B4EE96 (AppodealBannerCallbacks_tD08F3D43EF9F9F3BF5752A394E61465AC5BAD39D* __this, int32_t ___0_height, bool ___1_isPrecache, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerAdListener_tDFE091DE412D0D00B1B46E1E599D2649812A2FD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnBannerLoaded(height, isPrecache);
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_2 = ___0_height;
		bool L_3 = ___1_isPrecache;
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< int32_t, bool >::Invoke(0 /* System.Void AppodealStack.Monetization.Common.IBannerAdListener::OnBannerLoaded(System.Int32,System.Boolean) */, IBannerAdListener_tDFE091DE412D0D00B1B46E1E599D2649812A2FD8_il2cpp_TypeInfo_var, G_B2_0, L_2, L_3);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealBannerCallbacks::onBannerFailedToLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealBannerCallbacks_onBannerFailedToLoad_m07AA049F5B02771D1B1D5B7B75DAE441B11C5F44 (AppodealBannerCallbacks_tD08F3D43EF9F9F3BF5752A394E61465AC5BAD39D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerAdListener_tDFE091DE412D0D00B1B46E1E599D2649812A2FD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnBannerFailedToLoad();
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void AppodealStack.Monetization.Common.IBannerAdListener::OnBannerFailedToLoad() */, IBannerAdListener_tDFE091DE412D0D00B1B46E1E599D2649812A2FD8_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealBannerCallbacks::onBannerShown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealBannerCallbacks_onBannerShown_mB2934A32E3646DA0C8856E2AF6297C1D9111BC7B (AppodealBannerCallbacks_tD08F3D43EF9F9F3BF5752A394E61465AC5BAD39D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerAdListener_tDFE091DE412D0D00B1B46E1E599D2649812A2FD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnBannerShown();
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void AppodealStack.Monetization.Common.IBannerAdListener::OnBannerShown() */, IBannerAdListener_tDFE091DE412D0D00B1B46E1E599D2649812A2FD8_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealBannerCallbacks::onBannerShowFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealBannerCallbacks_onBannerShowFailed_mDFE1F7D4B838153C644E9CADB0D76428147664A6 (AppodealBannerCallbacks_tD08F3D43EF9F9F3BF5752A394E61465AC5BAD39D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerAdListener_tDFE091DE412D0D00B1B46E1E599D2649812A2FD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnBannerShowFailed();
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void AppodealStack.Monetization.Common.IBannerAdListener::OnBannerShowFailed() */, IBannerAdListener_tDFE091DE412D0D00B1B46E1E599D2649812A2FD8_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealBannerCallbacks::onBannerClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealBannerCallbacks_onBannerClicked_mFC58F36D5602D868479FCC2A6E3E1849F5593531 (AppodealBannerCallbacks_tD08F3D43EF9F9F3BF5752A394E61465AC5BAD39D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerAdListener_tDFE091DE412D0D00B1B46E1E599D2649812A2FD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnBannerClicked();
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void AppodealStack.Monetization.Common.IBannerAdListener::OnBannerClicked() */, IBannerAdListener_tDFE091DE412D0D00B1B46E1E599D2649812A2FD8_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealBannerCallbacks::onBannerExpired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealBannerCallbacks_onBannerExpired_m53B977C3FB2BDCEF4C0567D1C40EEAF58DD25098 (AppodealBannerCallbacks_tD08F3D43EF9F9F3BF5752A394E61465AC5BAD39D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerAdListener_tDFE091DE412D0D00B1B46E1E599D2649812A2FD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnBannerExpired();
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(5 /* System.Void AppodealStack.Monetization.Common.IBannerAdListener::OnBannerExpired() */, IBannerAdListener_tDFE091DE412D0D00B1B46E1E599D2649812A2FD8_il2cpp_TypeInfo_var, G_B2_0);
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
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealInitializationCallback::.ctor(AppodealStack.Monetization.Common.IAppodealInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealInitializationCallback__ctor_m6CFF2F48F8264054D6619186216CFAEC16EB1081 (AppodealInitializationCallback_t99FB1E04ACA3C9B387D8D17063CF1CEEC6EFB0DB* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral085CA762DFD4E627B76384B47D4F54E56DEC33E5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal AppodealInitializationCallback(IAppodealInitializationListener listener) : base("com.appodeal.ads.initializing.ApdInitializationCallback")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral085CA762DFD4E627B76384B47D4F54E56DEC33E5, NULL);
		// _listener = listener;
		RuntimeObject* L_0 = ___0_listener;
		__this->____listener_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____listener_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealInitializationCallback::onInitializationFinished(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealInitializationCallback_onInitializationFinished_mE3CCDE2632E8A74B9208E3E4FF692DDC2887323F (AppodealInitializationCallback_t99FB1E04ACA3C9B387D8D17063CF1CEEC6EFB0DB* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_errors, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppodealInitializationListener_tE391C3AC8EB20933A7F002B4A19AF18271F093CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	{
		// if (errors == null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_errors;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// _listener?.OnInitializationFinished(null);
		RuntimeObject* L_1 = __this->____listener_4;
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		NullCheck(G_B3_0);
		InterfaceActionInvoker1< List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* >::Invoke(0 /* System.Void AppodealStack.Monetization.Common.IAppodealInitializationListener::OnInitializationFinished(System.Collections.Generic.List`1<System.String>) */, IAppodealInitializationListener_tE391C3AC8EB20933A7F002B4A19AF18271F093CB_il2cpp_TypeInfo_var, G_B3_0, (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL);
		// return;
		return;
	}

IL_0015:
	{
		// var errorsList = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_3, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_3;
		// int countOfErrors = errors.Call<int>("size");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ___0_errors;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_4);
		int32_t L_6;
		L_6 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_4, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, L_5, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_1 = L_6;
		// for (int i = 0; i < countOfErrors; i++)
		V_2 = 0;
		goto IL_0063;
	}

IL_0030:
	{
		// errorsList.Add(errors.Call<AndroidJavaObject>("get", i).Call<string>("toString"));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = ___0_errors;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		int32_t L_11 = V_2;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_13);
		NullCheck(L_8);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14;
		L_14 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_8, _stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E, L_10, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15;
		L_15 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_14);
		String_t* L_16;
		L_16 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_14, _stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A, L_15, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_7);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_7, L_16, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// for (int i = 0; i < countOfErrors; i++)
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0063:
	{
		// for (int i = 0; i < countOfErrors; i++)
		int32_t L_18 = V_2;
		int32_t L_19 = V_1;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0030;
		}
	}
	{
		// _listener?.OnInitializationFinished(errorsList);
		RuntimeObject* L_20 = __this->____listener_4;
		RuntimeObject* L_21 = L_20;
		G_B8_0 = L_21;
		if (L_21)
		{
			G_B9_0 = L_21;
			goto IL_0072;
		}
	}
	{
		return;
	}

IL_0072:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_22 = V_0;
		NullCheck(G_B9_0);
		InterfaceActionInvoker1< List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* >::Invoke(0 /* System.Void AppodealStack.Monetization.Common.IAppodealInitializationListener::OnInitializationFinished(System.Collections.Generic.List`1<System.String>) */, IAppodealInitializationListener_tE391C3AC8EB20933A7F002B4A19AF18271F093CB_il2cpp_TypeInfo_var, G_B9_0, L_22);
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
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealInterstitialCallbacks::.ctor(AppodealStack.Monetization.Common.IInterstitialAdListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealInterstitialCallbacks__ctor_mA21E178A2DE273825DD3272B89579052E3494323 (AppodealInterstitialCallbacks_t64E953CC4D482E39B3C1EC285E1FD47D8C2CCAAA* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79EE773D85B5761664A30C7E8A5E129F1D9D1D0C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal AppodealInterstitialCallbacks(IInterstitialAdListener listener) : base("com.appodeal.ads.InterstitialCallbacks")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral79EE773D85B5761664A30C7E8A5E129F1D9D1D0C, NULL);
		// _listener = listener;
		RuntimeObject* L_0 = ___0_listener;
		__this->____listener_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____listener_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealInterstitialCallbacks::onInterstitialLoaded(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealInterstitialCallbacks_onInterstitialLoaded_mFEBA0D46D72FE7E9B1D21832777616559EEE1336 (AppodealInterstitialCallbacks_t64E953CC4D482E39B3C1EC285E1FD47D8C2CCAAA* __this, bool ___0_isPrecache, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnInterstitialLoaded(isPrecache);
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		bool L_2 = ___0_isPrecache;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void AppodealStack.Monetization.Common.IInterstitialAdListener::OnInterstitialLoaded(System.Boolean) */, IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var, G_B2_0, L_2);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealInterstitialCallbacks::onInterstitialFailedToLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealInterstitialCallbacks_onInterstitialFailedToLoad_m6083DC200C74117502502253339F4EC31D5B42FA (AppodealInterstitialCallbacks_t64E953CC4D482E39B3C1EC285E1FD47D8C2CCAAA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnInterstitialFailedToLoad();
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void AppodealStack.Monetization.Common.IInterstitialAdListener::OnInterstitialFailedToLoad() */, IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealInterstitialCallbacks::onInterstitialShowFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealInterstitialCallbacks_onInterstitialShowFailed_m47881B5931321BE8E4B3B89498CDDC5D6B2CF24A (AppodealInterstitialCallbacks_t64E953CC4D482E39B3C1EC285E1FD47D8C2CCAAA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnInterstitialShowFailed();
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void AppodealStack.Monetization.Common.IInterstitialAdListener::OnInterstitialShowFailed() */, IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealInterstitialCallbacks::onInterstitialShown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealInterstitialCallbacks_onInterstitialShown_m0891E433CE9F9BD0C765AB0A330771D94C2D72C4 (AppodealInterstitialCallbacks_t64E953CC4D482E39B3C1EC285E1FD47D8C2CCAAA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnInterstitialShown();
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void AppodealStack.Monetization.Common.IInterstitialAdListener::OnInterstitialShown() */, IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealInterstitialCallbacks::onInterstitialClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealInterstitialCallbacks_onInterstitialClicked_m4D32311EA00194501C90F3B19B53D13EF76A802F (AppodealInterstitialCallbacks_t64E953CC4D482E39B3C1EC285E1FD47D8C2CCAAA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnInterstitialClicked();
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(5 /* System.Void AppodealStack.Monetization.Common.IInterstitialAdListener::OnInterstitialClicked() */, IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealInterstitialCallbacks::onInterstitialClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealInterstitialCallbacks_onInterstitialClosed_mD4E481AC739FDD818F96EC678A5813615E75298D (AppodealInterstitialCallbacks_t64E953CC4D482E39B3C1EC285E1FD47D8C2CCAAA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnInterstitialClosed();
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void AppodealStack.Monetization.Common.IInterstitialAdListener::OnInterstitialClosed() */, IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealInterstitialCallbacks::onInterstitialExpired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealInterstitialCallbacks_onInterstitialExpired_m25C25FE5A07EE05B6435CA37FB8D7329D268B995 (AppodealInterstitialCallbacks_t64E953CC4D482E39B3C1EC285E1FD47D8C2CCAAA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnInterstitialExpired();
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(6 /* System.Void AppodealStack.Monetization.Common.IInterstitialAdListener::OnInterstitialExpired() */, IInterstitialAdListener_tCE6E7249057D4E26E4DB2978653621FD0DC83F97_il2cpp_TypeInfo_var, G_B2_0);
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
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealMrecCallbacks::.ctor(AppodealStack.Monetization.Common.IMrecAdListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealMrecCallbacks__ctor_mEF1D604955C81EEA599901E06898251B8D4932DB (AppodealMrecCallbacks_t468DB9B535238C18329A8D6B78D3C8CBBF1C6A30* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED4CAD4F3756DB831C64F699611A51C21DAD8E53);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal AppodealMrecCallbacks(IMrecAdListener listener) : base("com.appodeal.ads.MrecCallbacks")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteralED4CAD4F3756DB831C64F699611A51C21DAD8E53, NULL);
		// _listener = listener;
		RuntimeObject* L_0 = ___0_listener;
		__this->____listener_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____listener_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealMrecCallbacks::onMrecLoaded(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealMrecCallbacks_onMrecLoaded_mAFADA507EF13D37F9FC7275EBCF425A8B3F4D195 (AppodealMrecCallbacks_t468DB9B535238C18329A8D6B78D3C8CBBF1C6A30* __this, bool ___0_isPrecache, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMrecAdListener_tE137D04EDF5519329E09E69C094305D8CB9B5519_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnMrecLoaded(isPrecache);
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		bool L_2 = ___0_isPrecache;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void AppodealStack.Monetization.Common.IMrecAdListener::OnMrecLoaded(System.Boolean) */, IMrecAdListener_tE137D04EDF5519329E09E69C094305D8CB9B5519_il2cpp_TypeInfo_var, G_B2_0, L_2);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealMrecCallbacks::onMrecFailedToLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealMrecCallbacks_onMrecFailedToLoad_mC7997B2C23577D69E6092518427FF83432BAF550 (AppodealMrecCallbacks_t468DB9B535238C18329A8D6B78D3C8CBBF1C6A30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMrecAdListener_tE137D04EDF5519329E09E69C094305D8CB9B5519_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnMrecFailedToLoad();
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void AppodealStack.Monetization.Common.IMrecAdListener::OnMrecFailedToLoad() */, IMrecAdListener_tE137D04EDF5519329E09E69C094305D8CB9B5519_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealMrecCallbacks::onMrecShown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealMrecCallbacks_onMrecShown_m7A78A7FC80E4D1B78423B4F62C73BE32AF3451C6 (AppodealMrecCallbacks_t468DB9B535238C18329A8D6B78D3C8CBBF1C6A30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMrecAdListener_tE137D04EDF5519329E09E69C094305D8CB9B5519_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnMrecShown();
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void AppodealStack.Monetization.Common.IMrecAdListener::OnMrecShown() */, IMrecAdListener_tE137D04EDF5519329E09E69C094305D8CB9B5519_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealMrecCallbacks::onMrecShowFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealMrecCallbacks_onMrecShowFailed_m10752CBF2053924FE0A3D94C86AC2FEA27C3E71D (AppodealMrecCallbacks_t468DB9B535238C18329A8D6B78D3C8CBBF1C6A30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMrecAdListener_tE137D04EDF5519329E09E69C094305D8CB9B5519_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnMrecShowFailed();
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void AppodealStack.Monetization.Common.IMrecAdListener::OnMrecShowFailed() */, IMrecAdListener_tE137D04EDF5519329E09E69C094305D8CB9B5519_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealMrecCallbacks::onMrecClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealMrecCallbacks_onMrecClicked_mCEEED1E1EE52B786B9C3613EA58D7107A9C93200 (AppodealMrecCallbacks_t468DB9B535238C18329A8D6B78D3C8CBBF1C6A30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMrecAdListener_tE137D04EDF5519329E09E69C094305D8CB9B5519_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnMrecClicked();
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void AppodealStack.Monetization.Common.IMrecAdListener::OnMrecClicked() */, IMrecAdListener_tE137D04EDF5519329E09E69C094305D8CB9B5519_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealMrecCallbacks::onMrecExpired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealMrecCallbacks_onMrecExpired_m247A6824E5244E024223BB87F8F9027C62F521E4 (AppodealMrecCallbacks_t468DB9B535238C18329A8D6B78D3C8CBBF1C6A30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMrecAdListener_tE137D04EDF5519329E09E69C094305D8CB9B5519_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnMrecExpired();
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(5 /* System.Void AppodealStack.Monetization.Common.IMrecAdListener::OnMrecExpired() */, IMrecAdListener_tE137D04EDF5519329E09E69C094305D8CB9B5519_il2cpp_TypeInfo_var, G_B2_0);
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
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealRewardedVideoCallbacks::.ctor(AppodealStack.Monetization.Common.IRewardedVideoAdListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealRewardedVideoCallbacks__ctor_m604E18990CDDE819AD43B355C3D2F8368819330C (AppodealRewardedVideoCallbacks_tCD33813C5E39FEC50E367019AF8DB215A7451476* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE0A78FD02140CB53F6246C99C5BB89ECF281FCF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal AppodealRewardedVideoCallbacks(IRewardedVideoAdListener listener) : base("com.appodeal.ads.RewardedVideoCallbacks")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteralFE0A78FD02140CB53F6246C99C5BB89ECF281FCF, NULL);
		// _listener = listener;
		RuntimeObject* L_0 = ___0_listener;
		__this->____listener_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____listener_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealRewardedVideoCallbacks::onRewardedVideoLoaded(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealRewardedVideoCallbacks_onRewardedVideoLoaded_m3396C383C8B9E04D9C3B5562651A4BEDDC0421AB (AppodealRewardedVideoCallbacks_tCD33813C5E39FEC50E367019AF8DB215A7451476* __this, bool ___0_isPrecache, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnRewardedVideoLoaded(isPrecache);
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		bool L_2 = ___0_isPrecache;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void AppodealStack.Monetization.Common.IRewardedVideoAdListener::OnRewardedVideoLoaded(System.Boolean) */, IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var, G_B2_0, L_2);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealRewardedVideoCallbacks::onRewardedVideoFailedToLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealRewardedVideoCallbacks_onRewardedVideoFailedToLoad_mAF2430A8744A1B45D1AF729CBF8B3C95852056F7 (AppodealRewardedVideoCallbacks_tCD33813C5E39FEC50E367019AF8DB215A7451476* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnRewardedVideoFailedToLoad();
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void AppodealStack.Monetization.Common.IRewardedVideoAdListener::OnRewardedVideoFailedToLoad() */, IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealRewardedVideoCallbacks::onRewardedVideoShowFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealRewardedVideoCallbacks_onRewardedVideoShowFailed_mAF116471CE654B22548EE753B17216531943851E (AppodealRewardedVideoCallbacks_tCD33813C5E39FEC50E367019AF8DB215A7451476* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnRewardedVideoShowFailed();
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void AppodealStack.Monetization.Common.IRewardedVideoAdListener::OnRewardedVideoShowFailed() */, IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealRewardedVideoCallbacks::onRewardedVideoShown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealRewardedVideoCallbacks_onRewardedVideoShown_m7D9EAFDCB72AAB69C134CDC89BC3CFAD255FAAED (AppodealRewardedVideoCallbacks_tCD33813C5E39FEC50E367019AF8DB215A7451476* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnRewardedVideoShown();
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void AppodealStack.Monetization.Common.IRewardedVideoAdListener::OnRewardedVideoShown() */, IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealRewardedVideoCallbacks::onRewardedVideoFinished(System.Double,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealRewardedVideoCallbacks_onRewardedVideoFinished_m481C341ABC5B9D06C4B69757AC86410591BA4619 (AppodealRewardedVideoCallbacks_tCD33813C5E39FEC50E367019AF8DB215A7451476* __this, double ___0_amount, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_currency, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnRewardedVideoFinished(amount, null);
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		double L_2 = ___0_amount;
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< double, String_t* >::Invoke(4 /* System.Void AppodealStack.Monetization.Common.IRewardedVideoAdListener::OnRewardedVideoFinished(System.Double,System.String) */, IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var, G_B2_0, L_2, (String_t*)NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealRewardedVideoCallbacks::onRewardedVideoFinished(System.Double,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealRewardedVideoCallbacks_onRewardedVideoFinished_mB72CFA9CD0F29D55AFA8752234DAA9829FD6054F (AppodealRewardedVideoCallbacks_tCD33813C5E39FEC50E367019AF8DB215A7451476* __this, double ___0_amount, String_t* ___1_currency, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnRewardedVideoFinished(amount, currency);
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		double L_2 = ___0_amount;
		String_t* L_3 = ___1_currency;
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< double, String_t* >::Invoke(4 /* System.Void AppodealStack.Monetization.Common.IRewardedVideoAdListener::OnRewardedVideoFinished(System.Double,System.String) */, IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var, G_B2_0, L_2, L_3);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealRewardedVideoCallbacks::onRewardedVideoClosed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealRewardedVideoCallbacks_onRewardedVideoClosed_m3242CC5B2B0A367FA11AF3BD385659BF0B5DF4B8 (AppodealRewardedVideoCallbacks_tCD33813C5E39FEC50E367019AF8DB215A7451476* __this, bool ___0_finished, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnRewardedVideoClosed(finished);
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		bool L_2 = ___0_finished;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< bool >::Invoke(5 /* System.Void AppodealStack.Monetization.Common.IRewardedVideoAdListener::OnRewardedVideoClosed(System.Boolean) */, IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var, G_B2_0, L_2);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealRewardedVideoCallbacks::onRewardedVideoExpired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealRewardedVideoCallbacks_onRewardedVideoExpired_m22C57A584E5B00008AF57BFE6DB049785A2642C6 (AppodealRewardedVideoCallbacks_tCD33813C5E39FEC50E367019AF8DB215A7451476* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnRewardedVideoExpired();
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(6 /* System.Void AppodealStack.Monetization.Common.IRewardedVideoAdListener::OnRewardedVideoExpired() */, IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.AppodealRewardedVideoCallbacks::onRewardedVideoClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppodealRewardedVideoCallbacks_onRewardedVideoClicked_m40CBDA50754BCB4C26E16BDED269F87A6704A18C (AppodealRewardedVideoCallbacks_tCD33813C5E39FEC50E367019AF8DB215A7451476* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnRewardedVideoClicked();
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(7 /* System.Void AppodealStack.Monetization.Common.IRewardedVideoAdListener::OnRewardedVideoClicked() */, IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619_il2cpp_TypeInfo_var, G_B2_0);
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
// System.Void AppodealStack.Monetization.Platforms.Android.InAppPurchaseValidationCallbacks::.ctor(AppodealStack.Monetization.Common.IInAppPurchaseValidationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppPurchaseValidationCallbacks__ctor_mD3E8CF58A333111C59A561EB22E0D78953604DF8 (InAppPurchaseValidationCallbacks_tA9CB89CA137F2483DBC5F9796ABBECFB29C80020* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA564625C6CA0F5732921C8BEFF122CD85B8A599E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal InAppPurchaseValidationCallbacks(IInAppPurchaseValidationListener listener) : base("com.appodeal.ads.inapp.InAppPurchaseValidateCallback")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteralA564625C6CA0F5732921C8BEFF122CD85B8A599E, NULL);
		// _listener = listener;
		RuntimeObject* L_0 = ___0_listener;
		__this->____listener_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____listener_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.InAppPurchaseValidationCallbacks::onInAppPurchaseValidateSuccess(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppPurchaseValidationCallbacks_onInAppPurchaseValidateSuccess_mB8226E213ADBACE45DEFB98BE922107A82CEB0C8 (InAppPurchaseValidationCallbacks_tA9CB89CA137F2483DBC5F9796ABBECFB29C80020* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_purchase, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_errors, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInAppPurchaseValidationListener_t2FC5FE145015D81E2F6A7EC4FD9C2E0BD84B7CD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnInAppPurchaseValidationSucceeded(CreateResponse(purchase, errors));
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___0_purchase;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = ___1_errors;
		String_t* L_4;
		L_4 = InAppPurchaseValidationCallbacks_CreateResponse_m07195589767399373A925542F0F4A8C751B85CBB(__this, L_2, L_3, NULL);
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void AppodealStack.Monetization.Common.IInAppPurchaseValidationListener::OnInAppPurchaseValidationSucceeded(System.String) */, IInAppPurchaseValidationListener_t2FC5FE145015D81E2F6A7EC4FD9C2E0BD84B7CD7_il2cpp_TypeInfo_var, G_B2_0, L_4);
		// }
		return;
	}
}
// System.Void AppodealStack.Monetization.Platforms.Android.InAppPurchaseValidationCallbacks::onInAppPurchaseValidateFail(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppPurchaseValidationCallbacks_onInAppPurchaseValidateFail_m8C253C013BA691B7C87432E3B84E43494BE59C06 (InAppPurchaseValidationCallbacks_tA9CB89CA137F2483DBC5F9796ABBECFB29C80020* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_purchase, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_errors, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInAppPurchaseValidationListener_t2FC5FE145015D81E2F6A7EC4FD9C2E0BD84B7CD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnInAppPurchaseValidationFailed(CreateResponse(purchase, errors));
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___0_purchase;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = ___1_errors;
		String_t* L_4;
		L_4 = InAppPurchaseValidationCallbacks_CreateResponse_m07195589767399373A925542F0F4A8C751B85CBB(__this, L_2, L_3, NULL);
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void AppodealStack.Monetization.Common.IInAppPurchaseValidationListener::OnInAppPurchaseValidationFailed(System.String) */, IInAppPurchaseValidationListener_t2FC5FE145015D81E2F6A7EC4FD9C2E0BD84B7CD7_il2cpp_TypeInfo_var, G_B2_0, L_4);
		// }
		return;
	}
}
// System.String AppodealStack.Monetization.Platforms.Android.InAppPurchaseValidationCallbacks::CreateResponse(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InAppPurchaseValidationCallbacks_CreateResponse_m07195589767399373A925542F0F4A8C751B85CBB (InAppPurchaseValidationCallbacks_tA9CB89CA137F2483DBC5F9796ABBECFB29C80020* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_purchase, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_errors, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DF4717FF3744ADC9D6594D138594510773E8221);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A0B29A05CEA7D30C594250785FD0F1CF9CDD25A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FF58A167C336D13CA80AE58D050204C3168A45B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D5F37E59D7D4579EEFA5C6561A3BAD236BDCB08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5251A946FA09A100AA16211026391756DF6AC82F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral540027E5658E3DE55A4CA9332805DBB54BF0D776);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5585FBF388577B51954D55CD9718B071F714A5B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9104BA60C8C4178B041DE362336117E38E7D8E7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral986F7E1347EB5F4871D70861FDD3EAB83E9D520C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A3ACC2D6DDA0D13C397ED45CC28B2C2ACE336DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB228AF03A708F87F86E3CD79BAFC8DD662AFAA3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8EDDF8E870B50B041129E2A567902ECC562914E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5F2751FCD979A5D75A2B143601934884E0565F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDD40F6428D110E58E60F2903740B6628CF45726);
		s_Il2CppMethodInitialized = true;
	}
	AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	String_t* G_B6_2 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B5_2 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	String_t* G_B8_2 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	String_t* G_B7_2 = NULL;
	String_t* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	String_t* G_B10_2 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	String_t* G_B9_2 = NULL;
	String_t* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	String_t* G_B12_2 = NULL;
	String_t* G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	String_t* G_B11_2 = NULL;
	String_t* G_B14_0 = NULL;
	String_t* G_B14_1 = NULL;
	String_t* G_B14_2 = NULL;
	String_t* G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	String_t* G_B13_2 = NULL;
	String_t* G_B16_0 = NULL;
	String_t* G_B16_1 = NULL;
	String_t* G_B16_2 = NULL;
	String_t* G_B15_0 = NULL;
	String_t* G_B15_1 = NULL;
	String_t* G_B15_2 = NULL;
	String_t* G_B18_0 = NULL;
	String_t* G_B18_1 = NULL;
	String_t* G_B18_2 = NULL;
	String_t* G_B17_0 = NULL;
	String_t* G_B17_1 = NULL;
	String_t* G_B17_2 = NULL;
	String_t* G_B20_0 = NULL;
	String_t* G_B20_1 = NULL;
	String_t* G_B20_2 = NULL;
	String_t* G_B19_0 = NULL;
	String_t* G_B19_1 = NULL;
	String_t* G_B19_2 = NULL;
	{
		// var androidPurchase = new AndroidPlayStoreInAppPurchase(purchase);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_purchase;
		AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* L_1 = (AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15*)il2cpp_codegen_object_new(AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidPlayStoreInAppPurchase__ctor_m0B64D80D65E10CA66E478B66EDA954BB118E03EF(L_1, L_0, NULL);
		V_0 = L_1;
		// string responsePurchase = "\"InAppPurchase\":{";
		V_1 = _stringLiteralB228AF03A708F87F86E3CD79BAFC8DD662AFAA3E;
		// responsePurchase += $"\"PublicKey\":\"{androidPurchase.GetPublicKey() ?? String.Empty}\",";
		String_t* L_2 = V_1;
		AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = AndroidPlayStoreInAppPurchase_GetPublicKey_m07EACA89116ED2B48E50D97EA214F3A51B6426C4(L_3, NULL);
		String_t* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = _stringLiteral986F7E1347EB5F4871D70861FDD3EAB83E9D520C;
		G_B1_2 = L_2;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = _stringLiteral986F7E1347EB5F4871D70861FDD3EAB83E9D520C;
			G_B2_2 = L_2;
			goto IL_0022;
		}
	}
	{
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0022:
	{
		String_t* L_7;
		L_7 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(G_B2_2, G_B2_1, G_B2_0, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8, NULL);
		V_1 = L_7;
		// responsePurchase += $"\"Signature\":\"{androidPurchase.GetSignature() ?? String.Empty}\",";
		String_t* L_8 = V_1;
		AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = AndroidPlayStoreInAppPurchase_GetSignature_m42F76F0821F21C061DD4F8BF793BEC315D24DB84(L_9, NULL);
		String_t* L_11 = L_10;
		G_B3_0 = L_11;
		G_B3_1 = _stringLiteral3D5F37E59D7D4579EEFA5C6561A3BAD236BDCB08;
		G_B3_2 = L_8;
		if (L_11)
		{
			G_B4_0 = L_11;
			G_B4_1 = _stringLiteral3D5F37E59D7D4579EEFA5C6561A3BAD236BDCB08;
			G_B4_2 = L_8;
			goto IL_0042;
		}
	}
	{
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0042:
	{
		String_t* L_13;
		L_13 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(G_B4_2, G_B4_1, G_B4_0, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8, NULL);
		V_1 = L_13;
		// responsePurchase += $"\"PurchaseData\":\"{androidPurchase.GetPurchaseData() ?? String.Empty}\",";
		String_t* L_14 = V_1;
		AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = AndroidPlayStoreInAppPurchase_GetPurchaseData_m0DC659FF59B486347564236F77276549A81EB41A(L_15, NULL);
		String_t* L_17 = L_16;
		G_B5_0 = L_17;
		G_B5_1 = _stringLiteral5585FBF388577B51954D55CD9718B071F714A5B2;
		G_B5_2 = L_14;
		if (L_17)
		{
			G_B6_0 = L_17;
			G_B6_1 = _stringLiteral5585FBF388577B51954D55CD9718B071F714A5B2;
			G_B6_2 = L_14;
			goto IL_0062;
		}
	}
	{
		String_t* L_18 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B6_0 = L_18;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_0062:
	{
		String_t* L_19;
		L_19 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(G_B6_2, G_B6_1, G_B6_0, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8, NULL);
		V_1 = L_19;
		// responsePurchase += $"\"Price\":\"{androidPurchase.GetPrice() ?? String.Empty}\",";
		String_t* L_20 = V_1;
		AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* L_21 = V_0;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = AndroidPlayStoreInAppPurchase_GetPrice_m69ABF5700FECC5A1DF8091AEA0F5F14E6B35B3EE(L_21, NULL);
		String_t* L_23 = L_22;
		G_B7_0 = L_23;
		G_B7_1 = _stringLiteral9A3ACC2D6DDA0D13C397ED45CC28B2C2ACE336DD;
		G_B7_2 = L_20;
		if (L_23)
		{
			G_B8_0 = L_23;
			G_B8_1 = _stringLiteral9A3ACC2D6DDA0D13C397ED45CC28B2C2ACE336DD;
			G_B8_2 = L_20;
			goto IL_0082;
		}
	}
	{
		String_t* L_24 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B8_0 = L_24;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
	}

IL_0082:
	{
		String_t* L_25;
		L_25 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(G_B8_2, G_B8_1, G_B8_0, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8, NULL);
		V_1 = L_25;
		// responsePurchase += $"\"Currency\":\"{androidPurchase.GetCurrency() ?? String.Empty}\",";
		String_t* L_26 = V_1;
		AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* L_27 = V_0;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = AndroidPlayStoreInAppPurchase_GetCurrency_m93AB53316DED324D2A008B4E299468575B239FF8(L_27, NULL);
		String_t* L_29 = L_28;
		G_B9_0 = L_29;
		G_B9_1 = _stringLiteral540027E5658E3DE55A4CA9332805DBB54BF0D776;
		G_B9_2 = L_26;
		if (L_29)
		{
			G_B10_0 = L_29;
			G_B10_1 = _stringLiteral540027E5658E3DE55A4CA9332805DBB54BF0D776;
			G_B10_2 = L_26;
			goto IL_00a2;
		}
	}
	{
		String_t* L_30 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B10_0 = L_30;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
	}

IL_00a2:
	{
		String_t* L_31;
		L_31 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(G_B10_2, G_B10_1, G_B10_0, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8, NULL);
		V_1 = L_31;
		// responsePurchase += $"\"Sku\":\"{androidPurchase.GetSku() ?? String.Empty}\",";
		String_t* L_32 = V_1;
		AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* L_33 = V_0;
		NullCheck(L_33);
		String_t* L_34;
		L_34 = AndroidPlayStoreInAppPurchase_GetSku_mDDD2E7E72E4FB9B6932F7B31F06A66432B50526D(L_33, NULL);
		String_t* L_35 = L_34;
		G_B11_0 = L_35;
		G_B11_1 = _stringLiteral2FF58A167C336D13CA80AE58D050204C3168A45B;
		G_B11_2 = L_32;
		if (L_35)
		{
			G_B12_0 = L_35;
			G_B12_1 = _stringLiteral2FF58A167C336D13CA80AE58D050204C3168A45B;
			G_B12_2 = L_32;
			goto IL_00c2;
		}
	}
	{
		String_t* L_36 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B12_0 = L_36;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_00c2:
	{
		String_t* L_37;
		L_37 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(G_B12_2, G_B12_1, G_B12_0, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8, NULL);
		V_1 = L_37;
		// responsePurchase += $"\"OrderId\":\"{androidPurchase.GetOrderId() ?? String.Empty}\",";
		String_t* L_38 = V_1;
		AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* L_39 = V_0;
		NullCheck(L_39);
		String_t* L_40;
		L_40 = AndroidPlayStoreInAppPurchase_GetOrderId_m0FFAF3DB8934509FFB5605F1DB66B66F4F794147(L_39, NULL);
		String_t* L_41 = L_40;
		G_B13_0 = L_41;
		G_B13_1 = _stringLiteral1A0B29A05CEA7D30C594250785FD0F1CF9CDD25A;
		G_B13_2 = L_38;
		if (L_41)
		{
			G_B14_0 = L_41;
			G_B14_1 = _stringLiteral1A0B29A05CEA7D30C594250785FD0F1CF9CDD25A;
			G_B14_2 = L_38;
			goto IL_00e2;
		}
	}
	{
		String_t* L_42 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B14_0 = L_42;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
	}

IL_00e2:
	{
		String_t* L_43;
		L_43 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(G_B14_2, G_B14_1, G_B14_0, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8, NULL);
		V_1 = L_43;
		// responsePurchase += $"\"PurchaseToken\":\"{androidPurchase.GetPurchaseToken() ?? String.Empty}\",";
		String_t* L_44 = V_1;
		AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* L_45 = V_0;
		NullCheck(L_45);
		String_t* L_46;
		L_46 = AndroidPlayStoreInAppPurchase_GetPurchaseToken_mADB9ADF1D47D7400C20E19E1D27E9BF82E2D93D6(L_45, NULL);
		String_t* L_47 = L_46;
		G_B15_0 = L_47;
		G_B15_1 = _stringLiteral0DF4717FF3744ADC9D6594D138594510773E8221;
		G_B15_2 = L_44;
		if (L_47)
		{
			G_B16_0 = L_47;
			G_B16_1 = _stringLiteral0DF4717FF3744ADC9D6594D138594510773E8221;
			G_B16_2 = L_44;
			goto IL_0102;
		}
	}
	{
		String_t* L_48 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B16_0 = L_48;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
	}

IL_0102:
	{
		String_t* L_49;
		L_49 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(G_B16_2, G_B16_1, G_B16_0, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8, NULL);
		V_1 = L_49;
		// responsePurchase += $"\"PurchaseTimestamp\":\"{androidPurchase.GetPurchaseTimestamp()}\",";
		String_t* L_50 = V_1;
		AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* L_51 = V_0;
		NullCheck(L_51);
		int64_t L_52;
		L_52 = AndroidPlayStoreInAppPurchase_GetPurchaseTimestamp_mF67E438520E0F5D619659BCEBD921C9D066DD11E(L_51, NULL);
		int64_t L_53 = L_52;
		RuntimeObject* L_54 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_53);
		String_t* L_55;
		L_55 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralC8EDDF8E870B50B041129E2A567902ECC562914E, L_54, NULL);
		String_t* L_56;
		L_56 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_50, L_55, NULL);
		V_1 = L_56;
		// responsePurchase += $"\"AdditionalParameters\":\"{androidPurchase.GetAdditionalParameters() ?? String.Empty}\",";
		String_t* L_57 = V_1;
		AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* L_58 = V_0;
		NullCheck(L_58);
		String_t* L_59;
		L_59 = AndroidPlayStoreInAppPurchase_GetAdditionalParameters_m963CD58DC00897BF70DA3C609000F08088E95052(L_58, NULL);
		String_t* L_60 = L_59;
		G_B17_0 = L_60;
		G_B17_1 = _stringLiteral5251A946FA09A100AA16211026391756DF6AC82F;
		G_B17_2 = L_57;
		if (L_60)
		{
			G_B18_0 = L_60;
			G_B18_1 = _stringLiteral5251A946FA09A100AA16211026391756DF6AC82F;
			G_B18_2 = L_57;
			goto IL_013e;
		}
	}
	{
		String_t* L_61 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B18_0 = L_61;
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
	}

IL_013e:
	{
		String_t* L_62;
		L_62 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(G_B18_2, G_B18_1, G_B18_0, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8, NULL);
		V_1 = L_62;
		// responsePurchase += $"\"DeveloperPayload\":\"{androidPurchase.GetDeveloperPayload() ?? String.Empty}\"}}";
		String_t* L_63 = V_1;
		AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* L_64 = V_0;
		NullCheck(L_64);
		String_t* L_65;
		L_65 = AndroidPlayStoreInAppPurchase_GetDeveloperPayload_mB7E1FD5B1BFE371120FA76CC406FF2A2CCF3C3A9(L_64, NULL);
		String_t* L_66 = L_65;
		G_B19_0 = L_66;
		G_B19_1 = _stringLiteralFDD40F6428D110E58E60F2903740B6628CF45726;
		G_B19_2 = L_63;
		if (L_66)
		{
			G_B20_0 = L_66;
			G_B20_1 = _stringLiteralFDD40F6428D110E58E60F2903740B6628CF45726;
			G_B20_2 = L_63;
			goto IL_015e;
		}
	}
	{
		String_t* L_67 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B20_0 = L_67;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
	}

IL_015e:
	{
		String_t* L_68;
		L_68 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(G_B20_2, G_B20_1, G_B20_0, _stringLiteralD5F2751FCD979A5D75A2B143601934884E0565F4, NULL);
		V_1 = L_68;
		// string responseError = "\"Errors\":[";
		V_2 = _stringLiteral9104BA60C8C4178B041DE362336117E38E7D8E7C;
		// if (errors != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_69 = ___1_errors;
		if (!L_69)
		{
			goto IL_01ec;
		}
	}
	{
		// var errorsList = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_70 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_70);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_70, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_3 = L_70;
		// int countOfErrors = errors.Call<int>("size");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_71 = ___1_errors;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_72;
		L_72 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_71);
		int32_t L_73;
		L_73 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_71, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, L_72, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_4 = L_73;
		// for (int i = 0; i < countOfErrors; i++)
		V_5 = 0;
		goto IL_01d4;
	}

IL_018f:
	{
		// errorsList.Add($"\"{errors.Call<AndroidJavaObject>("get", i).Call<string>("toString")}\"");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_74 = V_3;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_75 = ___1_errors;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_76 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_77 = L_76;
		int32_t L_78 = V_5;
		int32_t L_79 = L_78;
		RuntimeObject* L_80 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_79);
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, L_80);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_80);
		NullCheck(L_75);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_81;
		L_81 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_75, _stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E, L_77, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_82;
		L_82 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_81);
		String_t* L_83;
		L_83 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_81, _stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A, L_82, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		String_t* L_84;
		L_84 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, L_83, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		NullCheck(L_74);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_74, L_84, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// for (int i = 0; i < countOfErrors; i++)
		int32_t L_85 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_85, 1));
	}

IL_01d4:
	{
		// for (int i = 0; i < countOfErrors; i++)
		int32_t L_86 = V_5;
		int32_t L_87 = V_4;
		if ((((int32_t)L_86) < ((int32_t)L_87)))
		{
			goto IL_018f;
		}
	}
	{
		// responseError += String.Join(",", errorsList);
		String_t* L_88 = V_2;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_89 = V_3;
		String_t* L_90;
		L_90 = String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_89, NULL);
		String_t* L_91;
		L_91 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_88, L_90, NULL);
		V_2 = L_91;
	}

IL_01ec:
	{
		// responseError += ']';
		String_t* L_92 = V_2;
		String_t* L_93;
		L_93 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_92, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		V_2 = L_93;
		// return $"{{{responsePurchase},{responseError}}}";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_94 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_95 = L_94;
		NullCheck(L_95);
		ArrayElementTypeCheck (L_95, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_96 = L_95;
		String_t* L_97 = V_1;
		NullCheck(L_96);
		ArrayElementTypeCheck (L_96, L_97);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_97);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_98 = L_96;
		NullCheck(L_98);
		ArrayElementTypeCheck (L_98, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_99 = L_98;
		String_t* L_100 = V_2;
		NullCheck(L_99);
		ArrayElementTypeCheck (L_99, L_100);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_100);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_101 = L_99;
		NullCheck(L_101);
		ArrayElementTypeCheck (L_101, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		String_t* L_102;
		L_102 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_101, NULL);
		return L_102;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidPlayStoreInAppPurchase_GetInAppPurchase_m0C335F46A61CAF31670DE3916C3EBB47D4DD6240_inline (AndroidPlayStoreInAppPurchase_t71863D21BB7FB56A9346637946C62C482C755C15* __this, const RuntimeMethod* method) 
{
	{
		// return _inAppPurchase;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____inAppPurchase_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ((EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
