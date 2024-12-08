// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/ABGameMode.h"

AABGameMode::AABGameMode()
{
	//static ConstructorHelpers::FClassFinder<APawn> ThirdPersonClassRef(
	//	TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C"));
	//// ThirdPersonClassRef가 유효하다면
	//if (ThirdPersonClassRef.Class)
	//{
	//	// 디폴트 폰 클래스 설정.
	//	DefaultPawnClass = ThirdPersonClassRef.Class;
	//}
	// DefaultPawnClass

	static ConstructorHelpers::FClassFinder<APawn> DefaultPawnClassRef(TEXT("/Script/Engine.Blueprint'/Game/ArenaBattle/Blueprint/BP_ABCharacterPlayer.BP_ABCharacterPlayer_C'"));
	if (DefaultPawnClassRef.Class)
	{
		DefaultPawnClass = DefaultPawnClassRef.Class;
	}
	
	// 헤더 include 없이 해당 클래스 주소를 통해
	// 플레이어 컨트롤러 클래스로 월드셋팅 설정
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerRef(TEXT("Script/ArenaBattle.ABPlayerController"));
	if (PlayerControllerRef.Class)
	{
		PlayerControllerClass = PlayerControllerRef.Class;
	}
}
