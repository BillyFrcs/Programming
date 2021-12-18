public class Game {
    private boolean _isRunning;
    private boolean _isAttack;

    private float _enemyHealth;

    private Game() {
        _isRunning = false;
        _isAttack = true;

        _enemyHealth = 50f;
    }

    public static void main(String[] args) throws Exception {
        Game PlayerGame = new Game();

        PlayerGame.PlayerMovement(10f);
        PlayerGame.PlayerAttack(50f);
    }

    private void PlayerMovement(float movementSpeed) {
        if (!_isRunning && movementSpeed > 1f) {
            System.out.println("Player is running...");
        }
    }

    private void PlayerAttack(float damage) {
        _isAttack = false;

        if (_isAttack || damage == 50f) {
            System.out.println("Player is attack enemy, with damage: " + String.format("%.0f", damage));

            _enemyHealth = 0f;

            float enemy = _enemyHealth <= 0f ? 0f : _enemyHealth;

            System.out.println("Enemy is dead with health is " + String.format("%.0f", enemy));
        }
    }
}
