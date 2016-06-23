// Copyright 2016 Helios. All Rights Reserved.

#pragma once

#include "HeliosGetterProxy_Int.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHeliosGetterIntRequestDelegate, int, OutputValue);

UCLASS(MinimalAPI)
class UHeliosGetterProxy_Int : public UObject
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(BlueprintAssignable)
	FHeliosGetterIntRequestDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FHeliosGetterIntRequestDelegate OnFail;

public:
	void SendHeliosRequest(const FName HeliosClass, const FName ServerUrl);
	void OnHeliosRequestComplete(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded);
};
