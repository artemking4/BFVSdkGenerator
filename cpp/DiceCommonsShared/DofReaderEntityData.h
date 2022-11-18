// Object: DofReaderEntityData
// ClassId: 2645
// RuntimeId: 1488
// TypeInfo: 0x0000000144DB34B0
#include "../Entity/EntityData.h"
#include "../Ant/AntRef.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class DofReaderEntityData : public Entity::EntityData {
        Ant::AntRef DofSet; // 0x20
        char pad_0x34[0x4];
        CString DofSetName; // 0x38
        Array<Int32> DofNamesHashId; // 0x40
        Boolean StartReadingContinouslyOnSpawn; // 0x48
        Boolean ReadOnceOnSpawn; // 0x49
        char pad_0x4A[0x6];
    }; // 0x50
    static_assert(sizeof(DofReaderEntityData) == 0x50);
}
#pragma pack(pop)