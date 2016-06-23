// Copyright 2016 Helios. All Rights Reserved.

#pragma once

#include "HeliosSetterProxy_FString.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHeliosSetterFStringRequestDelegate, bool, OutputValue);

UCLASS(MinimalAPI)
class UHeliosSetterProxy_FString : public UObject
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(BlueprintAssignable)
	FHeliosSetterFStringRequestDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FHeliosSetterFStringRequestDelegate OnFail;

public:
	void SendHeliosRequest(const FName HeliosClass, const FName ServerUrl, const FString InputValue);
	void OnHeliosSetterRequestComplete(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded);
};
