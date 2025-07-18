#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FPrimLifeModule : public FDefaultGameModuleImpl
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};
