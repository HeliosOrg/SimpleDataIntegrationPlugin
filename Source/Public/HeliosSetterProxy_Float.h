#pragma once

#include "HeliosSetterProxy_Float.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHeliosSetterFloatRequestDelegate, bool, OutputValue);

UCLASS(MinimalAPI)
class UHeliosSetterProxy_Float : public UObject
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(BlueprintAssignable)
	FHeliosSetterFloatRequestDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FHeliosSetterFloatRequestDelegate OnFail;

public:
	void SendHeliosRequest(const FName HeliosClass, const FName ServerUrl, const float InputValue);
	void OnHeliosSetterRequestComplete(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded);
};
