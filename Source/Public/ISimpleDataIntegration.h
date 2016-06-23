// Copyright 2016 Helios. All Rights Reserved.

#pragma once

#include "ModuleManager.h"

/**
 * The public interface to this module.  In most cases, this interface is only public to sibling modules
 * within this plugin.
 */
class ISimpleDataIntegration : public IModuleInterface
{

public:
	/**
	 * Singleton-like access to this module's interface.
	 *
	 * @return Returns singleton instance, loading the module on demand if needed
	 */
	static inline ISimpleDataIntegration& Get()
	{
		return FModuleManager::LoadModuleChecked< ISimpleDataIntegration >("SimpleDataIntegration");
	}

	/**
	 * Checks to see if this module is loaded and ready. It is only valid to call Get() if IsAvailable() returns true.
	 *
	 * @return True if the module is loaded and ready to use
	 */
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded( "SimpleDataIntegration" );
	}
};

