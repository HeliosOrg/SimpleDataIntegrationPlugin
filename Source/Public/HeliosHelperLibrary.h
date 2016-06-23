// Copyright 2016 Helios. All Rights Reserved.

#pragma once

#pragma once
#include "HeliosHelperLibrary.generated.h"

class UHeliosGetterProxy_FString;
class UHeliosGetterProxy_Bool;
class UHeliosGetterProxy_Int;
class UHeliosGetterProxy_Float;

class UHeliosSetterProxy_FString;
class UHeliosSetterProxy_Bool;
class UHeliosSetterProxy_Int;
class UHeliosSetterProxy_Float;

UCLASS()
class SIMPLEDATAINTEGRATION_API UHeliosHelperLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	// Getters

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "TRUE"))
	static UHeliosGetterProxy_FString* CreateHeliosGetterFStringProxyObject(UObject* WorldContextObject, FName HeliosClass, FName ServerUrl);

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "TRUE"))
	static UHeliosGetterProxy_Bool* CreateHeliosGetterBoolProxyObject(UObject* WorldContextObject, FName HeliosClass, FName ServerUrl);

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "TRUE"))
	static UHeliosGetterProxy_Int* CreateHeliosGetterIntProxyObject(UObject* WorldContextObject, FName HeliosClass, FName ServerUrl);

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "TRUE"))
	static UHeliosGetterProxy_Float* CreateHeliosGetterFloatProxyObject(UObject* WorldContextObject, FName HeliosClass, FName ServerUrl);

	// Setters

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "TRUE"))
	static UHeliosSetterProxy_FString* CreateHeliosSetterFStringProxyObject(UObject* WorldContextObject, FName HeliosClass, FName ServerUrl, FString InputValue);

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "TRUE"))
	static UHeliosSetterProxy_Bool* CreateHeliosSetterBoolProxyObject(UObject* WorldContextObject, FName HeliosClass, FName ServerUrl, bool InputValue);

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "TRUE"))
	static UHeliosSetterProxy_Int* CreateHeliosSetterIntProxyObject(UObject* WorldContextObject, FName HeliosClass, FName ServerUrl, int InputValue);

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "TRUE"))
	static UHeliosSetterProxy_Float* CreateHeliosSetterFloatProxyObject(UObject* WorldContextObject, FName HeliosClass, FName ServerUrl, float InputValue);
};
