#include "NeonLineActor.h"
#include "DrawDebugHelpers.h"

ANeonLineActor::ANeonLineActor()
{
    PrimaryActorTick.bCanEverTick = false;

    StartPoint = FVector::ZeroVector;
    EndPoint = FVector(100.f, 0.f, 0.f);
    Thickness = 5.f;
    Color = FLinearColor(5.f, 0.f, 0.f); // bright red for neon effect
}

void ANeonLineActor::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);

    if (GetWorld())
    {
        DrawDebugLine(
            GetWorld(),
            GetActorLocation() + StartPoint,
            GetActorLocation() + EndPoint,
            Color.ToFColor(true),
            true,
            -1.0f,
            0,
            Thickness);
    }
}

#if WITH_EDITOR
void ANeonLineActor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);
    OnConstruction(GetActorTransform());
}
#endif
