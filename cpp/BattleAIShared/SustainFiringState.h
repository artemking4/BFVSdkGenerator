// Object: SustainFiringState
// RuntimeId: 16380
// TypeInfo: 0x0000000144C07720

namespace BattleAIShared {
    enum SustainFiringState {
        SustainFiringState_Ready = 0,
        SustainFiringState_SpinUp = 1,
        SustainFiringState_BeginFiring = 2,
        SustainFiringState_Sustain = 3,
        SustainFiringState_Cooldown = 4
    };
}