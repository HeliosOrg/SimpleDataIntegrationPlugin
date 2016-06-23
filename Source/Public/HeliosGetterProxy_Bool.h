// Copyright 2016 Helios. All Rights Reserved.

#pragma once

#include "HeliosGetterProxy_Bool.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHeliosGetterBoolRequestDelegate, bool, OutputValue);

UCLASS(MinimalAPI)
class UHeliosGetterProxy_Bool : public UObject
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(BlueprintAssignable)
	FHeliosGetterBoolRequestDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FHeliosGetterBoolRequestDelegate OnFail;

public:
	void SendHeliosRequest(const FName HeliosClass, const FName ServerUrl);
	void OnHeliosRequestComplete(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded);
};
