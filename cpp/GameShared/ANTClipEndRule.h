// Object: ANTClipEndRule
// RuntimeId: 3558
// TypeInfo: 0x0000000144E9D5D0

namespace GameShared {
    enum ANTClipEndRule {
        ANTClipEndRule_None = 0,
        ANTClipEndRule_CarryIntoNextTimeline = 1,
        ANTClipEndRule_LoopIndefinitely = 2,
        ANTClipEndRule_PlayIndefinitely = 3,
        ANTClipEndRule_MatchBarLengthToRuntimeLength = 4,
        ANTClipEndRule_LoopToEndOfTimeline = 5,
        ANTClipEndRule_DoNotLoop = 6,
        ANTClipEndRule_Invalid = 7
    };
}