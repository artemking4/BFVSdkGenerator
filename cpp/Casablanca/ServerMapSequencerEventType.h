// Object: ServerMapSequencerEventType
// RuntimeId: 2844
// TypeInfo: 0x0000000144C33E70

namespace Casablanca {
    enum ServerMapSequencerEventType {
        ServerMapSequencerEventType_Add = 0,
        ServerMapSequencerEventType_Remove = 1,
        ServerMapSequencerEventType_Clear = 2,
        ServerMapSequencerEventType_List = 3,
        ServerMapSequencerEventType_Load = 4,
        ServerMapSequencerEventType_Save = 5,
        ServerMapSequencerEventType_SetNextMapIndex = 6,
        ServerMapSequencerEventType_GetMapIndices = 7,
        ServerMapSequencerEventType_GetRounds = 8,
        ServerMapSequencerEventType_RunNextRound = 9,
        ServerMapSequencerEventType_RestartRound = 10,
        ServerMapSequencerEventType_AvailableMaps = 11,
        ServerMapSequencerEventType_GetCurrentMapInfo = 12,
        ServerMapSequencerEventType_GetNextMapInfo = 13
    };
}