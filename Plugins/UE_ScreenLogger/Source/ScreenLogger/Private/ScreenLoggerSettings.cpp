// Fill out your copyright notice in the Description page of Project Settings.

#include "ScreenLoggerSettings.h"

ELogVerbosity::Type ScreenLoggerVerbosityToLogVerbosity(EScreenLoggerVerbosity _verbosity)
{
	switch (_verbosity)
	{
	case ScreenLoggerVerbosity_NoLogging:	return ELogVerbosity::NoLogging;
	case ScreenLoggerVerbosity_Fatal:		return ELogVerbosity::Fatal;
	case ScreenLoggerVerbosity_Error:		return ELogVerbosity::Error;
	case ScreenLoggerVerbosity_Warning:		return ELogVerbosity::Warning;
	case ScreenLoggerVerbosity_Display:		return ELogVerbosity::Display;
	case ScreenLoggerVerbosity_Log:			return ELogVerbosity::Log;
	case ScreenLoggerVerbosity_Verbose:		return ELogVerbosity::Verbose;
	case ScreenLoggerVerbosity_VeryVerbose:	return ELogVerbosity::VeryVerbose;
	default:
		break;
	}
	return ELogVerbosity::NoLogging;
}
