// Copyright 2016 Helios. All Rights Reserved.

#pragma once

#include "HeliosGetterProxy_Float.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHeliosGetterFloatRequestDelegate, float, OutputValue);

UCLASS(MinimalAPI)
class UHeliosGetterProxy_Float : public UObject
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(BlueprintAssignable)
	FHeliosGetterFloatRequestDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FHeliosGetterFloatRequestDelegate OnFail;

public:
	void SendHeliosRequest(const FName HeliosClass, const FName ServerUrl);
	void OnHeliosRequestComplete(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded);
};
