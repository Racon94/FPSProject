// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSProjectGameModeBase.h"

void AFPSProjectGameModeBase::StartPlay()
{
    Super::StartPlay();

    check(GEngine != nullptr);

    // ��ʾ������Ϣ���롣
    // -1"��"ֵ������ֹ����Ϣ�����»�ˢ�¡�
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is FPSGameModeBase!"));
}