from abc import ABC, abstractmethod

class Utility(ABC):
    @abstractmethod
    def set_details(self):
        pass
