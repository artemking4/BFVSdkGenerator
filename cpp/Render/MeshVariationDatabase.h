// Object: MeshVariationDatabase
// ClassId: 569
// RuntimeId: 64558
// TypeInfo: 0x0000000144F1CE80
#include "../Core/Asset.h"
#include "../Render/MeshVariationDatabaseEntry.h"
#include "../Render/MeshVariationDatabaseRedirectEntry.h"
#include "../Render/ParameterDesc.h"

#pragma pack(push, 8)
namespace Render {
    class MeshVariationDatabase : public Core::Asset {
        Array<Render::MeshVariationDatabaseEntry> Entries; // 0x20
        Array<Render::MeshVariationDatabaseRedirectEntry> RedirectEntries; // 0x28
        Array<Render::ParameterDesc> ParameterMap; // 0x30
    }; // 0x38
    static_assert(sizeof(MeshVariationDatabase) == 0x38);
}
#pragma pack(pop)