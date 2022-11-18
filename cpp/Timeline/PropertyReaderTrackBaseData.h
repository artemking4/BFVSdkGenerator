// Object: PropertyReaderTrackBaseData
// ClassId: 4034
// RuntimeId: 23654
// TypeInfo: 0x0000000144F63C10
#include "../Timeline/SchematicPinTrackData.h"
#include "../Core/Realm.h"

namespace Timeline {
    class PropertyReaderTrackBaseData : public Timeline::SchematicPinTrackData {
        Core::Realm Realm; // 0x40
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(PropertyReaderTrackBaseData) == 0x48);
}