// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/HorizontalBox.h"
#include "SCharacterUIWidget.generated.h"

class UTextBlock;
class UImage;

UCLASS()
class CHARACTERUI_API USCharacterUIWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	/** Character Block **/
	UPROPERTY(meta = (BindWidget))
	UImage* BackgroundImage;

	UPROPERTY(meta = (BindWidget))
	UImage* CharacterImage;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* NameTextBlock;

	/** Role Block **/
	UPROPERTY(meta = (BindWidget))
	UHorizontalBox* RoleHBox;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* RoleTextBlock;

	UPROPERTY(meta = (BindWidget))
	UImage* RoleImage;
};
