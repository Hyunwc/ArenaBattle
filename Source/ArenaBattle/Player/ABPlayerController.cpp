// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/ABPlayerController.h"

void AABPlayerController::BeginPlay()
{
    Super::BeginPlay();

	// �������ڸ��� ���콺�� ����Ʈ ������ ���� �ȴ�.
	FInputModeGameOnly GameOnlyInputMode;
	SetInputMode(GameOnlyInputMode);
}