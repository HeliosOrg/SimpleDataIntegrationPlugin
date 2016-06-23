// Copyright 2016 Helios. All Rights Reserved.

#pragma once

#include "HeliosGetterProxy_FString.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHeliosGetterFStringRequestDelegate, FString, OutputValue);

UCLASS(MinimalAPI)
class UHeliosGetterProxy_FString : public UObject
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(BlueprintAssignable)
	FHeliosGetterFStringRequestDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FHeliosGetterFStringRequestDelegate OnFail;

public:
	void SendHeliosRequest(const FName HeliosClass, const FName ServerUrl);
	void OnHeliosRequestComplete(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded);
};
