#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NeonLineActor.generated.h"

/**
 * Simple actor that draws a glowing red line using debug drawing.
 * Increase the color intensity for a stronger neon effect.
 */
UCLASS()
class ANeonLineActor : public AActor
{
    GENERATED_BODY()

public:
    ANeonLineActor();

#if WITH_EDITOR
    virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
    virtual void OnConstruction(const FTransform& Transform) override;

    /** Line start relative to the actor location */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Neon Line")
    FVector StartPoint;

    /** Line end relative to the actor location */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Neon Line")
    FVector EndPoint;

    /** Line thickness */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Neon Line", meta=(ClampMin="0.1"))
    float Thickness;

    /** Color/intensity used for drawing the line */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Neon Line")
    FLinearColor Color;
};
