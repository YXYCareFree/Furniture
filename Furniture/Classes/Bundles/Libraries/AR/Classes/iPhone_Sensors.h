#pragma once

#define UNITY_TVOS_SIMULATOR_FAKE_REMOTE (UNITY_TVOS && TARGET_TVOS_SIMULATOR)

enum LocationServiceStatus
{
    kLocationServiceStopped,
    kLocationServiceInitializing,
    kLocationServiceRunning,
    kLocationServiceFailed
};


#if UNITY_TVOS_SIMULATOR_FAKE_REMOTE
void ReportSimulatedRemoteButtonPress(UIPressType type);
void ReportSimulatedRemoteButtonRelease(UIPressType type);
void ReportSimulatedRemoteTouchesBegan(UIView* view, NSSet* touches);
void ReportSimulatedRemoteTouchesMoved(UIView* view, NSSet* touches);
void ReportSimulatedRemoteTouchesEnded(UIView* view, NSSet* touches);
#endif
