// Object: UpdatePassMask
// RuntimeId: 45326
// TypeInfo: 0x0000000144ED6AA0

namespace Entity {
    enum UpdatePassMask {
        EmptyUpdateMask = 0,
        PrePhysicsUpdateMask = 1,
        PostPhysicsUpdateMask = 2,
        PreAnimationUpdateMask = 4,
        PostAnimationUpdateMask = 8,
        PostFrameUpdateMask = 16,
        FrameInterpolationUpdateMask = 32,
        UpdatePassMaskCount = 6
    };
}