#pragma once

#include "mvItemRegistry.h"

namespace Marvel {

    class mvKeyReleaseHandler : public mvAppItem
    {

    public:

        static void InsertParser(std::map<std::string, mvPythonParser>* parsers);

        MV_APPLY_WIDGET_REGISTRATION(mvAppItemType::mvKeyReleaseHandler, add_key_release_handler)
        MV_DEFAULT_CHILDREN

    public:

        explicit mvKeyReleaseHandler(mvUUID uuid);

        void draw(ImDrawList* drawlist, float x, float y) override;
        void handleSpecificPositionalArgs(PyObject* dict) override;
        void handleSpecificKeywordArgs(PyObject* dict) override;
        void getSpecificConfiguration(PyObject* dict) override;
        void applySpecificTemplate(mvAppItem* item) override;

    private:

        int _key = -1;

    };

}
