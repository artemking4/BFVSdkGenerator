// Object: SoundDataState
// RuntimeId: 49270
// TypeInfo: 0x0000000144E1E7C0

namespace Audio {
    enum SoundDataState {
        SoundDataState_Unavailable = 0,
        SoundDataState_Pending = 1,
        SoundDataState_Cancelled = 2,
        SoundDataState_Lost = 3,
        SoundDataState_Valid = 4
    };
}