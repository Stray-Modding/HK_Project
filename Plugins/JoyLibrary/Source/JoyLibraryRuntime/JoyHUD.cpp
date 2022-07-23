// Fill out your copyright notice in the Description page of Project Settings.

#include "JoyHUD.h"

#include <Assert.h>

void AJoyHUD::AddActorToDebugList(AActor* _actor)
{
	JOY_ASSERT_MSGF(m_additionalDebugActors.Find(_actor) == INDEX_NONE, TEXT("Actor \"%s\" already in debug list, check the symetry of your calls."), *_actor->GetName());
	m_additionalDebugActors.Add(_actor);
}

void AJoyHUD::RemoveActorFromDebugList(AActor* _actor)
{
	JOY_ASSERT_MSGF(m_additionalDebugActors.Find(_actor) != INDEX_NONE, TEXT("Actor \"%s\" not in debug list, check the symetry of your calls."), *_actor->GetName());
	m_additionalDebugActors.Remove(_actor);
}

void AJoyHUD::GetDebugActorList(TArray<AActor*>& InOutList)
{
	Super::GetDebugActorList(InOutList);
	InOutList += m_additionalDebugActors;
}