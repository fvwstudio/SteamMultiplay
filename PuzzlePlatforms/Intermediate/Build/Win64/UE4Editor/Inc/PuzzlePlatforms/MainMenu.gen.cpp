// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MenuSystem/MainMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenu() {}
// Cross Module References
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UMainMenu_NoRegister();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UMainMenu();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UMenuWidget();
	UPackage* Z_Construct_UPackage__Script_PuzzlePlatforms();
	PUZZLEPLATFORMS_API UFunction* Z_Construct_UFunction_UMainMenu_HostServer();
	PUZZLEPLATFORMS_API UFunction* Z_Construct_UFunction_UMainMenu_JoinServer();
	PUZZLEPLATFORMS_API UFunction* Z_Construct_UFunction_UMainMenu_OpenJoinMenu();
	PUZZLEPLATFORMS_API UFunction* Z_Construct_UFunction_UMainMenu_OpenMainMenu();
	PUZZLEPLATFORMS_API UFunction* Z_Construct_UFunction_UMainMenu_QuitPressed();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	void UMainMenu::StaticRegisterNativesUMainMenu()
	{
		UClass* Class = UMainMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HostServer", (Native)&UMainMenu::execHostServer },
			{ "JoinServer", (Native)&UMainMenu::execJoinServer },
			{ "OpenJoinMenu", (Native)&UMainMenu::execOpenJoinMenu },
			{ "OpenMainMenu", (Native)&UMainMenu::execOpenMainMenu },
			{ "QuitPressed", (Native)&UMainMenu::execQuitPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMainMenu_HostServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, "HostServer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenu_JoinServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, "JoinServer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenu_OpenJoinMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, "OpenJoinMenu", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenu_OpenMainMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, "OpenMainMenu", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenu_QuitPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, "QuitPressed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMainMenu_NoRegister()
	{
		return UMainMenu::StaticClass();
	}
	UClass* Z_Construct_UClass_UMainMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMenuWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_PuzzlePlatforms,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMainMenu_HostServer, "HostServer" }, // 1922722908
				{ &Z_Construct_UFunction_UMainMenu_JoinServer, "JoinServer" }, // 941775147
				{ &Z_Construct_UFunction_UMainMenu_OpenJoinMenu, "OpenJoinMenu" }, // 2753066117
				{ &Z_Construct_UFunction_UMainMenu_OpenMainMenu, "OpenMainMenu" }, // 3761292001
				{ &Z_Construct_UFunction_UMainMenu_QuitPressed, "QuitPressed" }, // 1369672325
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MenuSystem/MainMenu.h" },
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IPAddressField_MetaData[] = {
				{ "BindWidget", "" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IPAddressField = { UE4CodeGen_Private::EPropertyClass::Object, "IPAddressField", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMainMenu, IPAddressField), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(NewProp_IPAddressField_MetaData, ARRAY_COUNT(NewProp_IPAddressField_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinMenu_MetaData[] = {
				{ "BindWidget", "" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JoinMenu = { UE4CodeGen_Private::EPropertyClass::Object, "JoinMenu", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMainMenu, JoinMenu), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(NewProp_JoinMenu_MetaData, ARRAY_COUNT(NewProp_JoinMenu_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenu_MetaData[] = {
				{ "BindWidget", "" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainMenu = { UE4CodeGen_Private::EPropertyClass::Object, "MainMenu", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMainMenu, MainMenu), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(NewProp_MainMenu_MetaData, ARRAY_COUNT(NewProp_MainMenu_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuSwitcher_MetaData[] = {
				{ "BindWidget", "" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuSwitcher = { UE4CodeGen_Private::EPropertyClass::Object, "MenuSwitcher", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMainMenu, MenuSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(NewProp_MenuSwitcher_MetaData, ARRAY_COUNT(NewProp_MenuSwitcher_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfirmJoinMenuButton_MetaData[] = {
				{ "BindWidget", "" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConfirmJoinMenuButton = { UE4CodeGen_Private::EPropertyClass::Object, "ConfirmJoinMenuButton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMainMenu, ConfirmJoinMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_ConfirmJoinMenuButton_MetaData, ARRAY_COUNT(NewProp_ConfirmJoinMenuButton_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelJoinMenuButton_MetaData[] = {
				{ "BindWidget", "" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CancelJoinMenuButton = { UE4CodeGen_Private::EPropertyClass::Object, "CancelJoinMenuButton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMainMenu, CancelJoinMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_CancelJoinMenuButton_MetaData, ARRAY_COUNT(NewProp_CancelJoinMenuButton_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuitButton_MetaData[] = {
				{ "BindWidget", "" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuitButton = { UE4CodeGen_Private::EPropertyClass::Object, "QuitButton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMainMenu, QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_QuitButton_MetaData, ARRAY_COUNT(NewProp_QuitButton_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinButton_MetaData[] = {
				{ "BindWidget", "" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JoinButton = { UE4CodeGen_Private::EPropertyClass::Object, "JoinButton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMainMenu, JoinButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_JoinButton_MetaData, ARRAY_COUNT(NewProp_JoinButton_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostButton_MetaData[] = {
				{ "BindWidget", "" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HostButton = { UE4CodeGen_Private::EPropertyClass::Object, "HostButton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMainMenu, HostButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_HostButton_MetaData, ARRAY_COUNT(NewProp_HostButton_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IPAddressField,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JoinMenu,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MainMenu,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MenuSwitcher,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConfirmJoinMenuButton,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CancelJoinMenuButton,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QuitButton,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JoinButton,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HostButton,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMainMenu>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMainMenu::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMainMenu, 624242264);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainMenu(Z_Construct_UClass_UMainMenu, &UMainMenu::StaticClass, TEXT("/Script/PuzzlePlatforms"), TEXT("UMainMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
