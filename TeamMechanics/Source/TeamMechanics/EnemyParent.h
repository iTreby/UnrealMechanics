// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyParent.generated.h"

UCLASS()
class TEAMMECHANICS_API AEnemyParent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyParent();

	UPROPERTY(VisibleAnywhere)
    class UStaticMeshComponent* BodyMesh;

    UPROPERTY(VisibleAnywhere)
    class UStaticMeshComponent* HeadMesh;

    UPROPERTY(VisibleAnywhere)
    class UBoxComponent* HeadShotBox;

//    UPROPERTY(VisibleAnywhere)
//    class UWidgetComponent* HPWidget;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    float HP = 1.0f;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    bool isHeadShot = false;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float damageWhenHit = 0.1;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void NotifyHit (
            class UPrimitiveComponent *MyComp,
            class AActor *Other,
            class UPrimitiveComponent *OtherComp,
            bool bSelfMoved,
            FVector HitLocation,
            FVector HitNormal,
            FVector NormalImpulse,
            const FHitResult &Hit
    ) override;


    UFUNCTION()
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

};
