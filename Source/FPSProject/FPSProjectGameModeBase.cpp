// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSProjectGameModeBase.h"

void AFPSProjectGameModeBase::StartPlay()
{
    Super::StartPlay();

    check(GEngine != nullptr);

    // 显示调试消息五秒。
    // -1"键"值参数防止该消息被更新或刷新。
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is FPSGameModeBase!"));
}