// Copyright 2016 Helios. All Rights Reserved.

#pragma once

#include "HeliosSetterProxy_Bool.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHeliosSetterBoolRequestDelegate, bool, OutputValue);

UCLASS(MinimalAPI)
class UHeliosSetterProxy_Bool : public UObject
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(BlueprintAssignable)
	FHeliosSetterBoolRequestDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FHeliosSetterBoolRequestDelegate OnFail;

public:
	void SendHeliosRequest(const FName HeliosClass, const FName ServerUrl, const bool InputValue);
	void OnHeliosSetterRequestComplete(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded);
};
