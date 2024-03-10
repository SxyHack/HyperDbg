/**
 * @file exports.h
 * @author Sina Karvandi (sina@hyperdbg.org)
 * @brief HyperDbg exported functions
 * @details
 * @version 0.1
 * @date 2020-05-27
 *
 * @copyright This project is released under the GNU Public License v3.
 *
 */
#pragma once

//////////////////////////////////////////////////
//					  Exports                   //
//////////////////////////////////////////////////

//
// Exports
//
extern "C" {

extern bool inline AsmVmxSupportDetection();

//
// Support Detection
//
__declspec(dllexport) bool HyperDbgVmxSupportDetection();
__declspec(dllexport) void HyperDbgReadVendorString(char *);

//
// VMM Module
//
__declspec(dllexport) int HyperDbgLoadVmm();
__declspec(dllexport) int HyperDbgUnloadVmm();
__declspec(dllexport) int HyperDbgInstallVmmDriver();
__declspec(dllexport) int HyperDbgUninstallVmmDriver();
__declspec(dllexport) int HyperDbgStopVmmDriver();

//
// General exports
//
/*__declspec(dllexport)*/ int HyperDbgInterpreter(char * Command);
/*__declspec(dllexport)*/ void HyperDbgShowSignature();
/*__declspec(dllexport)*/ void HyperDbgSetTextMessageCallback(Callback handler);
/*__declspec(dllexport)*/ int HyperDbgScriptReadFileAndExecuteCommandline(int argc, char * argv[]);
/*__declspec(dllexport)*/ bool HyperDbgContinuePreviousCommand();
/*__declspec(dllexport)*/ bool HyperDbgCheckMultilineCommand(char * CurrentCommand, bool Reset);
}
