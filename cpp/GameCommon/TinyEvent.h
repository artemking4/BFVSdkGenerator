// Object: TinyEvent
// RuntimeId: 25197
// TypeInfo: 0x0000000144E49730

namespace GameCommon {
    enum TinyEvent {
        TinyEvent_AckTimeSyncDone = 1,
        TinyEvent_AckLevelLinked = 2,
        TinyEvent_AckLevelRestarted = 3,
        TinyEvent_AckEnterPatchRecvState = 4,
        TinyEvent_AckAuthentication = 5,
        TinyEvent_NackAuthentication = 6,
        TinyEvent_AckExitLevel = 7,
        TinyEvent_CmdLinkLevel = 8,
        TinyEvent_CmdEnterPatchRecvState = 9,
        TinyEvent_CmdExitLevel = 10,
        TinyEvent_CmdContinueLevel = 11,
        TinyEvent_StatControllableRubberbanding = 12,
        TinyEvent_StatWorldRubberbanding = 13,
        TinyEvent_CmdExitLevelPinSubLevelBundles = 14
    };
}