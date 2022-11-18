// Object: WeatherSequencerListenerEntityData
// ClassId: 3922
// RuntimeId: 5698
// TypeInfo: 0x0000000144CFA850
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/WSFloatVariable.h"
#include "../CasablancaShared/WSIntVariable.h"
#include "../CasablancaShared/WSBoolVariable.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class WeatherSequencerListenerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<CasablancaShared::WSFloatVariable> WSFloatVariables; // 0x28
        Array<CasablancaShared::WSIntVariable> WSIntVariables; // 0x30
        Array<CasablancaShared::WSBoolVariable> WSBoolVariables; // 0x38
        Int32 Dummy; // 0x40
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(WeatherSequencerListenerEntityData) == 0x48);
}
#pragma pack(pop)