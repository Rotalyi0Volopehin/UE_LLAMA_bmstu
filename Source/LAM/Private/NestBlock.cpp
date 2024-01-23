// Fill out your copyright notice in the Description page of Project Settings.


#include "NestBlock.h"

ANestBlock::ANestBlock()
{
	temperature = 35;
	maxspeed = 200;
	BaseMaterial = ConstructorStatics.OrangeMaterial.Get();
	BlockMesh->SetMaterial(0, BaseMaterial);
}
