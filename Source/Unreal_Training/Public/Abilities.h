// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Abilities.generated.h"


/**
 * 
 */
UCLASS(BlueprintType,Blueprintable)
class UNREAL_TRAINING_API UAbilities : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, BlueprintSetter=SetStrength)
	int strength{0};
	UPROPERTY(BlueprintReadWrite,BlueprintSetter=SetConstitution)
	int constitution{0};
	UPROPERTY(BlueprintReadWrite,BlueprintSetter=SetDexterity)
	int dexterity{0};
	UPROPERTY(BlueprintReadWrite,BlueprintSetter=SetIntelligence)
	int intelligence{0};
	UPROPERTY(BlueprintReadWrite,BlueprintSetter=SetWisdom)
	int wisdom{0};
	UPROPERTY(BlueprintReadWrite,BlueprintSetter=SetCharisma)
	int charisma{0};

	UFUNCTION(BlueprintPure, meta=(DisplayName = "Abilities + Abilities", CompactNodeTitle = "+",
		CommutativeAssociativeBinaryOperator = true, Keywords = "+ add plus abilities"), Category="MyClasses")
	static UAbilities* AddAbilities(UAbilities* A, UAbilities* B);

	UFUNCTION(BlueprintPure, meta=(DisplayName = "Abilities - Abilities", CompactNodeTitle = "-",
		CommutativeAssociativeBinaryOperator = true, Keywords = "- subtract minus abilities"), Category="MyClasses")
	static UAbilities* SubtractAbilities(UAbilities* A, UAbilities* B);

	UFUNCTION(BlueprintCallable)
	void SetAbilities(int strengthValue, int constitutionValue, int dexterityValue, int intelligenceValue,
		int wisdomValue, int charismaValue);
	
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Abilities == Abilities", CompactNodeTitle = "==",
    		CommutativeAssociativeBinaryOperator = true, Keywords = "== equeal abilities"), Category="MyClasses")
    static bool EqualityCheck(UAbilities* A, UAbilities* B);

	/** Please add a variable description */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAbilityChange);
	UPROPERTY(BlueprintAssignable, EditDefaultsOnly, Category="Default")
	FAbilityChange StrengthChange;

	UPROPERTY(BlueprintAssignable, EditDefaultsOnly, Category="Default")
	FAbilityChange ConstitutionChange;

	UPROPERTY(BlueprintAssignable, EditDefaultsOnly, Category="Default")
	FAbilityChange DexterityChange;

	UPROPERTY(BlueprintAssignable, EditDefaultsOnly, Category="Default")
	FAbilityChange IntelligenceChange;

	UPROPERTY(BlueprintAssignable, EditDefaultsOnly, Category="Default")
	FAbilityChange WisdomChange;

	UPROPERTY(BlueprintAssignable, EditDefaultsOnly, Category="Default")
	FAbilityChange CharismaChange;

	UFUNCTION(BlueprintCallable, BlueprintSetter)
	void SetStrength(int value);
	UFUNCTION(BlueprintCallable, BlueprintSetter)
	void SetConstitution(int value);
	UFUNCTION(BlueprintCallable, BlueprintSetter)
	void SetDexterity(int value);
	UFUNCTION(BlueprintCallable, BlueprintSetter)
	void SetIntelligence(int value);
	UFUNCTION(BlueprintCallable, BlueprintSetter)
	void SetWisdom(int value);
	UFUNCTION(BlueprintCallable, BlueprintSetter)
	void SetCharisma(int value);

	UFUNCTION(BlueprintCallable)
	void AddStrength(int value);
	UFUNCTION(BlueprintCallable)
	void AddConstitution(int value);
	UFUNCTION(BlueprintCallable)
	void AddDexterity(int value);
	UFUNCTION(BlueprintCallable)
	void AddIntelligence(int value);
	UFUNCTION(BlueprintCallable)
	void AddWisdom(int value);
	UFUNCTION(BlueprintCallable)
	void AddCharisma(int value);	
};




