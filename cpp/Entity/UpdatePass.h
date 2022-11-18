// Object: UpdatePass
// RuntimeId: 50772
// TypeInfo: 0x0000000144ED5B00

namespace Entity {
    enum UpdatePass {
        UpdatePass_PreSim = 0,
        UpdatePass_PostSim = 1,
        UpdatePass_PostFrame = 2,
        UpdatePass_FrameInterpolation = 3,
        UpdatePass_PreInput = 4,
        UpdatePass_PreFrame = 5,
        UpdatePass_PreAnimation = 6,
        UpdatePass_AnimationAttach = 7,
        UpdatePass_PostAnimation = 8,
        UpdatePass_Count = 9
    };
}