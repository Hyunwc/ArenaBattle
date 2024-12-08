// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/ABGameMode.h"

AABGameMode::AABGameMode()
{
	//static ConstructorHelpers::FClassFinder<APawn> ThirdPersonClassRef(
	//	TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C"));
	//// ThirdPersonClassRef�� ��ȿ�ϴٸ�
	//if (ThirdPersonClassRef.Class)
	//{
	//	// ����Ʈ �� Ŭ���� ����.
	//	DefaultPawnClass = ThirdPersonClassRef.Class;
	//}
	// DefaultPawnClass

	static ConstructorHelpers::FClassFinder<APawn> DefaultPawnClassRef(TEXT("/Script/Engine.Blueprint'/Game/ArenaBattle/Blueprint/BP_ABCharacterPlayer.BP_ABCharacterPlayer_C'"));
	if (DefaultPawnClassRef.Class)
	{
		DefaultPawnClass = DefaultPawnClassRef.Class;
	}
	
	// ��� include ���� �ش� Ŭ���� �ּҸ� ����
	// �÷��̾� ��Ʈ�ѷ� Ŭ������ ������� ����
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerRef(TEXT("Script/ArenaBattle.ABPlayerController"));
	if (PlayerControllerRef.Class)
	{
		PlayerControllerClass = PlayerControllerRef.Class;
	}
}
