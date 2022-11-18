// Object: WeaponFiringEvent
// RuntimeId: 61725
// TypeInfo: 0x0000000144F7B3A0

namespace WeaponShared {
    enum WeaponFiringEvent {
        WeaponFiringEvent_Push = 0,
        WeaponFiringEvent_Pop = 1,
        WeaponFiringEvent_PrimaryStartedFiringCallback = 2,
        WeaponFiringEvent_PrimaryFireCallback = 3,
        WeaponFiringEvent_PrimaryFireReleaseCallback = 4,
        WeaponFiringEvent_PrimaryFireShotSpawnedCallback = 5,
        WeaponFiringEvent_PrimaryFireAutomaticBeginCallback = 6,
        WeaponFiringEvent_PrimaryFireAutomaticEndCallback = 7,
        WeaponFiringEvent_PrimaryStoppedFiringCallback = 8,
        WeaponFiringEvent_ReloadPrimaryCallback = 9,
        WeaponFiringEvent_ReloadPrimaryEndCallback = 10,
        WeaponFiringEvent_BoltActionCallback = 11,
        WeaponFiringEvent_BoltActionEndCallback = 12,
        WeaponFiringEvent_DetonationSwitchCallback = 13,
        WeaponFiringEvent_HoldAndReleaseDelayPassedCallback = 14,
        WeaponFiringEvent_HoldAndReleaseReleaseCallback = 15,
        WeaponFiringEvent_SecondaryActionCallback = 16,
        WeaponFiringEvent_UpdateRequired = 17
    };
}