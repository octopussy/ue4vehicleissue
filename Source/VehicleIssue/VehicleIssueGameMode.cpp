// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "VehicleIssue.h"
#include "VehicleIssueGameMode.h"
#include "VehicleIssuePawn.h"
#include "VehicleIssueHud.h"

AVehicleIssueGameMode::AVehicleIssueGameMode()
{
	DefaultPawnClass = AVehicleIssuePawn::StaticClass();
	HUDClass = AVehicleIssueHud::StaticClass();
}
