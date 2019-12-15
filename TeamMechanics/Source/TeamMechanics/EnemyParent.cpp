// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyParent.h"
#include "Components/BoxComponent.h"
#include "TeamMechanicsProjectile.h"
#include "Engine.h"

// Sets default values
AEnemyParent::AEnemyParent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
    BodyMesh->SetupAttachment(RootComponent);

    HeadMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HeadMesh"));
    HeadMesh->SetupAttachment(RootComponent);
    HeadMesh->SetCollisionProfileName("HeadShot");

    HeadShotBox = CreateDefaultSubobject<UBoxComponent>(TEXT("HeadShotBox"));
    HeadShotBox->InitBoxExtent(FVector(60,60,60)); // set size of the collision
    HeadShotBox->SetCollisionProfileName("HeadShotBoxTrigger");
    HeadShotBox->SetupAttachment(HeadMesh);
}

// Called when the game starts or when spawned
void AEnemyParent::BeginPlay()
{
	Super::BeginPlay();
    HeadShotBox->OnComponentHit.AddDynamic(this, &AEnemyParent::OnHit);
}

// Called every frame
void AEnemyParent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemyParent::NotifyHit (
        class UPrimitiveComponent *MyComp,
        class AActor *Other,
        class UPrimitiveComponent *OtherComp,
        bool bSelfMoved,
        FVector HitLocation,
        FVector HitNormal,
        FVector NormalImpulse,
        const FHitResult &Hit
) {
    auto projectile = Cast<ATeamMechanicsProjectile>(Other);
    if (!projectile) { return ;}
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Black, FString::Printf(TEXT("Enemy::HP: %f"), HP));
    if (HP <= 0) {
        Destroy();
    }
}

void AEnemyParent::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
    auto projectile = Cast<ATeamMechanicsProjectile>(OtherActor);
    if (!projectile) { return; }
    isHeadShot = true;
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Enemy::Head shot enemy"));
}


