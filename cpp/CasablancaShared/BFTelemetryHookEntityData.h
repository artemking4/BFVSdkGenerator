// Object: BFTelemetryHookEntityData
// ClassId: 2150
// RuntimeId: 49781
// TypeInfo: 0x0000000144D6D7B0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFTelemetryEvent.h"
#include "../Global/Boolean.h"
#include "../TelemetryShared/TelemetryParameterDataProperty.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFTelemetryHookEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        CasablancaShared::BFTelemetryEvent EventName; // 0x24
        Array<TelemetryShared::TelemetryParameterDataProperty> Params; // 0x28
        Boolean OnlyAllowLocalPlayerEventOnClient; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(BFTelemetryHookEntityData) == 0x38);
}
#pragma pack(pop)