'''
import unreal_engine as ue
ue.py_exec("WidgetGenerator.py")
'''
import importlib

import UEUtil
importlib.reload(UEUtil)

import LoggingUtil
# importlib.reload(LoggingUtil)

import WidgetUtil
importlib.reload(WidgetUtil)
 
LoggingUtil.reset()

import unreal_engine as ue
from unreal_engine.classes import WidgetBlueprintFactory, WidgetBlueprint
# from unreal_engine.enums import ESlateSizeRule

OUT_PATH = "/Game/UI/GameMenu/UI_GameMenu"


WidgetUtil.load(r"C:\Users\Non\Downloads\HWFModel\Output\Exports\SwGame\Content\UI\GameMenu\UI_GameMenu.json")

try:
    widget = ue.load_object(WidgetBlueprint, OUT_PATH)
except:
    widget = WidgetBlueprintFactory().factory_create_new(OUT_PATH)


widget.modify()
# TODO: Set Widget Parent Class
tree = widget.WidgetTree

tree.AllWidgets.clear()

allWidgets = []

newRoot = WidgetUtil.recursive_parse_node(
    WidgetUtil.follow_object_ref(WidgetUtil.find_tree_root()["Properties"]["RootWidget"]),
    tree,
    tree,
    allWidgets
)

tree.RootWidget = newRoot
tree.allWidgets = allWidgets


widget.post_edit_change()
ue.compile_blueprint(widget)

