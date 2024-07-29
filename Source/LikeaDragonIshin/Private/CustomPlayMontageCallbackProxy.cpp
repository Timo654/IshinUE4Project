#include "CustomPlayMontageCallbackProxy.h"

UCustomPlayMontageCallbackProxy::UCustomPlayMontageCallbackProxy() {
}

void UCustomPlayMontageCallbackProxy::OnNotifyEndReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload) {
}

void UCustomPlayMontageCallbackProxy::OnNotifyBeginReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload) {
}

void UCustomPlayMontageCallbackProxy::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void UCustomPlayMontageCallbackProxy::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

UCustomPlayMontageCallbackProxy* UCustomPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(USkeletalMeshComponent* InSkeletalMeshComponent, UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection) {
    return NULL;
}


