// Object: DakarDebugEntityData
// ClassId: 2573
// RuntimeId: 60243
// TypeInfo: 0x0000000144D50650
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/DakarDebugZone.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DakarDebugEntityData : public Entity::EntityData {
        Float32 WorldXSize; // 0x20
        Float32 WorldZSize; // 0x24
        Float32 WorldXOffset; // 0x28
        Float32 WorldZOffset; // 0x2C
        Int32 CellsInX; // 0x30
        Int32 CellsInZ; // 0x34
        Array<CasablancaShared::DakarDebugZone> ZoneNames; // 0x38
        Int32 ConnectedPlayers; // 0x40
        Int32 AlivePlayers; // 0x44
    }; // 0x48
    static_assert(sizeof(DakarDebugEntityData) == 0x48);
}
#pragma pack(pop)