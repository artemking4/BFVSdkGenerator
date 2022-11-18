// Object: InputToGameStateCutoffTimeMode
// RuntimeId: 60981
// TypeInfo: 0x0000000144DE7780

namespace DiceShooterShared {
    enum InputToGameStateCutoffTimeMode {
        InputToGameStateCutoffTimeMode_ReleaseAfterTime = 0,
        InputToGameStateCutoffTimeMode_ReleaseBeforeTime = 1,
        InputToGameStateCutoffTimeMode_KeepPressedUntilTime = 2,
        InputToGameStateCutoffTimeMode_KeepPressedMaxTime = 3
    };
}